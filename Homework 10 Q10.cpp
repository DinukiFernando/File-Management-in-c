// a program to merge two files and write it in a new file. 

#include <stdio.h>
#include <string.h>
#include<iostream>
using namespace std;

int main() {
  	
        int dele, ctr = 0;
        char ch;
    
        FILE *fptr1, *fptr2,*fptr3;
        
		char fname[255],fname2[255],fname3[255];
		char newLine[255];
        char str[255],str2[255];
        
cout<<"Input the file name to be opened: ";
		cin>>fname;		
cout<<endl;	
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
	
cout<<endl<<"Input the file name to be opened: ";
		cin>>fname2;	
        fptr2 = fopen(fname2, "r"); // open the fname2orary file in write mode 
        
        //check that file is available or not
        if (!fptr1) 
		{
                cout<<" File not found or unable to open the input file!!\n"<<endl;
                return 0;
       	}  
		else{//print the content
		ch=getc(fptr2);
		cout<<"Assume that the content of the file test.txt is:  "<<endl;
		for(ch=getc(fptr2);ch!=EOF;ch= getc(fptr2)){
			cout<<ch;
			}
		fclose(fptr2);
	}
        
cout<<endl<<endl<<"Test Data : "<<endl;
cout<<"Input the 1st file name : "<<fname<<endl;
cout<<"Input the 2nd file name : "<<fname2<<endl; 
cout<<"Input the new file name where to merge the above two files : mergefiles.txt ";

cout<<endl<<endl<<"Expected Output: \n The two files merged into mergefiles.txt file successfully...!! \n Here is the content of the merge file mergefiles.txt: \nThe content of the file mergefiles.txt is: "<<endl;
        
		fptr1 = fopen(fname, "r");
		fptr2 = fopen(fname2, "r");
		fptr3 = fopen(" mergefiles.txt", "w");
        
        // copy all contents to the temporary file
       while (!feof(fptr1)) 
        {
            strcpy(str, "\0");
            fgets(str, 255, fptr1);
            if (!feof(fptr1)) 
            {
                fprintf(fptr3, "%s", str);
                }
        }
        fclose(fptr3);
        
        fptr3 = fopen(" mergefiles.txt", "a");
		while (!feof(fptr2)){
          //  strcpy(str, "\0");
            fgets(str2, 255, fptr2);
            if (!feof(fptr2)) 
            {
                fprintf(fptr3, "%s", str2);
            }
        }
        
        fclose(fptr1);
        fclose(fptr2);
        fclose(fptr3);
        
       
  cout<<endl<<endl;      
        fptr3=fopen(" mergefiles.txt","r"); 
        ch=fgetc(fptr3); 
        while(ch!=EOF) 
        { 
            printf("%c",ch); 
        	ch=fgetc(fptr3); 
        }
        fclose(fptr3);

        return 0;

  } 
 
