#include <stdio.h>
#include<conio.h>

int main() {
  FILE *fptr,*f1,*f2;
  int num;
  fptr = fopen("c:\\program file\\number.txt", "w");
  
  if (fptr != NULL) {
    printf("File created successfully!\n");
  }
  else {
    printf("Failed to create the file.\n");
    return -1;
  }
  printf("Enter some integer numbers [Enter -1 to exit]: ");
  while (1) {
    scanf("%d", &num);
    if (num != -1) {
      putw(num, fptr);
    }
    else {
      break;
    }
  }
  fclose(fptr);
  fptr = fopen("c:\\program file\\number.txt", "r");
  printf("\nNumbers:\n");
  while ( (num = getw(fptr)) != EOF ) {
    printf("%d\n", num);
  }
  fclose(fptr);
  fptr=fopen("c:\\program file\\number.txt","r");
  f1 = fopen("c:\\program file\\ODD.txt","w");
    f2 = fopen("c:\\program file\\EVEN.txt","w");

    while((num = getw(fptr)) != EOF) /* Read from Data file */

    {
        if(num%2==0)
            putw(num,f2);
        else
            putw(num,f1);
    }
    fclose(fptr);
    fclose(f1);
    fclose(f2);

   f1 = fopen("c:\\program file\\ODD.txt","r");
    f2 = fopen("c:\\program file\\EVEN.txt","r");

    printf("\n\nContents of ODD file \n\n");
    while((num = getw(f1)) != EOF)
        printf("%d\n",num);

    printf("\n\nContents of EVEN file \n\n");
    while((num = getw(f2)) != EOF)
        printf("%d\n",num);

    fclose(f1);
    fclose(f2);
    getch();
}


