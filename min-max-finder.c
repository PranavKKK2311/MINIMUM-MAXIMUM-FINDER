#include<stdio.h>
int main(){
	int a[10],n,i,count=0,min,max;
	printf("Enter the number of values to be calculated : ");
	scanf("%d",&n);
	for (i=0; i<n ; i++)
		{
			printf("Enter the values you want to calculate: ");
			scanf("%d",&a[i]);
			if(a[i]==0)
			{
				break;
			}
		count++;
		}
	min = max = a[0];
	for (i=1;i<count;i++)
	{
		if (a[i]<min)
		{
		min=a[i];
		}
	}
	printf("\nThe minimum value is :%d\n",min);
	
	for (i=1;i<count;i++)
	{
		if (a[i]>max)
		{
		max=a[i];
		}
	}
	printf("\nThe minimum value is :%d",max);


	return 0;
}
