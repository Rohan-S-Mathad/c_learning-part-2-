# include <stdio.h>

int main(){
     int i = 72;
     int* j=&i;// j //is pointer pointing towards i(j is int )
   //  %u can be used insted of %p to get the output in only integers
     printf("the adress of i is %p\n",&i);
     printf("the adress of j is %p\n",&j);
     //printf("the adress of i is %p\n")
     return 0;
     char c='A';
     char* h=&c;//here c is a charcter and address of c is stored in h as address 
     // has a charecter hence char* is used simllar for float
     float k=169.00;
     float* o=&k;
}