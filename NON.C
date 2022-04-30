#include<stdio.h>
#include<conio.h>
void printRepeating(int arr[], int size)
{
int i,j;
clrscr();
printf("\n Repeating elements are:");
for(i=0;i<size;i++)
for(j=i+1;j<size;j++)
if(arr[i]==arr[j])
printf("%d",arr[i]);
}
int main()
{
int arr[]={4,2,4,5,2,3,1};
int arrsize=sizeof(arr)/sizeof(arr[0]);
getch();
return 0;
}
