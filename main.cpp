#include <iostream>
#include <string>
#include <cstdlib>
#include "bitmap.h"
#include <vector>
using namespace std;
//Prototypes
vector <string> fileName(); //Asks for users input

bool validBMP(string);//Checks to see if file is valid bitmap

void rgbValues();//Gets RGB values for each pixel

bool BMPsize();//Checks size of picture to make sure it is the right dimensions


//Global Variables
const int MAX_FILES = 10;
Bitmap image;
vector <vector <Pixel > > bmp;
Pixel rgb;


//Main Program
int main()
{
fileName();
}


//Asks user for file names until they enter 10 names or type "Done"
vector <string> fileName()
{
vector<string> fileList;
cout<<"Please enter filename(s) or type 'Done' when finished."<<endl;
string files;
while(cin >> files)
    {
        if( files == "Done")
            break;
        else if(validBMP(files) == true) 
            {
            fileList.push_back(files);
            }
        else if(fileList.size() == MAX_FILES)
        break;
        else
            {
            cout<<"Please make sure the images are all the same size and valid Bitmap files."<<endl;
            }                       
     }


return fileList;
}
//Opens file and checks to see if it a valid Bitmap file
bool validBMP(string file)
{
Bitmap image;
image.open(file);
        if(image.isImage())
            {
            return true;
            }
        else
            {   
            return false;
            }   
}   

//Repeatedly ask user for their filename until they enter "Done" or entered 10 file names

//print an error for any filename with a problem

//print updates for the user 

//when finished save file as "composite-rramos20.bmp"

