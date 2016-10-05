#include <stdio.h>
#include <string.h>

int getLength(char *str){
  int i = 0;
  while(*str){
    i++;
    *str++;
  }
  return i;

}


char * copypasta(char *dest , char *src){
  int i = getLength(src);
  int k = 0;
  for(k ; k < i; k ++){
    dest[k] = src[k];

  }
  dest[i] = 0;
  return dest;
}

char * nstringcat(char *dest, char *src, int n){
  int i = getLength(dest);
  while(*src && n){
    dest[i] = *src;
    *src++;
    n--;
    i++;
  }
  dest[i] =0;
  return dest;

}

int cmpTo(char *dest, char *src){
  while((*dest || *src) && *dest == *src){
        *dest++;
        *src++;
        }
  return (*dest - *src);
}

char * stirchar(char *s ,char c){

  while(*s){
     if(*s == c){
        return s;
     }
     *s++;
  }
  return "(null)";
}

void main(){
  char s1[15] = "potato";
  char s2[15] = "yes";
  char s3[15] = "potato";
  char s4[15] = "yes";
  char s5[15] = "potatos";
  char s6[15] = "no";
  char s7[15] = "potatoes";

  printf("s1:%s\ns2:%s\ns3:%s\ns4:%s\ns5:%s\ns6:%s\ns7:%s\n\n", s1,s2,s3,s4,s5,s6,s7);

  printf("getLength(s1): %d\n" , getLength(s1));
  printf("strlen(s1): %zu\n\n" , strlen(s1));

  printf("copypasta(s1,s2): %s\n" , copypasta(s1,s2));
  printf("strcpy(s5,s6): %s\n\n" , strcpy(s3,s4));

  printf("nstringcat{s6, s4 , 2): %s\n", nstringcat(s5,s6,2));
  printf("strncat(s2,s3, 2): %s\n\n", strncat(s7,s6,2));

  printf("cmpTo(s6,s7): %d\n" , cmpTo(s6,s7));
  printf("strcmp(s6,s7): %d\n\n", strcmp(s6,s7));

  printf("stirchar(s7,'y'): %s\n" , stirchar(s7,'o'));
  printf("strchr(s7,'y'): %s\n\n" , strchr(s7,'o'));
}
