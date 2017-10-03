#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int main()
{
    float t =0;
    float xp = 10;
    float yp = 2;
    float xv = -2;
    float yv = -2;
    float xd;
    float yd;
    float d;
    float xa;
    float ya;
    float ke;
    float ge;
    float v;
    float ge2;
    
    for(t=0; t<10; t+=1)
    {
        xd = -xp;
        yd = -yp;
        d = sqrtf(xd*xd+yd*yd);
        xa = xd / (d*d);
        ya = yd / (d*d);
        v = sqrtf(xv*xv+yv*yv);
        ke = 0.5f * v*v;
        ge = d;
        printf("t%f__p%f,%f__v%f,%f__d%f,%f=%f__a%f,%f__\r\nke%f__ge%f,%f__te%f,%f\r\n",t,xp,yp,xv,yv,xd,yd,d,xa,ya,ke,ge,ge2,ke+ge,ke+ge2);
        xv += xa;
        yv += ya;
        xp += xv;
        yp += yv;
        ge2 += 1 / d;
    }
    return 0;
}