#include <iostream>
#include "problems/problem_1.cpp"
#include "problems/problem_2.cpp"
#include "problems/problem_3.cpp"
#include "problems/problem_4.cpp"
#include "problems/problem_5.cpp"

using namespace std;

int main() {
    cout << "Problem 1\n";
    cout<<problemSolution1(55)<<endl;
    cout << "Problem 2\n";
    cout<<problemSolution2(89, 45, 1982)<<endl;
    cout << "Problem 3\n";
    cout<<problemSolution3(165, 'M')<<endl;
    cout << "Problem 4\n";
    cout<<problemSolution4( "18:20:3F:20:AB:11")<<endl;
    cout << "Problem 5\n";
    cout<<problemSolution5(11, 2, '*')<<endl;
    return 0;
}