// g++ -std=c++11 -o boost boost_testing_stuff.cpp -lboost_unit_test_framework -lboost_system


#define BOOST_TEST_DYN_LINK
#define BOOST_TEST_MODULE HelloC
#include <boost/test/unit_test.hpp>

#include <iostream>
#include "namespace.h"
#include "../../lipm/mc_rtc/include/mc_control/mc_global_controller.h"
#include "../../lipm/mc_rtc/include/mc_control/MCController.h"
#include "../../lipm/mc_rtc/include/mc_solver/utils/ContactWrenchMatrixToLambdaMatrix.h"
using namespace std;

BOOST_AUTO_TEST_CASE(Arguments){
  auto argc = boost::unit_test::framework::master_test_suite().argc;
  auto argv = boost::unit_test::framework::master_test_suite().argv;
  cout << argc << endl;
  cout << argv << endl;
  cout << argv[argc+1] << endl;
  kurts_space::func();
  int argi = 1;
  cout << argv[1] << endl;
  /*if(std::string(argv[1]) == "--")
  {
    argi = 2;
  }
  //BOOST_CHECK_EQUAL(argc, argi + 1);
  std::string conf = argv[argi];
  //mc_rbdyn::Contact Contact(const mc_rbdyn::Contact&);
  //mc_control::MCGlobalController controller;
  //BOOST_CHECK_THROW(mc_control::MCGlobalController controller(conf), std::exception);*/
  mc_solver::utils::ContactWrenchMatrixToLambdaMatrix ContactWrenchMatrixToLambdaMatrix(const mc_solver::QPSolver & solver,const tasks::qp::ContactId & id);

}


