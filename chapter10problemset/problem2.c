# include <stdio.h>

int main(){
     FILE * ptr;
     ptr=fopen("read.txt","w");
     int num=14;
     fscanf(ptr,"%d",&num);
     for (int i = 1; i <=10; i++)
     {
        fprintf(ptr,"%d",num*(i+1));
        fprintf(ptr,"%c",'\n');
     }
     
     return 0;
}