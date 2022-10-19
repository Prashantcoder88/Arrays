#include<iostream>
using namespace std;
    int frequency(int array[], int n, int x)
    {
        int freq = 0;
        for(int i = 0; i < n; i++)
        if(x == array[i])
        freq = freq + 1;
        return freq;
        
    }

int main()
{
    int nums[] = {4,6,7,7,8,8,8,9};
    int n = sizeof(nums)/sizeof(nums[0]);
    cout<< "Original array: ";
    for(int i = 0; i < n; i++)
    cout << nums[i] << " ";
    int x = 8;
    cout<< "\n frequency of 8: " << frequency(nums,n,x);
    return 0;
}

	