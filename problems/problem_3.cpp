#include <string>

std::string problemSolution3(float height, char S) {
    // write your code here
     std::string answer;
     if (S = 'M') {
         if (height<170){
             answer = "short";
         }
         else if(height>=170 && height < 185){
             answer = "normal";
         }
         else if (height>=185){
             answer = "tall";
         }
     }
    if (S = 'W') {
        if (height<160){
            answer = "short";
        }
        else if(height>=160 && height < 175){
            answer = "normal";
        }
        else if (height>=175){
            answer = "tall";
        }
    }
    // use return to return your result
    // make use of control flow statements
    return answer;
}