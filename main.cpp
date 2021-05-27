#include <iostream>
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	
	int radius;
    float volume;
			
        cout <<"Input the radius of a sphere: ";
    	cin >>radius;
    	volume = (4 * 3.14 * radius  *radius  *radius) /3;
        cout <<"The volume of a sphere is: " <<volume;
	
	return 0;
}
