#include<stdio.h>

void swapping( int *ptr1,int*ptr2)
{   int temp;
    temp = *ptr1;
    *ptr1 = *ptr2;
    *ptr2 = temp;

}

int main()
{
    int x=10,y=20;
    printf("After swapping x=%d and y= %d\n",x,y);
    swapping(&x,&y);
    printf(" swapping x=%d and y= %d",x,y);
    return 0;
}