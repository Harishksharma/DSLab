#include<stdio.h>
#include<math.h>
#define MAX_SIZE 10
int hash(int k)
{
	return k%MAX_SIZE;
}
int linear_probe(int h)
{
	return ++h%MAX_SIZE;
}
int Quadratic_probe(int h,int i)
{
	return (int)(h+pow(i,2))%MAX_SIZE;
}
int double_hash(int h,int i)
{
	return(h+i*linear_probe(h))%MAX_SIZE;
}
void display(int a[])
{
	int i;
	printf("\n the elrment of array are \n");
	for(i=0;i<MAX_SIZE;i++)
	printf("%d\t",a[i]);
}
int main()
{
	int a[MAX_SIZE],i,ch,h,e,count;
	for(i=0;i<MAX_SIZE;i++)
	a[i]=-1;
	
	do
	{
		count=0;
		printf("\nenter the number to be stored:");
		scanf("%d",&e);
		h=hash(e);
		if(a[h]==-1)
		{
			a[h]=e;
			display(a);
		}
		else
		{
			while(count<MAX_SIZE)
			{
				count++;
				printf("\n Collission Occured at %d",h);
				printf("\n please enter your choise for resolution:");
				printf("\n 1.linearprobling \n 2.Qudratic probling \n 3.Doublehashing \n");
				scanf("%d",&ch);
				switch(ch)
				{
					case 1:
					h=linear_probe(h);
					break;
					case 2:
					h=Quadratic_probe(h,count);
					break;
					case 3:
					h=double_hash(h,count);
					break;
					default:
					printf(" \n invalid choice");
					count--;
					break;
				}
				if(a[h]==-1)
				{
					a[h]=e;
					display(a);
					break;
				}
			}
		}
		if(count==MAX_SIZE)
		{
			printf("\n Array is full or collision resolutoion not successfull");\
			return 0;
		}
	}while(1);
	return 0;
}
 

