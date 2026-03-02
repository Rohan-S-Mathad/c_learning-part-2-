# include <stdio.h>

int main(){
     int a=2;
     int* j=&a;
     int** k=&j;
     printf ("the value is %d",**(k));
     return 0;
}