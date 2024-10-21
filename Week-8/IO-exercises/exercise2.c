#include <stdlib.h>
#include <stdio.h>

int main() {
  char str; // string to store input
  FILE *file; // file pointer
  char filename[20];

  printf("\n\n Read an existing file :\n");
	printf("------------------------------\n"); 
	printf(" Input the filename to be opened : ");
	scanf("%s", filename);

  // open file in read mode
  file = fopen(filename, "r");

  // check if file is opened successfully
  if (file == NULL) {
    printf("File not opened\n");
    exit(1);
  }
  
  printf("\n The content of the file %s is  :\n",filename);
	str = fgetc(file);
  while (str != EOF) {
    printf("%c", str);
    str = fgetc(file);
  }
  fclose(file); // close file
  printf("\n\n");
  
  return 0;
}