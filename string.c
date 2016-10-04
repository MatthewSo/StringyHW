#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include <string.h>

int strlenMe(char *s){
   /* printf("%c\n", s); */ 
    /* printf("*%c\n", *s);  */
  int i = 0;
  int c = 0;
  for (i = 0; i <  INT_MAX; i++){
    if (s[i] == 0){
      return i;}
    else{
      c++;}}
  return c;}

int strchrMe(char *s, char c){
  /* printf("first position %d %c\n", s[1],s[1]); */
  /* printf("first position %d %c\n", c,c); */
  int i;
  int l = strlenMe(s);
  int ret = &s[0];
  for (i = 0; i < l; i++){
    if (s[i] ==  c){
      /* printf("%d\n",s[i]); */
      ret = &s[i];
      return ret;}
    }
  return 0;}

int strcmpMe(char *s1, char *s2){
  int lenOne;
  int lenTwo;
  lenOne = strlenMe(s1);
  lenTwo = strlenMe(s2);
  int uLen = lenTwo;
  if (lenOne > lenTwo){
    int uLen = lenOne;}
  int i;  
  for (i = 0; i < uLen; i++){
    if (s1[i] == NULL && s2[i] != NULL){
      return -1;}
    if (s1[i] != NULL && s2[i] == NULL){
      return 1;}
    if (s1[i] > s2[i]){
      return 1;}
    if (s1[i] < s2[i]){
      return -1;}
  }
  
  return 0;}

char *strncpyMe(char *dst, const char* src, size_t n)
{
  if (dst == NULL){
    return NULL;}
  if (src == NULL){
    return NULL;}
  size_t i;
  size_t c = 0;
  for(i = 0; i < n; i++)
    if(src[i] != NULL){
      dst[i] = src[i];
      c++;}
  for(; c < n; ){
    c++;
    dst[i] = '\0';}
  return dst;
}

char *strcatMe(char *dest, char *src) {
  int i = 0;
  int j = 0;
  int c = 0;
  int s = strlen(dest) + strlen(src) + 1;
  int space = s * sizeof(char);
  char *ret = (char*)malloc(space) ;

  for(i = 0; i < strlen(dest); i++) {
    ret[i] = dest[i];
  }

  for(j = i; j < strlen(src)+ strlen(dest); j++) {
    ret[j] = src[c];
    c++;
  }
  ret[s - 1] = '\0';
  return ret;
}


		      
    


int main(){
  char* test = "fgeldddlo";
  char* test2 = "foo";
  char* test3 = "feedle";
  char* test4 = "";
  
  printf("strchr Test Cases (library followed by my implementation):\n");
  printf("D: %d\n", strchr(test,'d'));
  printf("%d\n", strchrMe(test,'d'));
  printf("L: %d\n", strchr(test,'l'));
  printf("%d\n", strchrMe(test,'l'));
  printf("O: %d\n", strchr(test,'o'));
  printf("%d\n", strchrMe(test,'o'));
  printf("Z: %d\n", strchr(test,'z'));
  printf("%d\n", strchrMe(test,'z'));

  
  printf("strlen Test Cases (library followed by my implementation):\n");
  printf("%d\n", strlen(test));
  printf("%d\n", strlenMe(test));
  printf("%d\n", strlen(test2));
  printf("%d\n", strlenMe(test2));
  printf("%d\n", strlen(test3));
  printf("%d\n", strlenMe(test3));
  printf("%d\n", strlen(test4));
  printf("%d\n", strlenMe(test4));
  
  
  printf("strcmp Test Cases (library followed by my implementation):\n");
  printf("%d\n", strcmp("hello","helo"));
  printf("%d\n", strcmpMe("hello","helo"));
  printf("%d\n", strcmp("hello","hello"));
  printf("%d\n", strcmpMe("hello","hello"));
  printf("%d\n", strcmp("hello","heo"));
  printf("%d\n", strcmpMe("hello","heo"));
  printf("%d\n", strcmp("hello","elo"));
  printf("%d\n", strcmpMe("hello","elo"));
  printf("%d\n", strcmp("ello","helo"));
  printf("%d\n", strcmpMe("ello","helo"));
  printf("%d\n", strcmp(test,test));
  printf("%d\n", strcmpMe(test,test));

  printf("strncpyMe Test Cases (library followed by my implementation):\n");
  /* Create an example variable capable of holding 50 characters */
    char example[50];
    char example2[50];
    char example3[50];
    char example4[50];
    strncpy (example, "testing",4);
    printf("%s\n", example);
    strncpyMe(example,"testing",4);
    printf("%s\n", example);
    strncpy (example2, "testing",2);
    printf("%s\n", example2);
    strncpyMe(example2,"testing",2);
    printf("%s\n", example2);
    strncpy (example3, "te",6);
    printf("%s\n", example3);
    strncpyMe(example4,"te",6);
    printf("%s\n", example4);

    printf("strncatMe Test Cases (library followed by my implementation):\n");
  /* Create an example variable capable of holding 50 characters */
    char test1L[50],test2L[50],test3L[50],test4L[50],test5L[50],test6L[50],test1Me[50],test2Me[50],test3Me[50],test4Me[50],test5Me[50],test6Me[50];
    strcpy(test1L,"cat");
    strcpy(test2L,"bat");
    strcpy(test3L,"hat");
    strcpy(test4L,"");
    strcpy(test5L,"");
    strcpy(test6L,"pat");
    strcpy(test1Me,"cat");
    strcpy(test2Me,"bat");
    strcpy(test3Me,"hat");
    strcpy(test4Me,"");
    strcpy(test5Me,"");
    strcpy(test6Me,"pat");
    
    printf("%s\n", strcat (test1L,test2L) );
    printf("%s\n", strcatMe (test1Me,test2Me) );
    printf("%s\n", strcat (test3L,test4L) );
    printf("%s\n", strcatMe (test3Me,test4Me) );
    printf("%s\n", strcat (test5L,test6L) );
    printf("%s\n", strcatMe (test5Me,test6Me));
   
    

    
  /* strcpy("testjhkjk","hiee");   */
  /* printf("%c\n", strncpy("test","test2",3)); */
  /* printf("%d\n", strncpyMe("test","test2",3)); */
}

