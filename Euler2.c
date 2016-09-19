
#include <stdio.h>

int main(){

  int s = 0;
  int x = 1;
  int y = 0;
  int r = 0;
  while( (s + x) < 4000000){
    if ( !((s + x) % 2)){
      y += (s + x);
    }
    r = s;
    s = x;
    x +=r;
  }
  printf("%d" , y);
  return y;
}

