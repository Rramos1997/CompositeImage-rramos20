#include <iostream>
#include <string>
#include <cstdlib>
#include "bitmap.h"
#include <vector>
using namespace std;
//Prototypes
string fileName();
bool validBMP(vector<string> &);


//Global Variable
const int MAX_FILES = 10;
Bitmap image;
vector <vector <Pixel > > bmp;
Pixel rgb;


//Main Program
int main()
{
vector <string> input;
for(int i=0; i<MAX_FILES;i++)
    {   
    input.push_back( fileName() );
    }
    
return 0;

}

//Asks user for file names 
/*string fileName()
{
vector <string> files;
cout<<"Please enter filename(s) or type 'Done' when finished."<<endl;
cin >> files;

return files;
}*/


//Repeatedly ask user for their filename until they enter "Done" or entered 10 file names

//print an error for any filename with a problem

//take average RGB values from all pictures and average them 

//print updates for the user 

//when finished save file as "composite-rramos20.bmp"

