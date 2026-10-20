/* NON_MATCHING: identical except the prologue: built pushes {r4, lr} (8-byte alignment pad) where retail pushes only {lr}. */
#include "shard/W4_Match4_Obj422338.h"

/* Constructs the base with its argument set to 1, stores the vtable and clears the extra state. */
Obj422338::Obj422338()
    : Obj422314(1)
{
    flag = 0;
    words[0] = 0;
    words[1] = 0;
    words[2] = 0;
    words[3] = 0;
    words[4] = 0;
    words[5] = 0;
    slot = -1;
}
