# include <stdio.h>

     int sum(int*,int*);
     int sum(int* x,int *y){
          *x = 8;// sum funtion can change the value of a as adress is sent to the function
        return *x+*y;
     }
int main (){
    int a=1,b=6;
    printf("the sum of a and b is %d",sum(& a,& b));
     return 0;
}