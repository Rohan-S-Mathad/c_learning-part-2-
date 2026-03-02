# include <stdio.h>

int main(){
     int i=7;
     int* j=&i;
     int** k=&j;
     printf("the value of i is %d\n",i);
     printf("the value of i is %d\n",*j);
     printf("the value of i is %d\n",**k);
    //here '*' and '&' are like inverse function which cancles out each other    

     return 0;
}