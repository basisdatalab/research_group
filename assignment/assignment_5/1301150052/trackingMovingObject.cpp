#include <iostream>
#include <cstdio>
#include <vector>
#include <cmath>
#include <cstring>

#define REP(a,b,c) for (int a=b;a<c;a++)
#define REP2(a,b,c) for (int a=b;a<=c;a++)

#define PI 3.14159265

#define cosinus(a) cos(a*PI/180.0)
#define sinus(a) sin(a*PI/180.0)

using namespace std;

int main() {
	int t;
	double x,y,l,d;
	x=0;
	y=0;
	scanf("%d",&t);
	REP(i,0,t) {
		scanf("%lf %lf",&l,&d);
		x+=d*cosinus(l);
		y+=d*sinus(l);
	}
	printf("x = %.2lf\n",x);
	printf("y = %.2lf\n",y);
	return 0;
}