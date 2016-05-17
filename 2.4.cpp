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
	void setX(int newX);
};
void setX(int newX){x=newX;}//void Point::setX...


int main(int argc, char *argv[]) {
	Point p(5,3);
	p.setX(0);
	cout<< p.getX()<<" "<<endl;
	return 0 ;
}

