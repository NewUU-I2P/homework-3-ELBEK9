#include <sstream>

std::string problemSolution4(const std::string &macAddress) {
    // write your code here
    std::stringstream ss;
    // make use of control flow statements
    ss<<macAddress;
    std::string octet, result;
    std::getline(ss, octet, ':');
    std::stringstream convert(octet);
    int x;
    convert >> std::hex >> x;
    if (macAddress == "FF:FF:FF:FF:FF:FF") {
        result = "Broadcast";
    }
    else if (x % 2 == 0) {
        result = "Unicast";
    }
    else if (x % 2 != 0){
        result = "Multicast";
    }
    return result;
}
