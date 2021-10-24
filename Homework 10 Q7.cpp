//a program to delete a specific line from a file

#include <stdio.h>
#include <string.h>
#include<iostream>
using namespace std;

int main() {
  	
        int dele, ctr = 0;
        char ch;
    
        FILE *fptr1, *fptr2;
        
		char fname[255];
        char str[255], temp[] = "temp.txt";
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
        fptr2 = fopen(temp, "w"); // open the temporary file in write mode 
        
    //check the file is available or not
        if (!fptr2) 
		{
                cout<<"Unable to open a temporary file to write!!\n";
                fclose(fptr1);
                return 0;
        }
        
        cout<<"Test Data : \n Input the file name to be opened : "<<fname<<endl;
        cout<<" Input the line you want to remove : ";
        scanf("%d", &dele);
		
        // copy all contents to the temporary file except the specific line
        while (!feof(fptr1)) 
        {
            strcpy(str, "\0");
            fgets(str, 255, fptr1);
            if (!feof(fptr1)) 
            {
                ctr++;
                /* skip the line at given line number */
                if (ctr != dele) 
                {
                    fprintf(fptr2, "%s", str);
                }
            }
        }
        fclose(fptr1);
        fclose(fptr2);
        remove(fname);  		// remove the original file 
        rename(temp, fname); 	// rename the temporary file to original name
/*------ Read the file ----------------*/
   fptr1=fopen(fname,"r"); 
            ch=fgetc(fptr1); 
           cout<<"Expected Output:\n  The content of the file test.txt is:"<<endl;
          while(ch!=EOF) 
            { 
                printf("%c",ch); 
                 ch=fgetc(fptr1); 
            }
        fclose(fptr1);
/*------- End of reading ---------------*/
        return 0;

  } 
 
