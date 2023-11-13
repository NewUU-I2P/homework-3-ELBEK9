float problemSolution2(float i, float j, float k) {
    float result;
    // write your code here;
    result = (i > j) ?
          (i > k ? i : k) :
          (k > j ? k : j);

    // Print the largest number
    return result;
}