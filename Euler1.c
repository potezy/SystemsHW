#include <stdio.h>
int main(){

  int x = 0;
  int r = 3;
  while(r < 1000){

    if ((r % 3 == 0) || (r % 5 ==0)){
     x +=r;

    }
    r++;
  }

  printf("%d", x);
  return x;
}



