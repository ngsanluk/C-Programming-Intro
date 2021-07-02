#include <stdio.h>
#include <string.h>

int n = 4;
char student[10][30] = {"Apple", "Ben", "Casey", "Don"};
int english[10] = {60, 70, 80, 90};
int chinese[10] = {61, 71, 81, 91};

void show_all() {
  printf("\nNo of students: %d", n);
  printf("\nStudent\tEnglish\tChinese");
  printf("\n=======================");
  int i = 0;
  for (i=0; i<n; i++) {
    printf("\n%s\t%d\t%d", student[i], english[i], chinese[i]);
  }
  printf("\n\n");
}

int check_exist(char * keyword) {
  int found = -1;
  int i = 0;
  for (i=0;i<n;i++) {
    if (strcmp(keyword, student[i]) == 0)
      found = i;
  }
  return found;
}

void search(char * keyword) {
  printf("\nSearching '%s' ... ", keyword);
  int found = -1;
  int i = 0;
  for (i=0;i<n;i++) {
    if (strcmp(keyword, student[i]) == 0){
      found = i;
      break; //once found, for loop can stop
    }
  }
  if (found == -1) {
    printf("Not Found!");
  } else {
    printf("Found at index %d", found);
    printf("\nName\t: %s", student[found]);
    printf("\nEnglish\t: %d", english[found]);
    printf("\nChinese\t: %d", chinese[found]);
    printf("\n\n");
  }
}

void add() {
  printf("\nAdding Eric to records ...");
  // in actual implementation, you have to check if a name already exist
  strcpy(student[n], "Eric"); // You cannot do student[n] = "Eric"
  english[n] = 99;
  chinese[n] = 98;
  n = n + 1;
}

void update() {
  printf("\nUpdating Apple's Marks ... \n");
  // in actual implementation, you will need to ask use to
  // input new value by using scanf() function
  english[0] = 90;
  chinese[0] = 91;
}

void delete(char * keyword) {
  printf("\nDeleting '%s' ... ", keyword);
  // in actual implementation, you have to check if a name already exist
  int found = -1;
  int i = 0;
  for (i=0;i<n;i++) {
    if (strcmp(keyword, student[i]) == 0)
      {
        found = i;
        break; //once found, for loop can stop
      }
  }
  if (found == -1) {
    printf("Not Found!");
  } else {
    printf("found at index %d", found);
    for (i=found; i<n; i++) {
      strcpy(student[i], student[i+1]);
      english[i] = english[i+1];
      chinese[i] = chinese[i+1];
    }
    n = n - 1;
    printf("\n");
  }
}

int main() {

  show_all();

  search("Eric");
  search("Ben");
  add();
  show_all();
  add(); // Eric will be duplicated.  You have to handle dupliction in yout project
  show_all();

  update();
  show_all();

  delete("Apple");
  show_all();
  delete("Eric");
  show_all();
  delete("Eric");
  show_all();
  delete("Eric");
  show_all();

  return 0;
}
