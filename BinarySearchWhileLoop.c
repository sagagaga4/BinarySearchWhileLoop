int BinarySearch(int *nums, int numsSize , int target )
{
  if(numsSize <= 0 || nums == NULL)
  {
    return -1;
  }
  
  int left = 0, right = numsSize - 1;
  while(left <= right)
    {
      int middle = left + (right - left)/2;

      if(nums[middle] == target)
      {
        return middle;
      }

      if(nums[middle] > target)
      {
        right = middle - 1;
      }

      if(nums[middle] < target)
      {
        left = middle + 1;
      }
      
    }
  return -1;
}
