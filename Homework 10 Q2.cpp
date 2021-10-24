//a program to read an existing file

#include <cstdio>
#include <cstring>
#include<iostream>

using namespace std;

int main()
{
	char fileName[20];
	char str;
	
	FILE *fpointer;
	
	cout<<"Enter the file name to be open: ";
	cin>>fileName;
	fpointer = fopen(fileName, "r");
	
	//check whether the file is there or not
	if(fpointer == NULL){
		cout<<"File can not be opened";
		exit(0);
	}
	else{//insert text into the str array
		str=getc(fpointer);
		
		cout<<"Expected Output: "<<endl;
		
		//print the content in the file
			while(str !=EOF){
				cout<<str;
				str=getc(fpointer);
		}
	}
	
	//close the file
	fclose(fpointer);
}
