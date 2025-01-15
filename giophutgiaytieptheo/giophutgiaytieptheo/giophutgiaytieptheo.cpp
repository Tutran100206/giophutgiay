#include<iostream>
using namespace std;
void nhap(int& h, int& p, int& s);
void xuat(int a, int b, int c);
int main() {
	int h, p, s;
	nhap(h, p, s);
	xuat(h, p, s);
	return 0;
}
void nhap(int& h, int& p, int &s) {
	cin >> h >> p >> s;
}
void xuat(int a, int b, int c) {
	if (a == 23) {
		if (b == 59 && c == 59) {
			cout << 0 << " " << 0 << " " << 0;
		}
		else if (c == 59) {
			cout << a << " " << b + 1 << " " << 0;
		}
		else {
			cout << a << " " << b << " " << c + 1;
		}
	}
	else {
		if (b == 59 && c == 59) {
			cout << a + 1 << " " << 0 << " " << 0;
		}
		else if (c == 59) {
			cout << a << " " << b + 1 << " " << 0;
		}
		else {
			cout << a << " " << b << " " << c + 1;
		}
	}
}