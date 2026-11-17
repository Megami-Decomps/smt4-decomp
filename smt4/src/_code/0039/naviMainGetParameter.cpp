#include "shard/NaviMain.h"
#include "mapnavi/NaviMainGlobals.h"
#include "common.h"

extern "C" {

/* Returns the navigation view's floating-point parameter. */
f32 naviMainGetParameter()
{
    return g_naviMain->value;
}
}
