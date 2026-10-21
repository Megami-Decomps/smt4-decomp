#include "common.h"

struct NavigationView {
    /* 0x00 */ u8 unk00[0x34];
    /* 0x34 */ f32 value;
};

extern "C" {
extern NavigationView *g_naviMain;

/* Returns the navigation view's floating-point parameter. */
f32 FUN_0039f84c()
{
    return g_naviMain->value;
}
}
