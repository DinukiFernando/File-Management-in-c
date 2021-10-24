// a program to Find the Number of Lines in a Text File. 

#include <iostream>
#define FSIZE 100

using namespace std;

int main(){
	FILE *fpointer;
	int str=0;
	char fname[100];   
	char c;
	
	cout<<"Input the file name to be opened: ";
	cin>>fname;
	
	fpointer=fopen(fname,"r");
	
	//check the file is available
		if(fpointer==NULL){
			cout<<"Could not open file"<<fname;
			return 0;
		}
		for(c=getc(fpointer);c!=EOF;c= getc(fpointer)){
			//check whether it is a new line
		if(c=='\n')
		
		//if it is a new line then sdd 1 to the str
		str=str+1;
	}
		fclose(fpointer);
		
		cout<<"The lines in the file are :"<<str;
		
		fclose (fpointer);
		
		return 0;
}
