//test.c
//g++ --coverage -pg -o ctest test.c -lboost_unit_test_framework
//./ctest --log_level=all >ctest_results.txt
// or
// ./ctest --log_level=all --output_format=XML >ctest_results.xml
// gcov test.c
// lcov --directory ~/repos/gcov-test --capture --output-file testout
// genhtml testout 
// gprof ctest gmon.out > profiling.txt
#define BOOST_TEST_DYN_LINK
#define BOOST_TEST_MODULE HelloC
#include <boost/test/unit_test.hpp>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int subtract(int i, int j){
	return i-j;

}

int call_subtract(void){
	int a=5;
	int b=6;
	return subtract(a,b);
}

int conditional(int logical){
	if(logical==1){
		printf("This has been called\n");
	}
	else if(logical==0){
		printf("That has been called\n");
	}
	else{
		printf("an issue occured\n");
		return 0;
	}
	return 1;
}




BOOST_AUTO_TEST_CASE(subtractTest){
	BOOST_CHECK(subtract(3,3)==0);
}

BOOST_AUTO_TEST_CASE(call_subtractTest){
	BOOST_CHECK(call_subtract()==-1);
}

BOOST_AUTO_TEST_CASE(conditionalTest){
	printf("Running Conditional Tests...\n");
	BOOST_CHECK(conditional(1)==1);
	BOOST_CHECK(conditional(0)==1);
	BOOST_CHECK(conditional(10)==0);
}

BOOST_AUTO_TEST_SUITE(OtherTests)
BOOST_AUTO_TEST_CASE(thisTest){
	float f=981;
	float m=100;
	float a=9.81;
	BOOST_CHECK(f==round(m*a));
	printf("%f\n",(float)m*a); //this is 981.000061 - there is corruption
}
BOOST_AUTO_TEST_SUITE_END()
