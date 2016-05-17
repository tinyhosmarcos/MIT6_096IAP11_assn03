#include <iostream>
using namespace std;

class Point{
private:
	int x;
	int y
		;
public:
	Point(int u, int v) : x(u),y(v){}
	
	int getX(){return x;}
	int getY(){return y;}
	void doubleVal(){
		x*=2;
		y*=2;
	}
};



int main(int argc, char *argv[]) {
	const Point myPoint(5,3); //Error const;
	myPoint.doubleVal();
	cout<<myPoint.getX()<< " "<<myPoint.getY() <<endl;
	return 0;
}

