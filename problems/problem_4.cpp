#include <string>
#include <sstream>

std::string problemSolution4(const std::string &macAddress) {
    // write your code here
    std::stringstream ss;
    // make use of control flow statements
    ss<<macAddress;
    std::string first, result;
    int x;
    ss >> first >> std::hex >> x;
    if (x == 255) {
        result = "broadcast";
    }
    else if (x % 2 == 0) {
        result = "unicast";
    }
    else if (x % 2 != 0){
        result = "multicast";
    }
    return result;
}
