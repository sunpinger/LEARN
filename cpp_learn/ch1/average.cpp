#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector<float> nums;
    nums = {1,2,3,4,5,6,7,8};

    float avg;
    for(int i=0;i<nums.size();i++){
        avg += nums[i];
    }
    printf("Averag: %f",avg/nums.size());

    return 0;
}