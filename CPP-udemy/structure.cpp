#include <iostream>
//structures are same as classes except default variables a public

struct Point{
    int x{1};
	int y{0};
    //auto a =1; - auto not allowed in structure declaration

};



void DrawLine(Point start,Point end){
     std::cout << "start.x: " << start.x << "\n";
    std::cout << "end.y: " << end.y<<"\n";
}



int main(){
    Point start;
	Point end;
	DrawLine(start,end);
    start.x=1;
	start.y=2;
	end.x=10;
	end.y=4;
	DrawLine(start,end);
    return 0;
}