/** Place_Value **/

#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main()
{
	long long int num, i, len=0, digit, temp;
	printf("Enter any number:");
	scanf("%lld", &num);
	temp=num;
	while(temp!=0)
	{
		len++;
		temp/=10;
	}
	temp=num;
	for(i=1;i<=len;i++)
	{
		digit=temp/((long long int)pow(10, len-i));
		printf("%lld", digit*((long int)pow(10, len-i)));
		temp=temp%((int)pow(10, len-i));
		if(i!=(len))
			printf(" + ");
	}
	
	return 0;
	
}
