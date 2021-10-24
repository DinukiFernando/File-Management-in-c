//a program to read the file and store the lines into an array and list them on the screen.

#include<iostream>
#include<string.h>

#define LSIZ 128
#define RSIZ 10

using namespace std;

int main(){
	
	char line[RSIZ][LSIZ];      //Size   RSIZ=128    LSIZ=10
	char fileName[20];
	FILE *fpointer;
	
	int j=0;

//ask file name to open the file which user wants
	cout<<"Input the file name to be opened: ";
	cin>>fileName;
	
	fpointer=fopen(fileName,"r");
	
	//store the lines into an array
	while(fgets(line[j],LSIZ,fpointer))
	{
		line[j][strlen(line[j])-1]='\0';
		j++;
	}
	
	
	cout<<"The content of the file "<<fileName<<" are : "<<endl;
	for(int i=0;i<j;++i){
		cout<<line[i]<<endl;
	}
	
	//close the file
fclose(fpointer);

return 0;
}
