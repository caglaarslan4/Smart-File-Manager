#include <stdio.h>
#include <stdlib.h>

void createFile();
void readFile();
void writerFile();
void renameFile();
void deleteFile();
void searchFile();


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

   while(1)
   {
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
            deleteFile();
            break;

         case 6:
            searchFile();
            break;

         case 7:
            return 0;
    
         default:
             printf("Wrong choice ! Please select a number between 1 and 7.\n");
      }  
   }
    return 0;
}
