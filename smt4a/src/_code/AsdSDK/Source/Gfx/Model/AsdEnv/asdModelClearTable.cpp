/* NON_MATCHING: armcc turns this zeroing loop into a tail call to __aeabi_memclr4; retail keeps an explicit 24-iteration store loop */
#include "common.h"

extern "C" {

extern u32 DAT_00646598[0x18];

/* Clears the 24-entry table. */
void asdModelClearTable(void)
{
    s32 i;

    for (i = 0; i < 0x18; i++) {
        DAT_00646598[i] = 0;
    }
}

} /* extern "C" */
