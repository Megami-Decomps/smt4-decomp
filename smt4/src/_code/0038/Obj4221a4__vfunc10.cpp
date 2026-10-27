#include "classes/Obj4221a4.h"

extern "C" {
s16 windowRegionGetWidth(const Obj4221a4 *window);
s16 windowRegionGetLeft(const Obj4221a4 *window);
s16 windowRegionGetTop(const Obj4221a4 *window);
}

extern "C" void FUN_00290994(void *screen, int x, int y, int table, int a, int b, int c, int d, int e, int f, int g, int width, int left, int top, u32 arg, int h);

/* Draws the parts of the window; with no window set up the rectangle is -1. */
void Obj4221a4::vfunc10(u32 arg)
{
    int width = windowRegionGetWidth(this);
    int left = windowRegionGetLeft(this);
    int top = windowRegionGetTop(this);

    if (!ready) {
        width = -1;
        left = -1;
        top = -1;
    }
    FUN_00290994(region.screen, 0, 0, 58, 75, 76, 77, 71, 73, 72, 74, width, left, top, arg, 0);
}
