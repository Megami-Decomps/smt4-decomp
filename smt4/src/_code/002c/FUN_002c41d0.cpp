#include "shard/Sys4650a0.h"

extern "C" {

/* Sets or clears flag bit 0. */
void FUN_002c41d0(int set)
{
    if (set != 0) {
        g_padInputState.flags = g_padInputState.flags | 1;
    } else {
        g_padInputState.flags = g_padInputState.flags & 0xfffffffe;
    }
}

} /* extern "C" */
