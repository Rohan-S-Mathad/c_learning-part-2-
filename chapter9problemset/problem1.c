# include <stdio.h>
struct vectors
{
    int x;
    int y;
};

int main(){
  struct vectors v;
  v.x=2;
  v.y=3;
  printf("%di+%dj",v.x,v.y);   
     return 0;
}