#include<math.h>
struct Polygon{

int angleCount;
double sideLength;
};

void scale(struct Polygon *polygon, double n)
{
	polygon->sideLength *= n;
}

struct Polygon scaled(const struct Polygon *polygon, double n)
{

	struct Polygon result = {polygon->angleCount, polygon->sideLength};
	scale(&result, n);
	return result;
}
double area(const struct Polygon *polygon)
{
double male_r;
male_r=((polygon->sideLength)/(2*tan(M_PI/polygon->angleCount)));
return (polygon->angleCount*polygon->sideLength *male_r)/2;
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

