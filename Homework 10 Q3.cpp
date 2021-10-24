// a program to write multiple lines in a text file

#include <cstdio>
#include <cstring>
#include <iostream>

using namespace std;

int main()
{
	FILE* fpointer;
	int line;
	char strings[255];
	
	cout<<"Input the number of lines to be written :";
	cin>>line;
	
	fpointer=fopen("file_6.txt","w");
	
	//copying the string testline to text
	strcpy(strings,"testline");
	
	//inserting line number of lestline int to the file
	for(int i=0;i<line;i++){
		fprintf(fpointer,"%s %d \n",strings,i+1);
	}
	//close the file
	fclose(fpointer);
	
	
	cout<<endl<<"Expected Output:\nThe content of the file test.txt is:"<<endl;
	fpointer=fopen("file_6.txt","r");
	
//	get the output
	while(!feof(fpointer)){
	cout<<	fgets(strings,255,fpointer);
	}
	
	
	fclose(fpointer);
	
	return 0;
	}

