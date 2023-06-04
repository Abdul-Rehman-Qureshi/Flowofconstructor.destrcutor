#include<iostream>
using namespace std;
// 4.6 5 MID Humpty1 Humpty1 Humpty2 Humpty3 Wall Dumpty 9.9 sat Wall Dumpty Dumpty
class XHO { 
public:
XHO() {
cout << "Humpty01" << endl;
}
XHO(float xho) {
cout << xho << endl;
}
~XHO() {
cout << "Dumpty" << endl;
}
};
class HOX : public XHO
{
public:
HOX() {
cout << "Humpty--02" << endl;
}
HOX(float x, int h) : XHO(x) {
cout << h << endl;
}
HOX(int h, float x) : XHO() {
cout << "Dumpty" << endl;
}
~HOX() {
cout << "Wall" << endl;
}
};
class HXO : public XHO, public HOX
{
public:
HXO() {
cout << "Humpty03" << endl;
}
HXO(char m) {
cout << m << endl;
}
~HXO() {
cout << "Sat" << endl;
}
};
int main()
{
HOX* h1 = new HOX(4.6, 5);
cout << "Mid" << endl;
HXO* h2 = new HXO();
delete h1;
XHO* h3 = new XHO(9.9);
delete h2;
}
