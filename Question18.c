#include <stdio.h>
#include <math.h>
int main(){
    struct Point3D{
        float x,y,z;
    };

    struct Sphere{
        float r;
        struct Point3D a;
    };

    struct Cylinder{
        float R,H;
        struct Point3D b;
    };

    struct GeometryCalculator{
        float svol,cvol;
    };

    struct Point3D p1;
    scanf("%f %f %f", &p1.x,&p1.y,&p1.z);
    struct Sphere s1;
    scanf("%f",&s1.r);
    s1.a = p1;
    struct Cylinder c1;
    scanf("%f %f %f %f %f", &c1.b.x,&c1.b.y,&c1.b.z,&c1.R,&c1.H);
    struct GeometryCalculator g1;
    g1.svol = (4.0/3.0)*3.14*(pow(s1.r,3));
    g1.cvol = 3.14*pow(c1.R,2)*c1.H;
    printf("Sphere's Volume: %.2f cubic units\n",g1.svol);
    printf("Cylinder's Volume: %.2f cubic units",g1.cvol);
    return 0;
}
