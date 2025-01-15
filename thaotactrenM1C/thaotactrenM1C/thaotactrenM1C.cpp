#include<iostream>
#include<cmath>
#include<algorithm>
using namespace std;
void nhap(int a[], int& n);
bool ktrasnt(int a);
void timsntmax(int a[], int n);
bool timthay(int a[], int n, int k);
void phantudoimot(int a[], int n);
int souoc(int a);
void ptcosouocmax(int a[], int n);
bool ktrasohh(int a);
void sohoanhao(int a[], int n);
bool ktrasocp(int k);
void sochinhphuong(int a[], int n);
int main() {
	int a[100], n;
	nhap(a, n);
	timsntmax(a, n);
	phantudoimot(a, n);
	ptcosouocmax(a, n);
	sohoanhao(a, n);
	sochinhphuong(a, n);
	return 0;
}
void nhap(int a[], int& n) {
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
}
bool ktrasnt(int a) {
	if (a < 2) {
		return false;
	}
	for (int i = 2; i < a; i++) {
		if (a % i == 0) {
			return false;
		}
	}
	return true;
}
void timsntmax(int a[], int n) {
	int max = 0;
	for (int i = 0; i < n; i++) {
		if (ktrasnt(a[i])) {
			if (a[i] > max) {
				max = a[i];
			}
		}
	}
	cout << max << endl;
}
bool timthay(int a[], int n, int k) {
	for (int i = 0; i < n; i++) {
		if (a[i] == k) {
			return true;
		}
	}
	return false;
}
void phantudoimot(int a[], int n) {
	int b[100], sizeB = 0;
	for (int i = 0; i < n; i++) {
		if (timthay(b, sizeB, a[i]) == false) {
			b[sizeB++] = a[i];
		}
	}
	if (sizeB > 1) {
		cout << "so phan tu doi 1 khac nhau trong mang la: " << sizeB << endl;
	}
	else {
		cout << -1 << endl;
	}
}
int souoc(int a) {
	int dem = 0;
	for (int i = 1; i <= a; i++) {
		if (a % i == 0) {
			dem++;
		}
	}
	return dem;
}
void ptcosouocmax(int a[], int n) {
	int max = 0, tam = 0;
	for (int i = 0; i < n; i++) {
		int k = souoc(a[i]);
		if (k > max) {
			max = k;
			tam = a[i];
		}
		else if (k == max && a[i] > tam) {
			tam = a[i];
		}
	}
	cout << tam << endl;
}
bool ktrasohh(int a) {
	if (a < 6) {
		return false;
	}
	int tong = 0;
	for (int i = 1; i < a; i++) {
		if (a % i == 0) {
			tong += i;
		}
	}
	if (tong == a) {
		return true;
	}
	else {
		return false;
	}
}
void sohoanhao(int a[], int n) {
	for (int i = 0; i < n; i++) {
		if (ktrasohh(a[i])) {
			cout << a[i] << " ";
		}
	}
	cout << endl;
}
bool ktrasocp(int k) {
	if (sqrt(k) == (int)(sqrt(k))) {
		return true;
	}
	else {
		return false;
	}
}
void sochinhphuong(int a[], int n) {
	for (int i = 0; i < n; i++) {
		if (ktrasocp(a[i])){
			cout << a[i] << " ";
		}
	}
}
