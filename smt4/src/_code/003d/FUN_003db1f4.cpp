#include "common.h"

extern "C" {

extern int FUN_002adee0(u32 handle);

/* 1 when every pending entry (flag 2) of the 0x32 slots at +400 has finished; marks them with flag 4. */
u32 FUN_003db1f4(int base, int mode)
{
    int i;
    u32 *entry;

    if (mode != 0 && mode != 0x16) {
        i = 0;
        do {
            entry = (u32 *)(base + i * 0x28 + 400);
            if ((entry[9] & 2) != 0) {
                if (FUN_002adee0(*entry) == 0) {
                    return 0;
                }
                entry[9] = entry[9] | 4;
            }
            i = i + 1;
        } while (i < 0x32);
    }
    return 1;
}

} /* extern "C" */
