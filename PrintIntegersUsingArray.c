//Read five integers from user and print them using integer array
#include<stdio.h>
int main()
{
    int n=5;
    int arr[5];
    //read five integers from the user using array
    for(int i=0;i<5;i++)
    {
        printf("Enter the %d Element:\n",i+1);
        scanf("%d",&arr[i]);
    }
    //print the five integers using intger array
    for(int i=0;i<5;i++)
    {
        printf("The %d Integer=%d\n",i+1,arr[i]);

    }
    return 0;

} 