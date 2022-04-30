#include<stdio.h>
int main(void)
{
int arr1[100],arr2[100],len1,len2,i,p=0,q=0)
printf("\n Enter the length of 1st array(Max 100)\n");
scanf("%d"&len1);
printf("\n Enter the sorted values for 1st array\n");
for(i=0;i<len1;i++)
{
scanf("%d",&arr1[i]);
}
printf("\n Enter the length of 2nd array(Max 100)\n");
scanf("%d",&len2);
printf("\n Enter the sorted values for 2nd array\n");
for(i=0;i<len2;i++)
{
scanf("%d",&arr2[i]);
}
while(p<=len1&&q<=len2)
{
if(arr1[p]<arr2[q])
{
p++;
}
else if(arr2[q]<arr1[p])
{
q++;
}
else if(arr1[p]==arr2[q])
{
printf("%d",arr1[p]);
p++;
q++;
}
}
return 0;
}
