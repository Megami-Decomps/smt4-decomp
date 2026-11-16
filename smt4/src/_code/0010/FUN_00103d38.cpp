#include "common.h"

extern "C" {

extern u32 g_lcgSeed;

void FUN_00103d38(u32 value)
{
    g_lcgSeed = value;
}

} /* extern "C" */
