#include<stdio.h>
void quicksort(int a[],int p,int r)
{
    int i=p+1;
    int j=r;
    if(p < r)
    {
        while(i<j)
        {
            if(a[i]>a[p])
            {
                swap(&a[i],&a[j]);
                j--;
            }
            else
            {
                i++;
            }
        }
        if(a[i]>=a[p])
        {
            i--;
        }

        swap(&a[p],&a[i]);
        quicksort(a,p,i);
        quicksort(a,j,r);
    }
}
void swap(int *a,int *b)
{
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;
}

int main()
{
    int a[]={23,45,7,89,34,2,67,9,78};
    int length=sizeof(a)/sizeof(int);
    printf("-------原序列-------\n");
    for(int i=0;i<length;i++)
    {
        printf("%3d",a[i]);
    }

    quicksort(a,0,length-1);

    printf("\n-------排序后-------\n");
    for(int i=0;i<length;i++)
    {
        printf("%3d",a[i]);
    }

}
