import os
#from colorama import Fore
#from termcolor import colored

CRED = '\033[32m'
CEND = '\033[0m'

try:
    if os.path.isdir('build'):
        os.system("rm -r  build")

    os.system("mkdir build")
    os.system("mkdir build/artifacts")    

    os.system("g++ -std=c++11 templates.cpp -o build/templates")
    os.system("g++ -std=c++11 basic_references.cpp -o build/basic_references")
    os.system("g++ -std=c++11 constructors.cpp -o build/construct ")    

    #os.system("g++ -std=c++11 -o boost boost_testing_stuff.cpp -lboost_unit_test_framework -lboost_system")

    os.system("g++ -std=c++11 calling_funcs_from_other_classes.cpp -o build/callFuncsFromOtherClasses")
except:
    raise Exception("Sorry, no numbers below zero")
finally:
    print("---------------------------------")
    print(CRED + "The software was built with no errors" + CEND)
    print("---------------------------------")


# Do Valgrind on stuff --------------------------------------------
print("---------------------------------")
print(CRED + "Memcheck" + CEND)
print("---------------------------------")
directory = "build"
for filename in os.listdir(directory):
    f = os.path.join(directory, filename)
    # checking if it is a file
    if os.path.isfile(f):
        print(f)
        #os.system("./build/${f}")

#os.system("./build/templates")

os.system("valgrind --tool=memcheck --leak-check=yes --show-reachable=yes --num-callers=20 --track-fds=yes --log-file=build/artifacts/templates_memcheck.txt ./build/templates")

os.system("valgrind --tool=memcheck --leak-check=yes --show-reachable=yes --num-callers=20 --track-fds=yes --log-file=build/artifacts/basic_references_memcheck.txt ./build/basic_references")

os.system("valgrind --tool=memcheck --leak-check=yes --show-reachable=yes --num-callers=20 --track-fds=yes --log-file=build/artifacts/callFuncsFromOtherClasses_memcheck.txt ./build/callFuncsFromOtherClasses")

os.system("valgrind --tool=memcheck --leak-check=yes --show-reachable=yes --num-callers=20 --track-fds=yes --log-file=build/artifacts/construct_memcheck.txt ./build/construct")

os.system("txt2html build/artifacts/basic_references_memcheck.txt > build/artifacts/basic_references_memcheck.html")


print("---------------------------------")
print(CRED + "Done" + CEND)
print("---------------------------------")
