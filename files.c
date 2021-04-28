//TO PRINT THE CONTENTS OF THE FILE IN REVERSE ORDER

#include<stdio.h>
#include<conio.h>
int main()
{
    FILE *fp;
    char ch, fname[30], newch[500];
    int i=0, j, COUNT=0;
    fp = fopen("filesc.txt", "r");
    if(!fp)
    {
        printf("Error in opening the file...\nExiting...");
        getch();
        return 0;
    }
    printf("\nThe original content is:\n\n");
    ch = getc(fp);
    while(ch != EOF)
    {
        COUNT++;
        putchar(ch);
        newch[i] = ch;
        i++;
        ch = getc(fp);
    }
    printf("\n\n\n");
    printf("The content in reverse order is:\n\n");
    for(j=(COUNT-1); j>=0; j--)
    {
        ch = newch[j];
        printf("%c", ch);
    }
    printf("\n");
    getch();
    return 0;
}

//TO COPY FROM ONE FILE TO ANOTHER

#include <stdio.h>
#include <stdlib.h>
int main(){
   FILE *fptr1, *fptr2;
   char filename[100], c;
   fptr1 = fopen("filesc.txt", "r");
   if (fptr1 == NULL){
      printf("Cannot open file");
      exit(0);
   }
   
   fptr2 = fopen("filesc2.txt", "w");
   if (fptr2 == NULL){
      printf("Cannot open file" );
      exit(0);
   }
   c = fgetc(fptr1);
   while (c != EOF){
      fputc(c, fptr2);
      c = fgetc(fptr1);
   }
   printf("\nContents copied to filesc2");
   fclose(fptr1);
   fclose(fptr2);
   return 0;
}
