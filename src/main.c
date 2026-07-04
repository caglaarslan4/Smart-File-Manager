#include <stdio.h>
int main(){
    int n;
    printf("============================\n");
    printf("     SMART FİLE MANAGER     \n");
    printf("============================\n");
    printf("1. Create File\n");
    printf("2. Read File\n");
    printf("3. Write To File\n");
    printf("4. Rename File\n");
    printf("5. Delete File\n");
    printf("6. Search File\n");
    printf("7. Exit\n");

    printf("Choose an option:");
    scanf("%d",&n);
    
   

    if(n<=0 || n>=8)
    {
       printf("Wrong choice! Please select a number between 1 and 7. ");
    } 
    else
    {
       printf("you selected: %d\n",n);
    }

    switch (n)
    {
    case 1:
      char fileName[100];
      FILE *fptr ;
      
      printf("Create File selected.\n");
      printf("Enter file name: ");
      scanf("%99s",fileName);
      fptr = fopen(fileName, "w");

      if(fptr== NULL)
      {
         printf("File could not be created.\n");
      }

      else
      {
         printf("File created succesfully.\n");
         fclose(fptr);
      }

      break;

   case 2:
      printf("Read File selected.\n");
      break;

   case 3:
      printf("Write File selected.\n");
      break;

   case 4:
      printf("Rename File selected.\n");
      break;

   case 5:
      printf("Delete File selected.\n");
      break;

   case 6:
      printf("Search File selected.\n");
      break;

   case 7:
      printf("Goodbye!\n");
      break;
    
    default:
      printf("Wrong choice ! Please select a number between 1 and 7.\n");
      
    }
    return 0;
}