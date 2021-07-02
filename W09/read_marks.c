/*
This is an advanced implementation of lab 6
record are read and stored in array for later repetitively accessing
*/

#include <stdio.h>

int main() {

  FILE *marks;
  const int MAX = 10; // This define the maximum number of records supported
  int n = 0; // number of records
  int i = 0; // for array iterating
  int available = 0; // if file input is successful

  char name[MAX][30];
  int english[MAX];
  int chinese[MAX];

  marks = fopen("./marks.txt", "r");
  if(marks == NULL){
    printf("ERROR: Cannot open file marks.txt\n");
  }

  available = fscanf(marks, "%s %d %d", name[0], &english[0], &chinese[0]);

  if(available>0)
    {
    i++;
    do {
      n++;
      available=fscanf(marks, "%s %d %d", name[i], &english[i], &chinese[i]);
      i++;
    } while(available>0 && n<MAX);
    }
  fclose(marks);

  i = 0;
  printf("\nNo of Student: %d", n);
  printf("\nStudent\tEnglish\tChinese");
  printf("\n=======================");
  for (i=0;i<n;i++) {
    printf("\n%s\t%d\t%d", name[i], english[i], chinese[i]);
  }
  printf("\n");

}
