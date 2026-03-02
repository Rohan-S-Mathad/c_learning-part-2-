# include <stdio.h>

int main(){
     int i = 72;
     int* j=&i;// j //is pointer pointing towards i
   //  %u can be used insted of %p to get the output in only integers
     printf("the adress of i is %p\n",&i);
     printf("the adress of j is %p\n",&j);
     //printf("the adress of i is %p\n")
     return 0;
}