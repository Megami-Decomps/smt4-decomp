/* NON_MATCHING: retail reads the rectangle through copies of this (mov r0, r4 between each ldrsh) and lays out the 16 call arguments differently; the optimizer here reorders them. */
#include "classes/Obj4221a4.h"

extern "C" void FUN_00290994(void *screen, int x, int y, int table, int a, int b, int c, int d, int e, int f, int g, int width, int left, int top, u32 arg, int h);

/* Draws the parts of the window; with no window set up the rectangle is -1. */
void Obj4221a4::vfunc10(u32 arg)
{
    int width = region.getWidth();
    int left = region.getLeft();
    int top = region.getTop();

    if (!ready) {
        width = -1;
        left = -1;
        top = -1;
    }
    FUN_00290994(region.screen, 0, 0, 58, 75, 76, 77, 71, 73, 72, 74, width, left, top, arg, 0);
}
