#include <iostream>
#include <string>
#include <cstdlib>
#include "bitmap.h"
#include <vector>
using namespace std;
//Prototypes
vector <string> fileName(); //Asks for users input

bool validBMP(vector<vector<Pixel> >);//Checks to see if file is valid bitmap

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

/*for(int i=0; i<MAX_FILES;i++)
    {   
    input.push_back( fileName() );
    }
  */  
return 0;

}

//Asks user for file names until they enter 10 names or type "Done"
vector <string> fileName()
{
vector<string> files;
cout<<"Please enter filename(s) or type 'Done' when finished."<<endl;
cin>>files;
validBMP(files);
while(validBMP = false;)
    {
        cout<<"Please make sure the images are all the same size and valid Bitmap files."
        cin>>files;
        validBMP(files);
    }
return fileName;
}

bool validBMP(vector <string> images)
{
    for(int i=0;i<images.size;i++)
    {
        if(images[i] == images[i].IsImage)
        {
    return true;
        }
else
return false;
    }
}
//Repeatedly ask user for their filename until they enter "Done" or entered 10 file names

//print an error for any filename with a problem

//print updates for the user 

//when finished save file as "composite-rramos20.bmp"

