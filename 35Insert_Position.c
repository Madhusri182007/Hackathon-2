int searchInsert(int* nums, int numsSize, int target) {
    int i,c=0;
    for(i=0;i<numsSize;i++)
    {
        if(*(nums+i)==target)
        {
            return i;
        }
        else if(*(nums+i)>=target)
        {
            return i;
        }
        else if(*(nums+i)<target)
        {
            c++;
            if(c==numsSize)
            {
                return numsSize;
            }
        }
    }
    return 0;
}
