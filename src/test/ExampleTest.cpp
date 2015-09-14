#define BOOST_TEST_MODULE example
#include <boost/test/included/unit_test.hpp>
using namespace boost::unit_test;

BOOST_AUTO_TEST_CASE( example )
/* Compare with void free_test_function() */
{
  BOOST_CHECK_EQUAL( true, false /* test assertion */ );
}