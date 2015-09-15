//
// Created by 郑虎 on 2015-09-15.
//

#include "HttpServer.h"
#include <boost/bimap.hpp>

namespace boost_server {
namespace http {

typedef boost::bimap<int, int> bm_type;

HttpServer::HttpServer() {

}

HttpServer::~HttpServer() {

}
}
}