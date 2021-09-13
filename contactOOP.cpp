#include <iostream>
using namespace std;
class point {
private:
	int x, y;
public:
	void init(int ox, int oy);
	void move(int dx, int dy);
	void display();
};
void point::init(int ox, int oy) {
	cout << "Ham thanh phan init\n";
	x = ox; y = oy;
}
void point::move(int dx, int dy) {
	cout << "Ham thanh phan move\n";
	x += dx; y += dy;
}
void point::display() {
	cout << "Ham thanh phan display\n";
	cout << "Toa do: " << x << " " << y << "\n";
}
int  main()
{
	point p;
	p.init(2, 4);
	p.display();
	p.move(1, 2);
	p.display();
}