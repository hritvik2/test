# include<stdio.h>
# include <string.h>
int main(){
fflush(stdin);
int c,b;
char e;
printf("Select symbol\n");
scanf("%c",&e);
if (e =='a')
{

    printf("Tell the value of first number");
    fflush(stdin);
   scanf("%d",&c);
   printf("Tell the value of second number");
   fflush(stdin);
   scanf("%d",&b); 
   printf("Here is addition%d",c+b);
}
else if (e =='s')
{
    

    printf("Tell the value of first number");
    fflush(stdin);
   scanf("%d",&c);
   printf("Tell the value of second number");
   fflush(stdin);
   scanf("%d",&b); 
    
    printf("Here is addition%d",c-b);
}

else if (e =='m')
{

 
    printf("Tell the value of first number");
    fflush(stdin);
   scanf("%d",&c);
   printf("Tell the value of second number");
   fflush(stdin);
   scanf("%d",&b); 
    
    printf("Here is addition%d",c*b);
}
return 0;

}
