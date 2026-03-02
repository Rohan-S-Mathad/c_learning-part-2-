# include <stdio.h>
void swap(int*x,int*y);
void swap(int*x,int*y)
{
    int temp;
    temp=*x;
    *x=*y;
    *y=temp;
}
int main(){
     int a=4;int b=5;
     swap (&a,&b);
     printf("the value of a is %d and b is %d",a,b);
     return 0;
}