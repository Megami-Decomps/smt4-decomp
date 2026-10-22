#include "shard/NaviMain.h"
#include "common.h"

extern "C" {
extern NaviMain *g_naviMain;

/* Returns the navigation view's floating-point parameter. */
f32 naviMainGetParameter()
{
    return g_naviMain->value;
}
}
