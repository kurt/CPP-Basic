

#include <iostream>
using namespace std;

void CreateWindow(const char *title, int x, int y, int width, int height);




int main(){
    CreateWindow("Notepad",110,133,2314,1323);
    //CreateWindow();
	return 0;

}



void CreateWindow(const char *title = "Default", int x = -10, int y = -100, int width = 0, int height = 0){
    cout << title << "\n";
    cout << x << " " << y << " " << width << " " << height << "\n";	

} 