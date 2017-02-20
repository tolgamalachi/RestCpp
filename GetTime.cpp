#include <pistache/net.h>
#include <pistache/http.h>
#include <iostream>
#include <ctime>

using namespace Net;
using namespace std;

class GetTime : public Http::Handler {
public:

HTTP_PROTOTYPE(GetTime)

    void onRequest(const Http::Request &request, Http::ResponseWriter response) {
        stringstream res;
        time_t result = time(nullptr);
        res << result    /*seconds since the Epoch*/
            << endl;
        response.send(Http::Code::Ok, res.str());
    }
};
