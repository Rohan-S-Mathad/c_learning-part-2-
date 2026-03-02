# include <stdio.h>

int main(){
     int num[3];
     FILE *p;
     p=fopen("read.txt","r");
     for (int i = 0; i < 3; i++)
     {
          fscanf(p,"%d",&num[i]);
          
     }
     for (int i = 0; i < 3; i++)
     {
          printf("%d \n",num[i]);
     }
     
     
     return 0;
}