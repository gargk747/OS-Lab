(A) PIPE: Three processes have to be created, First process reads data from a user specified file and through pipe sends this data to second process. 
Second process shall trim this input by removing extra spaces (only one blank between two words but there should be no blank before punctuation marks and there should be one blank after punctuation marks. 
Third process shall change the case of first character of every word to capital and rest to small case. This process should print these characters. 
This process should count number of words and pass this to first process, which shall print this.

(B) SHELL: You all have used shell (a shell is created when you launch terminal). So in this part, you shall write code for a very simple shell. Your shell
1. prints out a prompt of your choice ( Some examples PathName>, PathName::, PathName>>>);
2. reads user input (expected commands of execution such as ls, rm, mkdir); These commands can have their parameters such as ls -l, ls -a, ls -al
3. parses the line into the program name and an array of parameters (separated by delimiters).
4. uses the fork() system call to spawn a new child process;
5. The child process then uses the exec() system call (or one of its variants) to launch the specified program;
6. The parent process (the shell) uses the wait() system call (or one of its variants) to wait for the child to terminate;
7. Once the child (the launched program) finishes, the shell repeats the loop by jumping to Step 1.
8. When user types exit, shell terminates.
