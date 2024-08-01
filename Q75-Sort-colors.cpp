#include<iostream>
using namespace std;

void sortColor(int arr[] , int n){
    int zeroCount = 0;
    int oneCount = 0;
    int twoCount =0;

    for(int i=0;i<n;i++){
        if(arr[i] == 0){
            zeroCount++;
        }
        if(arr[i] == 1){
            oneCount++;
        }
        if(arr[i]== 2){
            twoCount++;
        }
    }

    int i = 0 ;

    for(i=0; i<zeroCount ; i++ ){
        arr[i]=0;
    }

    for(; i<zeroCount + oneCount ;i++){
        arr[i] = 1;
    }   

    for(; i< n ;i++){
        arr[i] = 2;
    }


}

//  Using two pointer approach - This is available on leetcode - 

// void sortColors(vector<int>& nums) {
//         int n = nums.size();
//         int left = 0;
//         int right = n - 1;
//         int index = 0;

//     while (index <= right ) {
//         if(nums[index] == 0){
//             swap(nums[index] , nums [left]);
//             left++;
//             index++;
//         }
//         else if(nums[index] == 2){
//             swap(nums[index], nums[right]);
//             right--;
//         }
//         else {
//             index++;
//         }

//     }
//     }


int main()
{

    int arr [] = {1,0,2,0,1,0,2,1};

    int n=8;

    sortColor(arr , n);

for(int i = 0 ; i<n ; i++){
    cout<<arr[i]<<" ";
}

 return 0;
}



