#include <iostream>
#include <iomanip>
#include <vector>
#include <map>
#include <algorithm>
using namespace std;

double mean(const vector<int> &nums){

    int sum = 0;
    for( int i = 0 ; i < nums.size() ; i ++ )
        sum += nums[i];

    return (double)sum/nums.size();
}
double median(vector<int> nums) {

  sort(nums.begin(), nums.end());

  if (nums.size() % 2)
    return nums[nums.size() / 2];
  else
    return (double)(nums[nums.size() / 2] + nums[nums.size() / 2 - 1]) / 2.0;
}
double mode(vector<int> nums)
{
    double mode;
    sort(nums.begin(),nums.end());
    double number = nums.at(0);

    for(int i=0,countMode=1,count=1;i<nums.size();i++)
    {
        if(nums[i]==number) ++countMode;
        if(countMode > count) 
        {
            count = countMode;
            mode = number;
        }
    }
    return (double)mode;

    
}


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int N;
    cin>>N;

    vector<int> nums;
    int x;
    for( int i = 0 ; i < N ; i ++ ){
        cin>>x;
        nums.push_back(x);
    }
        // Mean
    cout<<fixed<<setprecision(1)<<mean(nums)<<endl;
    //medial
    cout<<fixed<<setprecision(1)<<median(nums)<<endl;
    //mode
    cout<<fixed<<setprecision(1)<<mode(nums)<<endl;

    return 0;
}
