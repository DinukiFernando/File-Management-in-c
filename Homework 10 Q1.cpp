//a program to create and store information in a text file 

#include <cstdio>
#include <cstring>
#include<iostream>

using namespace std;

int main()
{
	char str[20];
	
	//open a file
	FILE *fpointer;
	fpointer = fopen("file.txt", "w");
	
	cout<<"Input a sentence for the file : ";
	cin>>str;
	
	if (fpointer)
	{
		//inserting line number of lestline int to the file
		for(int i=0; i<strlen(str); i++) 
			putc(str[i],fpointer);
	}
	fclose(fpointer);
}
