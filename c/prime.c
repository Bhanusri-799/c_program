#include<stdio.h>
int PrimeOrNot(int);
void  main(){
    int n1,cnt;
    printf("\n\n Function : check whether a number is prime number or not :\n");
    printf("---------------------------------------------------------------\n");    	
    printf(" Input a positive number : ");
    scanf("%d",&n1);
    cnt = PrimeOrNot(n1);
   if(cnt==2)
        printf(" The number %d is a prime number.\n",n1);
   else
      printf(" The number %d is not a prime number.\n",n1);
}
int PrimeOrNot(int num)
{
    int i,count=0;
    for(i=1;i<=num;i++){
	 if(num%i==0)
	     count++;
    }
    return count;
}
