/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* buildArray(int* nums, int numsSize, int* returnSize) {
    int*arr=malloc(numsSize*sizeof(int));   //取得記憶體空間
    *returnSize=numsSize;          
    for(int i=0;i<numsSize;i++) //跑陣列長度的迴圈
    {
        arr[i]=nums[nums[i]];   //將陣列內的值取出並放入自定義的陣列
    }
    return arr;     //回傳答案
}