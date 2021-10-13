// g++ -std=c++11 -o struct.out  struct_namespace.cpp boost_test_struct_namespace.cpp struct_namespace.hpp -lboost_unit_test_framework -lboost_system



#define BOOST_TEST_DYN_LINK
#define BOOST_TEST_MODULE StructNamespace
#include <boost/test/unit_test.hpp>
#include "struct_namespace.hpp"




BOOST_AUTO_TEST_CASE(StructNamespaceTest){
    using namespace including_ns_struct;
    INS_Struct test_struct;
    test_struct.printfunc();
    //INS_Struct.printfunc();
    //test_struct::printfunc();
}
