#include <stdio.h>
#include <stdlib.h>
#include<windows.h>
int main() {
   FILE *file1, *file2, *mergedFile,*newFile;
   char file[100],fileName1[100], fileName2[100], mergedFileName[100], c,text[100],buffer[1000];
   int a=1,ch,i;
   for(i=0;i<120;i++){
       printf("=");
   }
   printf("\n\t\t\t\t\tFILE MERGER APPLICATION\n");
   for(i=0;i<120;i++) {
       printf("=");
   }
   while(a==1) {
       printf("\n\n\tMENU");
       Sleep(10);
       printf("\033[0;32m");
       printf("\n1. Create File");
       Sleep(400);
       printf("\033[0;33m");
       printf("\n2. Merge files");
       Sleep(400);
       printf("\033[0;34m");
       printf("\n3. Read file");
       Sleep(400);
       printf("\033[0;35m");
       printf("\n4. Delete file");
       Sleep(400);
       printf("\033[0;36m");
       printf("\n5. Exit");
       Sleep(400);
       printf("\033[0m");
       printf("\nEnter your choice: ");
       scanf("%d",&ch);
       if(ch==1){
           printf("\033[0;32m");
           printf("Enter the name of file: ");
           scanf("%s", file);
           newFile = fopen(file, "w");
           if(newFile == NULL) {
               printf("\033[0;31m");
               printf("Error opening file.\n");
           }
           else{
               printf("Enter the text: ");
               scanf("%s",text);
               fprintf(newFile, "%s", text);
               fclose(newFile);
           }
       }
       else if(ch==2) {
           printf("\033[0;33m");
           printf("Enter the name of the first file: ");
           scanf("%s", fileName1);


           printf("Enter the name of the second file: ");
           scanf("%s", fileName2);


           // Open the first file for reading
           file1 = fopen(fileName1, "r");
           if (file1 == NULL) {
               printf("\033[0;31m");
               printf("Sorry! Could not open file %s\n", fileName1);
           }


           // Open the second file for reading
           file2 = fopen(fileName2, "r");
           if (file2 == NULL) {
               printf("\033[0;31m");
               printf("Sorry! Could not open file %s\n", fileName2);
           }


           // Create a new file for writing
           printf("Enter the name of the merged file: ");
           scanf("%s", mergedFileName);
           mergedFile = fopen(mergedFileName, "w");


           // Copy the contents of the first file to the merged file
           while ((c = fgetc(file1)) != EOF) {
               fputc(c, mergedFile);
           }


           // Copy the contents of the second file to the merged file
           while ((c = fgetc(file2)) != EOF) {
               fputc(c, mergedFile);
           }


           // Close the files
           fclose(file1);
           fclose(file2);
           fclose(mergedFile);
printf("Merging files");
           Sleep(1000);
           printf(". ");
           Sleep(1000);
           printf(". ");
           Sleep(1000);
           printf(". ");
           printf("\nFiles merged successfully.\n");
       }
       else if(ch==3){
           printf("\033[0;34m");
           printf("Enter the name of file: ");
           scanf("%s",fileName1);
           file1 = fopen(fileName1, "r");


           if(file1 == NULL) {
               printf("\033[0;31m");
               printf("Error opening file.\n");
           }
           while(fgets(buffer, 1000, file1) != NULL) {
               printf("%s", buffer);
           }
           fclose(file1);
       }
       else if(ch==4){
           printf("\033[0;35m");
           printf("Enter the name of file: ");
           scanf("%s",file);
           if(remove(file) == 0) {
               printf("File deleted successfully.\n");
           } else {
               printf("\033[0;31m");
               printf("Error deleting file.\n");
           }
       }
       else if(ch==5){
           break;
       }
       else{
           printf("\033[0;31m");
           printf("Invalid choice! >:(");
       }
       printf("\n");
       for(i=0;i<120;i++){
           printf("=");
       }
       printf("\033[0m");
       printf("\nDo you want to continue? (0/1): ");
       scanf("%d",&a);
       if(a!=0 && a!=1){
           printf("\033[0;31m");
           printf("Invalid reply! >:(\n");
           break;
       }
   }
   printf("\033[0;36m");
   printf("Thank you! ");
   Sleep(1000);
   printf(". ");
   Sleep(1000);
   printf(". ");
   Sleep(1000);
   printf(". :)\n");
   for(i=0;i<120;i++){
       printf("=");
   }
   Sleep(3000);
   return 0;
}
