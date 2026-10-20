#include "common.h"

extern "C" {

extern u8 *FUN_002adc88(void);

/* Sets flag 1 of byte +2 and flag 0x80 of byte +0 of entry `index` (4-byte entries at +0x200). */
void FUN_00348b00(int index)
{
    u8 *entry = FUN_002adc88();

    entry = entry + index * 4;
    entry[0x202] = entry[0x202] | 1;
    entry[0x200] = entry[0x200] | 0x80;
}

} /* extern "C" */
