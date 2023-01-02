#include <ctype.h>
int string_len(char *array) {
  int len = 0;
  char ch;
  while(ch != '\0'){
    ch = array[len];
    len += 1;
  }
  return len-1;
}

char* strip(char *array,char r) {
  int len = string_len(array);
  int i = 0;
  int j = 0;
  for(i=0;i<len;i++) {
    if(array[i]==r) {
      for(j=i;j<len;j++) {
        array[j] = array[j+1];
      }  
    }
  }
  return array;
}  

char* reverse(char *array) {
  int i = string_len(array)-1;
  int j = 0;
  char ch;
  while(i>j) {
    ch = array[i];
    array[i] = array[j];
    array[j] = ch;
    j++;
    i--;
  }
  return array;
}

char* replace(char *array,char r,char n) {
  int len = string_len(array),i=0;
  while(i<len) {
    if(array[i] == r) {
      array[i] = n;
    }
    i+=1;
  }
  return array;
}

char* upper(char *array) {
  int i=0, len = string_len(array);
  for(i=0;i<len;i++) {
    array[i] = toupper(array[i]);
  }
  return array;
}

char* lower(char *array) {
  int i=0, len = string_len(array);
  for(i=0;i<len;i++) {
    array[i] = tolower(array[i]);
  }
  return array;
}

int char_count(char *array,char ch) {
  int i=0,len = string_len(array),count=0;
  for(i=0;i<len;i++) {
    if(array[i] == ch) {
      count += 1;
    }
  }
  return count;
}

char *copy(char*array,char*array1) {
 int i=string_len(array),k=0;
 while(k<i) {
   array[k] = array1[k];
   k++;
 }
 return array;
}

int find_c(char *array, char f) {
  int i = string_len(array) , j = 0;
  for(j=0;j<i;j++) {
    if(array[j] == f) {
      return j;
    }
  }
  return 0;
}

