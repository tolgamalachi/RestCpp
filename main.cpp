#include <iostream>
#include <pistache/endpoint.h>
#include "GetTime.cpp"


int main() {
    Net::Address addr(Net::Ipv4::any(), Net::Port(3002));

    auto opts = Http::Endpoint::options().threads(1);
    Http::Endpoint server(addr);
    server.init(opts);
    server.setHandler(std::make_shared<GetTime>());
    server.serve();
}
