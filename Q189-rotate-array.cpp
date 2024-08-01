#include<iostream>
#include<vector>
using namespace std;

//  This is using 2 pointer approach in leetcode-

void rotate(vector<int>& nums, int k) {
        int n = nums.size();
        vector <int> ans (n);

        for(int i=0 ;i<n;i++){
            int newIndex = (i+k) % n;
            ans[newIndex] = nums[i];
        }
//  The given function is void, so we don't have to return anything

nums = ans ;

}

int main()
{
int n, k;
    cout << "Enter the size of the array: ";
    cin >> n;

    vector<int> nums(n);
    cout << "Enter the elements of the array: ";
    for(int i=0; i<n; i++){
        cin >> nums[i];
    }

    cout << "Enter the number of positions to rotate: ";
    cin >> k;

    rotate(nums, k);

    cout << "Rotated array: ";
    for(int i=0; i<n; i++){
        cout << nums[i] << " ";
    }
    cout << endl;

 return 0;
}