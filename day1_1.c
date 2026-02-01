// 1. Two Sum

// Given an array of integers nums and an integer target, return indices of the two numbers such that they add up to target.

// You may assume that each input would have exactly one solution, and you may not use the same element twice.

// You can return the answer in any order.

 

// Example 1:

// Input: nums = [2,7,11,15], target = 9
// Output: [0,1]
// Explanation: Because nums[0] + nums[1] == 9, we return [0, 1].
// Example 2:

// Input: nums = [3,2,4], target = 6
// Output: [1,2]
// Example 3:

// Input: nums = [3,3], target = 6
// Output: [0,1]

#include <stdlib.h>

int* twoSum(int* x,int y,int z,int* r)
{
int i,j;
int* a=(int*)malloc(2*sizeof(int));
*r=2;
for(i=0;i<y;i++)
{
for(j=i+1;j<y;j++)
{
if(x[i]+x[j]==z)
{
a[0]=i;
a[1]=j;
return a;
}
}
}
return a;
}
