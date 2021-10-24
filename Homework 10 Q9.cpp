// a program to copy a file in another name

#include <stdio.h>
#include <string.h>
#include<iostream>
using namespace std;

int main() {
  	
        int dele, ctr = 0;
        char ch;
    
        FILE *fptr1, *fptr2;
        
		char fname[255],fname2[255];
		char newLine[255];
        char str[255];
        
		cout<<"Input the file name to be opened: ";
		cin>>fname;		
	
	//open a file that we need to change
        fptr1 = fopen(fname, "r");
        
        
    //check that file is available or not
        if (!fptr1) 
		{
                cout<<" File not found or unable to open the input file!!\n";
                return 0;
       	} 
		   
		else{//print the content
		ch=getc(fptr1);
		cout<<"Assume that the content of the file test.txt is:  "<<endl;
		for(ch=getc(fptr1);ch!=EOF;ch= getc(fptr1)){
			cout<<ch;
			}
		fclose(fptr1);
	}
	
		fptr1 = fopen(fname, "r");
        fptr2 = fopen(fname2, "w"); // open the fname2orary file in write mode 
        
    //check the file is available or not
        if (!fptr2) 
		{
                cout<<"Unable to open a fname2orary file to write!!\n";
                fclose(fptr1);
                return 0;
        }
    cout<<endl<<endl<<"Test Data : \n Input the source file name : "<<fname<<endl;
    cout<<"Input the file name to be opened: ";
		cin>>fname2;	
        
        // copy all contents to the temporary file except the specific line
        while (!feof(fptr1)) 
        {
            strcpy(str, "\0");
            fgets(str, 255, fptr1);
            if (!feof(fptr1)) 
            {
               
                    fprintf(fptr2, "%s", str);
                }
            }
        
        fclose(fptr1);
        fclose(fptr2);
       

        return 0;

  } 
 
