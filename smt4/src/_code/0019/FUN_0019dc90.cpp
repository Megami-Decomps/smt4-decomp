/* NON_MATCHING: armcc uses different registers for the global pointer and slot loop; the loop structure and stores agree. */
#include "shard/W5_W5Match1_RecordKeys.h"

extern "C" {

extern MapTimerBanks *DAT_00447e40;

/* Clears the timer banks and invalidates all pending slots. */
void FUN_0019dc90(void)
{
    MapTimerBanks *work = DAT_00447e40;
    for (s32 bank = 0; bank < 16; ++bank) {
        for (s32 entry = 0; entry < 16; ++entry) {
            work->banks[bank].entries[entry].active = 0;
        }
        work->banks[bank].count = 0;
    }
    work->count = 0;
    for (s32 slot = 0; slot < 32; ++slot) {
        work->slots[slot].active = 0;
        work->slots[slot].id = -1;
    }
}

} /* extern "C" */
