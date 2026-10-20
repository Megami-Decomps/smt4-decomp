/* NON_MATCHING: armcc turns this zeroing loop into a tail call to __aeabi_memclr4; retail keeps an explicit 24-iteration store loop */
#include "common.h"

extern "C" {

extern u32 DAT_004e9dc8[0x18];

/* Clears the 24-entry table. */
void asdModelClearTable(void)
{
    s32 i;

    for (i = 0; i < 0x18; i++) {
        DAT_004e9dc8[i] = 0;
    }
}

} /* extern "C" */
