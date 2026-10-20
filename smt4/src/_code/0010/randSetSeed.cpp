#include "common.h"

extern "C" {

extern u32 g_randState;

/* Seeds the random number generator. */
void randSetSeed(u32 seed)
{
    g_randState = seed;
}

} /* extern "C" */
