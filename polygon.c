#include<math.h>
struct Polygon{

int liczbakontow;
double dlugoscboku;
};
double area(const struct Polygon *polygon1)
{
const double PI = 3.14159265358979323846;
double male_r;
male_r=((polygon1->dlugoscboku)/(2*tan(PI/polygon1->liczbakontow)));
return (polygon1->liczbakontow*polygon1->dlugoscboku *male_r)/2;
}
struct Polygon scaled(const struct Polygon *polygon1, double jednokladnosc ){
struct Polygon wynik;
wynik.dlugoscboku=polygon1->dlugoscboku*jednokladnosc;
wynik.liczbakontow=polygon1->liczbakontow;
return wynik;
}
void scale(struct Polygon *polygon1, double n)
{
	polygon1->dlugoscboku *= n;
}
#include<stdio.h>
int main() {
const struct Polygon polygon1 = {7, 10.};
printf("%lg\n", area(&polygon1));
struct Polygon polygon2 = scaled(&polygon1, 2.);
printf("%lg\n", area(&polygon2));
scale(&polygon2, 2.);
printf("%lg\n", area(&polygon2));
return 0; }

