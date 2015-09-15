#define BOOST_TEST_MODULE example
#include <boost/test/included/unit_test.hpp>
#include <boost/log/trivial.hpp>

using namespace boost::unit_test;
namespace logging = boost::log;

BOOST_AUTO_TEST_CASE( example )
/* Compare with void free_test_function() */
{
  BOOST_LOG_TRIVIAL(info) << "Start testing.";
  BOOST_CHECK_EQUAL( true, false /* test assertion */ );
}