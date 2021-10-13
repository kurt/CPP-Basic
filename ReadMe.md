**Topics Covered**

- Namespaces
- Virtual Functions
- Subclasses
- Templates
- Const and auto keywords
- Headers in  cpp
- Constructors
- Unique Pointers
- Shared  Pointers
- Namespaces and including them in headers and multiple files
- Shared pointers in different namespace calls... 
- Posix Threads
- Basic References

**My To Do**

- References
- play around more with const pointers etc and volatile
- Namespaces and including them in headers and multiple files
- Show OOP concepts - encapsulation, polymorphism, etc
- assert - I have done this in cmake-sandbox
- gcc profiling

**Basic Usage**

Each script has a comment at the top which shows the intended run operation. SOme header files are for some source files. 

**Scripts  and what they do:**

- boost_testing_stuff.cpp: has an example of boost testing - is a place to to test boost api
- call_namespace.cpp: calls the namespace that is defined in namespaces.cpp through including namespace.h
- const_and_auto.cpp: example of the way to use a const method in a class and how auto automatically assigns variable type.
- constructors.cpp: this shows how a constructor is called and how functions can be called when an entity is created if included in the constructor.
- my_class_template.cpp: uses templates of classes to create objects with various type arrays inside
- my_print_template.cpp: a template that prints anything that you send to it
- namespace.hpp: currently not used
- namespaces.cpp: calls two different functions from two different namespaces
- templates.cpp: a template inline function that returns which is greater, also prints __ FILE __ Predefined C++ Macros
- virtual_functions.cpp: shows virtual functions and how they work in subclasses
- enum.cpp - shows a basic usage of an enumeration
- signal_handling.cpp: handles a SIGINT from command line, and when it does it flushes it using __gcov_flush()

**Subdirectories**

/subdir: 

- test_header_link.cpp: tests the include a header in another directory without issue;

/include:

- header_to_link file included in test_header_link.cpp 

/boost_test_shared_pointers

- Does boost tests with shared pointers and structures

/CPP-Udacity

- Some Code from the free udacity course I took

/tools 

- useful commands and tool usage for cpp and c

/WindowsExe

- Windows executables versus linux

