#include <iostream>
#include "hello.hpp"

#define BOOST_TEST_MODULE test_main 
#include <boost/test/unit_test.hpp>

BOOST_AUTO_TEST_CASE( hello )
{
  lambda_test();
  BOOST_CHECK( 0 );
}

BOOST_AUTO_TEST_CASE( world )
{
  BOOST_FAIL("Ouch...");
}

