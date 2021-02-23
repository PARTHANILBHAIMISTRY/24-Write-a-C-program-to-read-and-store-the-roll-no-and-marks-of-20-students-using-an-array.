//Write a C program to read and store the roll no and marks of 20 students using an array.
#include <stdio.h>
int main()
{
    int m[20],i,r[20];
    for (i=0;i<=3;i++)
    {
        printf("Enter roll no.:");
        scanf("%d",&r[i]);
        printf("Enter marks:");
        scanf("%d",&m[i]);
    }
    for (i=0;i<=3;i++)
    {
        printf("roll no.=%d\n",r[i]);
        printf("Marks = %d\n",m[i]);
    }
    return 0;
}
