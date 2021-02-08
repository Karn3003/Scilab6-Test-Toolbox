DEVELOPMENT OF FOSSEE OPTIMIZATION TOOLBOX FOR SCILAB

Part A

This directory contains C language code for finding Transpose of a Matrix of dimensions nxm.
It contains the main source code, function transpose code, transpose header file and "run.sh" file to compile and execute "main.c" and "trans.c".
SOFTWARE USED during writting this program
1) gcc compiler i.e gcc (Ubuntu 9.3.0-17ubuntu1~20.04) 9.3.0
2) UBUNTU-20.04 (linux)
3) Scilab 6.1.0

To test the code simply run "run.sh" file.

Incase of any query contact: karntiwari3003@gmail.com (KARN TIWARI)

Part B

1) To build toolbox run "script.sh" file.
2) Copy "libtrans.so" file to directory /repository/third_party/lib/x64.
3) Copy "trans.h" file to directory /repository/third_party/include.

IMPORTANT: All the above steps are already done. From here follow the instructions:

1) Open Scilab terminal.
2) Go to your repository folder.
3) Execute this command "exec builder.sce" to build toolbox.
4) Now Execute this command "exec loader.sce" to load toolbox.
5) Type "help" in the scilab console and browse through the help content of "test_toolbox" to know about transpose function.

Now transpose functions is ready to use in scilab workspace.
For example, 
	
	x = [1,2,3;4,5,6;7,8,9];
	y = transpose(x)
	
Incase of any query contact: karntiwari3003@gmail.com (KARN TIWARI)
