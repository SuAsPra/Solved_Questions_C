// You are using GCC
#include <stdio.h>
int main(){
    typedef struct {
        int feet;
        float inch;
    } DISTANCE;

    int n;
    scanf("%d",&n);
    DISTANCE variable[n];
    for (int i=0;i<n;i++){
        scanf("%d %f",&variable[i].feet,&variable[i].inch);
    }
    DISTANCE final;
    final.feet = 0;
    final.inch = 0;
    for (int i=0;i<n;i++){
        final.feet = final.feet + variable[i].feet;
        final.inch = final.inch + variable[i].inch;
    }
    if (final.inch>12){
        final.feet = final.feet + (int)(final.inch/12);
        final.inch = final.inch - (12*(int)(final.inch/12));
    }
    printf("%d\n%.2f",final.feet,final.inch);
}
