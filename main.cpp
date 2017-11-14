#include <iostream>
#include <string>
#include <cstdlib>
#include "bitmap.h"
#include <vector>
using namespace std;
//Prototypes
vector <string> fileName(vector<string>); //Asks for users input

bool validBMP(string);//Checks to see if file is valid bitmap

void firstFileSize(string);//Gets size for the first file entered

void rgbValues();//Gets RGB values for each pixel

bool BMPsize();//Checks size of picture to make sure it is the right dimensions


//Global Variables
const int MAX_FILES = 10;
vector <vector <Pixel > > bmp;
Pixel rgb;


//Main Program
int main()
{
vector<string> imageList;
fileName(imageList);
//rgbValues();
}


//Asks user for file names until they enter 10 names or type "Done"
vector <string> fileName(vector <string> fileList)
{
cout<<"Please enter filename(s) or type 'Done' when finished."<<endl;
string files;
string firstFileName;
do
    {
    cin >> firstFileName;
    firstFileSize(firstFileName);
    fileList.push_back(firstFileName);
    }
while(cin >> files);
    {
        if( files == "Done")
            {
            break;
            }
        else if(validBMP(files) == true) 
            {
            fileList.push_back(files);
            }
        else if(fileList.size() == MAX_FILES)
            {
            break;
            }
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

void firstFileSize(string firstFile)
{
Bitmap image;
vector <vector <Pixel> > bmp;
image.open(firstFile);
if (validBMP(firstFile) == true)
    {
    bmp = image.toPixelMatrix();
    cout <<firstFile<<" has been loaded. It is "<<bmp.size()<<" pixels wide and "<<bmp[0].size()<<" pixels high. Please make sure all the files are this size."<<endl;
    }
}






void rgbValues(vector<string>fileList)
{
vector <vector <Pixel> > bmp;

}
//Repeatedly ask user for their filename until they enter "Done" or entered 10 file names

//print an error for any filename with a problem

//print updates for the user 

//when finished save file as "composite-rramos20.bmp"

