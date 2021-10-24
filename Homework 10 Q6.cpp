// a program to count a number of words and characters in a file. 

#include <iostream>
using namespace std;

int main(){
	FILE *fpointer;
	char ch;
	int word,charactr;
	char fileName[20];
	
	cout<<"Input the file name to be opened: ";
	cin>>fileName;
	
	fpointer=fopen(fileName,"r");
	
	//check the file is available
	if(fpointer==NULL){
		cout<<"File does not exist or can not be opened";
	}
	else{
		ch=getc(fpointer);
		cout<<"The content of the file"<<fileName<<" are: "<<endl;
		while(ch!=EOF){
			cout<<ch;
			if(ch==' '|| ch=='\n'){
				word++;
			}
			else{
				charactr++;
			}
			//insert next character
		ch=getc(fpointer);	
}

cout<<"The number of words in the file "<<fileName<<" are: "<<word<<endl<<endl;
cout<<"The number of characters in the "<<fileName<<" are: "<<charactr<<endl;
}

fclose(fpointer);

	return 0;
}
