#include "common.h"

extern "C" {

int FUN_002c3944(u32 block, int size);
extern u8 *FUN_002adc88(void);

/* Clears the 0x888-byte table and sets flag 0x20 on entries 0x15E-0x18F (4-byte entries at +0x200). */
void FUN_0033f81c(void)
{
    u32 table = (u32)FUN_002adc88();
    u8 *entry;
    u16 index;

    FUN_002c3944(table, 0x888);
    index = 0x15e;
    do {
        entry = FUN_002adc88() + index * 4 + 0x200;
        if (entry != NULL) {
            *entry = *entry | 0x20;
        }
        index = index + 1;
    } while (index < 400);
}

} /* extern "C" */
