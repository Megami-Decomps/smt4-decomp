/* NON_MATCHING: control flow and every instruction match except registers in the two record address
 * computations (retail loads the save block into a register separate from the +0x88 body pointer). */
#include "gamedata/SavedRecords.h"

extern "C" {
void rt_aeabi_memclr(void *destination, u32 bytes);
}

/* Remove one saved record, shifting later records down and clearing the last. */
extern "C" void FUN_0036d4b0(s32 index)
{
    if ((u32)index >= 32) {
        return;
    }
    for (; index < 31; ++index) {
        setSavedRecord(index, getSavedRecord(index + 1));
    }
    rt_aeabi_memclr(getSavedRecord(31), sizeof(SavedRecord100));
}
