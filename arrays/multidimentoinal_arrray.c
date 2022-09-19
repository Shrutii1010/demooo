#include <stdio.h>
#include <stdlib.h>
#include <graphics.h>

int main()
{
    int gd = DETECT, gm;
    initgraph(&gd, &gm, NULL);

    line(40, 240, 160, 60);
    line(160, 60, 260, 240);
    line(40, 240, 260, 240);

    circle(160, 160, 30);

    line(40, 240, 40, 450);
    line(260, 240, 260, 450);
    line(40, 450, 260, 450);

    line(120, 450, 120, 345);
    line(180, 450, 180, 345);
    line(120, 345, 180, 345);

    line(260, 240, 500, 220);
    line(160, 60, 400, 40);
    line(400, 40, 500, 220);

    line(500, 220, 500, 420);
    line(260, 450, 500, 420);

    delay(500000);
    closegraph();
   
    return 0;
}
