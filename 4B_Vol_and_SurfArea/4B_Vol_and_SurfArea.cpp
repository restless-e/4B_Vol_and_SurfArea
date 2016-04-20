// 4B_Vol_and_SurfArea.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <cstdlib>
#include <cmath>
using namespace std;

double sphVol(double r);
double sphSurf(double r);
double cylVol(double r, double h);
double cylSurf(double r, double h);
double coneVol(double r, double h);
double coneSurf(double r, double h);

//GLOBAL CONSTANT
const double PI = 3.1415926535897;
int main()
{
	double radius, height = 0;
	//double sVol, sSurf, cyVol, cySurf, coVol, coSurf = 0;

	cout << "Please input radius measurement: ";
	cin >> radius;
	cout << endl << "Height measurement: ";
	cin >> height;
	cout << endl;

	cout << "Sphere volume: " << sphVol(radius) << " Surface area: " << sphSurf(radius) << endl;

	cout << "Cylinder volume: " << cylVol(radius, height) << " Surface area: " << cylSurf(radius, height) << endl;
	
	cout << "Cone volume: " << coneVol(radius, height) << " Surface area: " << coneSurf(radius, height) << endl;

	system("pause");
	return 0;
}

double sphVol(double r) {
	double vol = ((4 / 3) * PI * pow(r, 3));
	return vol;
}
double sphSurf(double r) {
	double surf = (4 * PI * pow(r, 2));
	return surf;
}
double cylVol(double r, double h) {
	double vol = (PI * pow(r, 2) * h);
	return vol;
}
double cylSurf(double r, double h) {
	double surf = ((2 * PI*r*h) + (2 * PI*pow(r, 2)));
	return surf;
}
double coneVol(double r, double h) {
	double vol = (PI * pow(r,2) * (h/3));
	return vol;
}
double coneSurf(double r, double h) {
	double surf = (PI * r *(r + sqrt(pow(h,2)+pow(r,2))));
	return surf;
}
