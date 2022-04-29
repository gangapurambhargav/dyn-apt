int* twoSum(int* nums, int numsSize, int target, int* returnSize)

{
*returnSize = 2;
int *returnValues = malloc((*returnSize) * sizeof(int));
int temp=0;
for(int i=0;i<numsSize;i++)
{
temp=target-nums[i];
for(int j=i+1;j<numsSize;j++)
{
if(temp==nums[j])
{
returnValues[0] = i;
returnValues[1] = j;
break;

   }
  }
 }  
return returnValues;
}