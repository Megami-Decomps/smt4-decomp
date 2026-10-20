#include "common.h"

extern "C" {

extern u32 g_randState;

/* Stores `value` in the global at 0x005b40a0. */
void randSetSeed(u32 value)
{
    g_randState = value;
}

} /* extern "C" */
