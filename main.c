#include<stdio.h>
#include<string.h>
int main(){
  char string[20];
  int i, length;
  int character = 0;
  printf("Enter a word/letter/no.:");
  scanf("%s",string);
  length = strlen(string);
  for(i=0;i<length;i++){
    if(string[i] != string[length-i-1]){
      character = 1;
      break;
    }
  }
  if(character==1){
    printf("%s is not a palindrome", string);
  }
  else {
    printf("%s is a palindrome", string);
  }
  return 0;
}