#include<bits/stdc++.h>
using namespace std;
int main()
{
	double a, b, c;
	scanf("%lf%lf%lf", &a, &b, &c);
	double r1 = (-b + sqrt((pow(b, 2) - 4 * a * c))) / (2 * a);
	double r2 = (-b - sqrt((pow(b, 2) - 4 * a * c))) / (2 * a);
	printf("r1=%7.2f\nr2=%7.2f\n", r1, r2);
}
