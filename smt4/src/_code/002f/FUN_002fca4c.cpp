#include "common.h"
#include "status/StatusCamera.h"

extern "C" {

int FUN_00250d84(u32 id, u32 value);
extern int flagValueIsPositive(u32 id);
extern u32 FUN_0028fb40(u32 id);

/* For flags 0x79F-0x802 that flagValueIsPositive reports set, applies FUN_00250d84 and sets the flag's bit in the bitset at +0x44. */
u32 FUN_002fca4c(void)
{
    u32 flag = 0x79f;
    u32 value;
    u8 *bitset;

    do {
        if (flagValueIsPositive(flag) != 0) {
            value = FUN_0028fb40(flag);
            FUN_00250d84(flag, value);
            bitset = FUN_002a0d0c();
            bitset = bitset + (flag >> 3);
            bitset[0x44] = bitset[0x44] | (u8)(1 << (flag & 7));
        }
        flag = flag + 1;
    } while (flag <= 0x802);
    return 1;
}

} /* extern "C" */
