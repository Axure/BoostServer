//
// Created by 郑虎 on 2015-09-15.
//

#ifndef BOOSTSERVER_SERVER_H
#define BOOSTSERVER_SERVER_H

#include <boost/log/trivial.hpp>

namespace logging = boost::log;
namespace sinks = boost::log::sinks;
namespace src = boost::log::sources;
namespace expr = boost::log::expressions;
namespace attrs = boost::log::attributes;
namespace keywords = boost::log::keywords;

class Server {

 public:
  Server();
  ~Server();

 private:

};


#endif //BOOSTSERVER_SERVER_H
