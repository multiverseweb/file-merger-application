#File Merger Application

###Introduction

In today's digital age, we all deal with a large number of files on a daily basis. From documents and spreadsheets to media files like music and videos, we are constantly creating, downloading, and storing files on our devices. As a result, it can be challenging to manage and organise all these files, especially when we need to combine or merge them for specific purposes.
Fortunately, there are file merger applications available that simplify this task for us. These applications allow us to merge multiple files into a single document, making it easier to manage and share our data. Whether you need to combine several PDFs into one document, merge multiple images into a slideshow, or merge different types of files into one cohesive unit, a file merger application can help you accomplish this task quickly and efficiently. 
The essence of this project is to develop an interface to facilitate the file handling operations. Through this application, the user would be able to create text files, merge them, read them and also, delete them if required.











Proposed System

We will make this project by file handling using text files in c. It will be a menu-driven program, in which we will use an if-else ladder for different actions that the user wants to perform. Some of the actions that the user will be able to perform are:
✯ Create File                                               ✯ Merge Files
✯ Read File                                                 ✯ Delete File  
✯ Exit
Some of the functions that we will develop for the same purpose are as follows:

Functions developed:
create_file( ): This function will be used to create a new file for performing various operations on it.
read_file( ): This function will help the user to read the entire contents stored in the file.
merge_files( ): This function will help the user to merge two files by inputting the name of two files to be merged and the name of the merged file.
delete_file( ): This function will help the user to delete any text file.

*Note: The final code may vary from the system proposed in synopsis, depending on the issues that will be faced in future.










Flowchart | File Merger Application








Algorithm


Step-1: Display the menu options to the user.
Step-2: Prompt the user to enter their choice.
Step-3: If the user chooses to create a file, prompt them to enter the file name and the file contents. Create the file and write the contents to it.
Step-4: If the user chooses to merge files, prompt them to enter the names of the files to be merged. Merge the files and save the merged file.
Step-5: If the user chooses to read a file, prompt them to enter the name of the file to be read. Read the contents of the file and display it to the user.
Step-6: If the user chooses to delete a file, prompt them to enter the name of the file to be deleted. Delete the file.
Step-7: Repeat steps 2-6 until the user chooses to exit the program.



















SOURCE CODE

