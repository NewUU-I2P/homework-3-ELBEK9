float problemSolution1(float consumed_water) {
    float cost;
    // write your code here
    float fee=13.0;
    if (consumed_water < 30){
        cost =  fee + consumed_water * 0.4;
    }
    else if(consumed_water<50){
        cost = fee + 30 * 0.4 + (consumed_water - 30) * 0.12;
    }
    else if(consumed_water<60){
        cost = fee + 30 * 0.4 + 20 * 0.12 + (consumed_water - 50) * 1.4;
    }
    else {
        cost = fee + 30 * 0.4 + 20 * 0.12 + 10 * 1.4 + (consumed_water - 60) * 1.5;
    }
    return cost;
}
