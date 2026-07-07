#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char fileName[100];
FILE *fptr;

void showMenu();
void createFile();
void readFile();
void writerFile();
void renameFile();
void deleteFile();
void searchFile();

int main(){
   int n;

   while(1)
   {
      showMenu();
      scanf("%d",&n);

      switch (n)
      {
         case 1:
            createFile();
            break;

         case 2:
            readFile();
            break;

         case 3:
            writerFile();
            break;

         case 4:
            renameFile();
            break;

         case 5:
           
            break;

         case 6:
            
            break;

         case 7:
            return 0;
    
         default:
            printf("Wrong choice ! Please select a number between 1 and 7.\n");
      }

   }
    return 0;
}

void showMenu()
{
   printf("============================\n");
   printf("     SMART FILE MANAGER     \n");
   printf("============================\n");
   printf("1. Create File\n");
   printf("2. Read File\n");
   printf("3. Write To File\n");
   printf("4. Rename File\n");
   printf("5. Delete File\n");
   printf("6. Search File\n");
   printf("7. Exit\n");

   printf("Choose an option:");
}

void createFile()
{
   printf("Create File seleced.\n");
   printf("Enter file name: ");
   scanf("%99s",fileName);
   fptr= fopen(fileName,"w");

   if(fptr==NULL)
   {
      printf("File  could not be created.\n");
   }

   else
   {
      printf("File created successfully.\n");
      fclose(fptr);
   }

}

void readFile()
{  
   char line[200];
   printf("Enter the name of the file to be read: ");
   scanf("%s",fileName);
   fptr=fopen(fileName,"r");
   if(fptr==NULL)
   {
      printf("Error: File not found or has not been created.\n");
      return;
   }
   else
   {
      printf("\n---- File Content ----\n");
      while(fgets(line,200,fptr))
      {
         printf("%s\n",line);
      }
      
   }
   
   fclose(fptr);

}
  


void writerFile()
{ 
  
  char data[200];
  printf("Enter the file name for the text you wish to write:");
  scanf("%s",fileName);
  getchar();

  fptr=fopen(fileName,"w");

  if(fptr==NULL)
   {
      printf("Error: File not found or has not been created.\n");
      return;
   }
   else
   {  
      printf("File open successful.\n");
      printf("Enter the your sentences (press enter to finish): ");
      
      while(1)
      {
        fgets(data,sizeof(data),stdin);
        if(strcmp(data, "\n")==0)
           break;
           
        fprintf(fptr, "%s",data);
      }
      printf("Data was written to file successfully.\n");
   }
  fclose(fptr);
}

void renameFile(){
   char newName[100];
   printf("Enter the current file name: ");
   scanf("%s",fileName);

   printf("Enter the new file name: ");
   scanf("%s",newName);

   if(rename(fileName, newName) == 0)
   {
      printf("File renamed successfully.\n");
   }
   else
   {
      printf("Error: File could not be renamed.\n");
   }
}