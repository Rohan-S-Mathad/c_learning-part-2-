# include <stdio.h>

int main(){
    char ch;
     FILE * ptr;
     ptr=fopen("1434.txt","r");
     while(1){
       ch =fgetc(ptr);
       if(ch==EOF){
           break;
        }
        printf("%c",ch);

     }
     return 0;
}