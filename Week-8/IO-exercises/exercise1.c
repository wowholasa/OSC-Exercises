#include <stdlib.h>
#include <stdio.h>

int main() {
  char str[1000]; // string to store input
  FILE *file; // file pointer
  
  char filename[20] = "file.txt"; // file name

  // open file in write mode
  file = fopen(filename, "w");

  // check if file is opened successfully
  if (file == NULL) {
    printf("File not opened\n");
    exit(1);
  }
  printf("Enter a string: ");
  fgets(str, sizeof str, stdin); // get string from user
  fprintf(file, "%s", str); // write string to file
  fclose(file); // close file
  printf("Data written to file successfully\n");

  return 0;
}