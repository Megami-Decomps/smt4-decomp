#include "common.h"
#include "code/Code001b_Smt4a.h"

extern "C" {

/* Returns whether inherited-skill flag `index` of the unit record is set. */
u8 bitSetTest(const SlotRecordA *record, u32 index)
{
    return ((u32)record->inheritedFlags[index >> 3] & (1 << (index & 7))) != 0;
}

} /* extern "C" */
