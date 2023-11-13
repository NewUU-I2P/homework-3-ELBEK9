#include "string"

std::string problemSolution3(float height, char S) {
    // write your code here
     std::string answer;
     if (S == 'M') {
         if (height<170){
             answer = "Short";
         }
         else if(height>=170 && height < 185){
             answer = "Normal";
         }
         else if (height>=185){
             answer = "Tall";
         }
     }
    if (S == 'W') {
        if (height<160){
            answer = "Short";
        }
        else if(height>=160 && height < 175){
            answer = "Normal";
        }
        else if (height>=175){
            answer = "Tall";
        }
    }
    // use return to return your result
    // make use of control flow statements
    return answer;
}