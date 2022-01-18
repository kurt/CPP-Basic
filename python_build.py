import os
#from colorama import Fore
#from termcolor import colored

cwd = os.getcwd()

import os
word="moo"
os.system('cowsay ' + word)
dir = cwd+"/gcov-test"
option=1
#os.system('-%s', option)
#os.system('%s %s' % ('ls', '-l'))
os.system('echo ' + dir + ' Hi')
print("Hi")
print(dir)
assert(os.system("echo ${dir}")==0)
assert(os.system("pwd")==0)
assert(os.system("cd ..")==0)

# Green
CRED = '\033[32m'
CEND = '\033[0m'

try:
    if os.path.isdir('build'):
        assert(os.system("rm -r  build")==0)

    assert(os.system("mkdir build")==0)
    assert(os.system("mkdir build/artifacts")==0)

    print("---------------------------------")
    print(CRED + "Cpp Check" + CEND)
    print("---------------------------------")
    assert(os.system("cppcheck --force --std=c11 . >cpp_check.txt")==0)
    print("---------------------------------")
    print(CRED + "Done Cpp Check" + CEND)
    print("---------------------------------")

    assert(os.system("g++ -std=c++11 templates.cpp -o build/templates")==0)
    assert(os.system("g++ -std=c++11 basic_references.cpp -o build/basic_references")==0)
    assert(os.system("g++ -std=c++11 constructors.cpp -o build/construct ")==0)    



    #os.system("g++ -std=c++11 -o boost boost_testing_stuff.cpp -lboost_unit_test_framework -lboost_system")

    assert(os.system("g++ -std=c++11 calling_funcs_from_other_classes.cpp -o build/callFuncsFromOtherClasses")==0)
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
        #assert(os.system("./build/${f}")==0)

#assert(os.system("./build/templates")==0)

assert(os.system("valgrind --tool=memcheck --leak-check=yes --show-reachable=yes --num-callers=20 --track-fds=yes --log-file=build/artifacts/templates_memcheck.txt ./build/templates")==0)
#ToDO - make sure that the valgrind passes!!!

assert(os.system("valgrind --tool=memcheck --leak-check=yes --show-reachable=yes --num-callers=20 --track-fds=yes --log-file=build/artifacts/basic_references_memcheck.txt ./build/basic_references")==0)


assert(os.system("valgrind --tool=memcheck --leak-check=yes --show-reachable=yes --num-callers=20 --track-fds=yes --log-file=build/artifacts/callFuncsFromOtherClasses_memcheck.txt ./build/callFuncsFromOtherClasses")==0)

assert(os.system("valgrind --tool=memcheck --leak-check=yes --show-reachable=yes --num-callers=20 --track-fds=yes --log-file=build/artifacts/construct_memcheck.txt ./build/construct")==0)

assert(os.system("txt2html build/artifacts/basic_references_memcheck.txt > build/artifacts/basic_references_memcheck.html")==0)

print("---------------------------------")
print(CRED + "Done Memcheck" + CEND)
print("---------------------------------")

print("---------------------------------")
print(CRED + "Unit Test with Code Coverage" + CEND)
print("---------------------------------")
#assert(os.system("g++ -I usr/local/boost_1_77_0 --coverage -pg -o build/ctest gcov-test/test.c -lboost_unit_test_framework")==0)
#assert(os.system("./build/ctest --log_level=all --output_format=XML >build/artifacts/ctest_results.xml")==0)
#assert(os.system("gcov test.c")==0)
#dir = cwd+"/gcov-test"
#assert(os.system("lcov --directory " + dir + " --capture --output-file build/testout")==0)
#assert(os.system("genhtml build/testout")==0)
print("---------------------------------")
print(CRED + "Done Coverage" + CEND)
print("---------------------------------")
