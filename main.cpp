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

vector <vector <vector <Pixel> > > rgbValues(vector <string>&);//Gets RGB values for each pixel
Bitmap avgImage(vector <vector <vector <Pixel> > >&);


//Global Variables
const int MAX_FILES = 9;


//Main Program
int main()
{
Bitmap image;
vector <vector <vector <Pixel> > > ThreeDImage;
vector<string> imageList;
vector <vector <Pixel> > CompositeImage;
fileName(imageList);
rgbValues(imageList);
avgImage(ThreeDImage);
image.save("Composite-rramos20.bmp");

return 0;
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
    cin >> files;
    if( files == "Done")
        {
        break;
        }
    else if(validBMP(files) == true)
        {
        fileList.push_back(files);
        }
    else;
    cout<<"Please make sure the images are all the same size and valid Bitmap files."<<endl;
        

    }
while(fileList.size() <= MAX_FILES);

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
//Checks Size of first file
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


//Converts list of files into list of bitmaps
vector <vector <vector <Pixel> > >rgbValues(vector<string>& list)
{
vector <vector <vector <Pixel> > > ThreeDImage;
vector <vector <Pixel> > bmp;
Bitmap image;

for(int x=0;x<list.size();x++)
    {
    image.open(list[x]);
    bmp = image.toPixelMatrix();
    ThreeDImage.push_back(bmp);
    }

return ThreeDImage;
}

//Turns a 3D matrix of pixels and everages the values in the pixels
Bitmap avgImage(vector <vector <vector <Pixel> > >&fileList)
{
Pixel rgb;
Bitmap image;
Bitmap CompositeImage;
for(int z=0;z<fileList[0][0].size();z++)
    {
    int sumR=0;
    int sumG=0;
    int sumB=0;
    for(int y=0;y<fileList[0].size();y++)
        {
        for(int x=0;x<fileList.size();x++)
            {
            rgb = fileList[x][y][z];
            sumR+=rgb.red;
            sumG+=rgb.green;
            sumB+=rgb.blue;
            int avgR=sumR/fileList[x][y].size();
            int avgG=sumG/fileList[x][y].size();
            int avgB=sumB/fileList[x][y].size();
            rgb.red=avgR;
            rgb.green=avgG;
            rgb.blue=avgB;
            fileList[x][y][z] = rgb;
            }
        }
    }    
CompositeImage=image.fromPixelMatrix(fileList);

return CompositeImage;
}
