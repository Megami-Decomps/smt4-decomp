#include "shard/JobBlock43e278.h"

extern "C" {

void FUN_002733a0(u32 value)
{
    JobBlock43e278 *block = g_frameTex;

    g_frameTex->unkF9A = 1;
    block->unkF9C = 0;
    block->unkF9D = 0;
    block->unkF9E = 0;
    block->unkFD0 = 0;
    block->unkFD4 = value;
}

} /* extern "C" */
