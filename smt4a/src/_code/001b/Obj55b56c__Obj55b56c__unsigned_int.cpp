/* NON_MATCHING: retail stores the fields one by one (no stm/vstm merging, one zero register) and keeps the bit-field read-modify-writes in place; built merges adjacent stores */
#include "classes/Obj55b56c.h"

/* Builds the base binding, then clears its own words. */
Obj55b56c::Obj55b56c(u32 owner) : Obj55b87c(owner)
{
    unk60 = 0;
    unk64 = 0;
    unk68 = 0;
    unk6c = 0;
    packed70.value = 0;
    packed70.tag = 0;
}
