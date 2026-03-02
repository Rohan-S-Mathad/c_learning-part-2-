# include <stdio.h>

int main(){
     int marks[]={38,89,98,100};
     int * ptr=&marks[0];
     for (int i = 0; i < 5; i++)
     {
        printf("the value of marke is %d and %p\n",i,ptr);
        ptr++;
     }
     
     return 0;
}