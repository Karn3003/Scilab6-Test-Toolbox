This repository is a test toolbox for Scilab. It requires "thirdparty" directory which can be downloaded as "external-library.zip" file from the page: https://scilab.in/fossee-scilab-toolbox. The "thirdparty" directory contains compiled library for a simple "multiplication" function written in C. After copying the "thirdparty" directory to the toolbox directory, on the scilab console run "exec builder.sce" to build the toolbox and then run "exec loader.sce" to load the toolbox.  Type "help" in the scilab console and browse through the help content of "test_toolbox". The external-library.zip file also contains separate instructions to work with MinGW on Windows OS.

This toolbox overall demonstrates
1. How to add a function defined in C in scilab
2. How to add a function defined in Scilab in Scilab
3. How to write help for the added functions
4. How to create a toolbox out of the above functions.

NOTE: "thirdparty" directory had been added for you convinence.

This repository contains compiled library for matrix "transpose" function written in C.

1) Open Scilab terminal console.
2) Go to your repository folder.
3) Execute this command "exec builder.sce" to build toolbox.
4) Now Execute this command "exec loader.sce" to load toolbox.
5) Type "help" in the scilab console and browse through the help content of "test_toolbox" to know about "transpose" function.

Now transpose functions is ready to use in scilab workspace.
For example, 
	
	x = [1,2,3;4,5,6;7,8,9];
	y = transpose(x)
	
Incase of any query contact: karntiwari3003@gmail.com (KARN TIWARI)
