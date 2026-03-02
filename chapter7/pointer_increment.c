# include <stdio.h>

int main(){
     float a=1.98;
     float *ptr=&a;
     printf("The adress is %u\n",&a);
     printf("The adress is %u\n",ptr);
    ptr++;
     printf("The value is %u\n",ptr);
     return 0;
}