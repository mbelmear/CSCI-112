#include <stdio.h>
#include <string.h>

//Michael Belmear
//Classwork 10/10/2022

typedef struct{
    char name[70];
    double diameter;
    int moons;
    double orbit_time, rotation_time;
} Planet;

void setRot(Planet *p, double newrotation){
    p->rotation_time = newrotation;
    return;
}

int main(void){
    Planet p1 = {"Jupiter", 18000000.0, 16, 91000.5, 10.6};
    setRot(&p1, 11.0);
    printf("Planet's new Rotation is now %.2f\n", p1.rotation_time);
    return(0);
}
