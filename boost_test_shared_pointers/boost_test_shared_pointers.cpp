// g++ -std=c++11 -o shared_ptr_boost boost_test_shared_pointers.cpp shared_pointer.hpp -lboost_unit_test_framework -lboost_system


#define BOOST_TEST_DYN_LINK
#define BOOST_TEST_MODULE SharedPointer
#include <boost/test/unit_test.hpp>
#include "shared_pointer.hpp"



BOOST_AUTO_TEST_CASE(SharedPointerTest){
    using namespace shared_pointer;
    std::shared_ptr<Entity> copy_og_entity = the_og_entity; // copy the og pointer
    copy_og_entity -> PrintFunc(); // calls the function of the_og_entity
}
