# File Merger Application

## Introduction

In today's digital age, we all deal with a large number of files on a daily basis. From documents and spreadsheets to media files like music and videos, we are constantly creating, downloading, and storing files on our devices. As a result, it can be challenging to manage and organise all these files, especially when we need to combine or merge them for specific purposes.
Fortunately, there are file merger applications available that simplify this task for us. These applications allow us to merge multiple files into a single document, making it easier to manage and share our data. Whether you need to combine several PDFs into one document, merge multiple images into a slideshow, or merge different types of files into one cohesive unit, a file merger application can help you accomplish this task quickly and efficiently. 
The essence of this project is to develop an interface to facilitate the file handling operations. Through this application, the user would be able to create text files, merge them, read them and also, delete them if required.

## Proposed System

We will make this project by file handling using text files in c. It will be a menu-driven program, in which we will use an if-else ladder for different actions that the user wants to perform. Some of the actions that the user will be able to perform are:
<pre>
✯ Create File                     ✯ Merge Files
✯ Read File                       ✯ Delete File  
✯ Exit
</pre>
Some of the functions that we will develop for the same purpose are as follows:

Functions developed:
- create_file( ): This function will be used to create a new file for performing various operations on it.

- read_file( ): This function will help the user to read the entire contents stored in the file.

- merge_files( ): This function will help the user to merge two files by inputting the name of two files to be merged and the name of the merged file.

- delete_file( ): This function will help the user to delete any text file.

```
Note: The final code may vary from the system proposed in synopsis, depending on the issues that will be faced in future.
```

### Flowchart | File Merger Application

### Algorithm

* Step-1: Display the menu options to the user.
* Step-2: Prompt the user to enter their choice.
* Step-3: If the user chooses to create a file, prompt them to enter the file name and the file contents. Create the file and write the contents to it.
* Step-4: If the user chooses to merge files, prompt them to enter the names of the files to be merged. Merge the files and save the merged file.
* Step-5: If the user chooses to read a file, prompt them to enter the name of the file to be read. Read the contents of the file and display it to the user.
* Step-6: If the user chooses to delete a file, prompt them to enter the name of the file to be deleted. Delete the file.
* Step-7: Repeat steps 2-6 until the user chooses to exit the program.

SOURCE CODE
```c
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
   Sleep(2500);
   return 0;
}
```
