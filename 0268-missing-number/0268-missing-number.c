int missingNumber(int* nums, int numsSize) {
    int total=numsSize*(numsSize+1)/2;
    int sum=0;
    for(int i=0;i<=numsSize-1;i++)
    {
        sum+=nums[i];
    }
    int missing=total-sum;
    return missing;
}