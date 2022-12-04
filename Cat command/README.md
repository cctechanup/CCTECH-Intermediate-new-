###### Test Strategy#######

1. cat is a unix command 
cat command prints the data on terminal.

#####  Test-Cases######

1. If we execute cat command without any argument then it will give standard input from user and print it on console.

2. If we execute cat command with single argument and that file is not present in that directory then it will give an error message i.e.
cat file_Name : no such file or directory and if that file is present then it will print all the contained of that file on terminal.

3. If we execute cat command with two or more argument  and all those files are present in that directory then it will print all the contained of all files on the terminal.

4. If we execute cat command with two or more argument  and from all some  those files are not present and some are present in that directory then it will print contained of that file and those files which are not present then it will give an error message i.e.
cat file_Name : no such file or directory.