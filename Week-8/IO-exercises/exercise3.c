#include <stdlib.h>
#include <stdio.h>

int main() {
  int i,n;
  char str[1000]; // string to store input
  FILE *file; // file pointer
  char filename[20] = "file3.txt"; // file name
  char str1;

  printf("\n\n Write multiple lines in a text file and read the file :\n");
	printf("------------------------------------------------------------\n");   
	printf(" Input the number of lines to be written : ");
	scanf("%d", &n);
	printf("\n :: The lines are ::\n");
	file = fopen (filename,"w"); 
	for(i = 0; i < n+1;i++)
		{
		fgets(str, sizeof str, stdin);
		fputs(str, file);
		}
  fclose (file);
  /*-------------- read the file -------------------------------------*/
	file = fopen (filename, "r");  
	printf("\n The content of the file %s is  :\n",filename);
	str1 = fgetc(file);
	while (str1 != EOF)
		{
			printf ("%c", str1);
			str1 = fgetc(file);
		}
    printf("\n\n");
    fclose (file);
  return 0;
}