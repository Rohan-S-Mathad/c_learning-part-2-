# include <stdio.h>

int main(){
     int a=73;
     int* j=&a;
     printf("the adress of variable a is %p \n", j);//%p is used for pointers
     printf("the value present at adress %p is %d",j,*j);
     return 0;
}