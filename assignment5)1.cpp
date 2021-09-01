/*write a c program that reads data from input.txt file and wrties on the file output.txt*/
#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
int main ()
{
	FILE*from ,*to;
	char ch;
	from=fopen("c:\\nagendra\\input.txt","r");
	if(from==NULL)
	{
		printf("file cannot be created\n");
		exit(1);
    }
    to=fopen("c:\\nagendra\\output.txt","w");
    if(to==NULL)
  	{
  		printf("the output file cannot be created\n");
  		exit(1);
	}
	  while((ch=fgetc(from))!=EOF)
	  {
	  	fputc(ch,to);
	  }
	  printf("the data is successfully written to the file \n");
	  fclose(from);
	  fclose(to);
	  return 0;
}
