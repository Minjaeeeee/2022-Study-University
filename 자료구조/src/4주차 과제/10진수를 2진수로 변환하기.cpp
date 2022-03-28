#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//10진수를 2진수로변환  
int Trantwo(int n,int count)
{
   int arr[100];
   int na;
  
   
     na = n%2;
     arr[count] = na;
     //1씩증가합니다.
   
    if(n<2) 
   {
       arr[count] = n;
       for(int i=count; i>=0; i--)
        printf("%d",arr[i]);
       return 0;
   }
   
  
   printf("%d %d count=%d\n",n,na,count);
   Trantwo(n/2,count+1); //2로 나눈 값을 보내준다 
}



int main()
{
   int ten,two,sixteen;
    printf("10진수를 입력해주세요!: ");
    scanf("%d",&ten);
    Trantwo(ten,0);
}
