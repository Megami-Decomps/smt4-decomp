#include "common.h"

extern "C" {

extern u8 *FUN_0023f3f8(void);
extern u8 *FUN_002a8764(void);

/* Counts the set bits of the 17 flag bits at +9..+0xB of the block (starting from 8, or 9 when the first is set), capped at 0x18, and stores the count at +0x910B of the party block. */
void FUN_00334ff8(void)
{
    int count = 8;
    u8 *flags;

    flags = FUN_0023f3f8();
    if ((flags[9] & 0x2) != 0) {
        count = 9;
    }
    flags = FUN_0023f3f8();
    if ((flags[9] & 0x4) != 0) {
        count = count + 1;
    }
    flags = FUN_0023f3f8();
    if ((flags[9] & 0x8) != 0) {
        count = count + 1;
    }
    flags = FUN_0023f3f8();
    if ((flags[9] & 0x10) != 0) {
        count = count + 1;
    }
    flags = FUN_0023f3f8();
    if ((flags[9] & 0x20) != 0) {
        count = count + 1;
    }
    flags = FUN_0023f3f8();
    if ((flags[9] & 0x40) != 0) {
        count = count + 1;
    }
    flags = FUN_0023f3f8();
    if ((flags[9] & 0x80) != 0) {
        count = count + 1;
    }
    flags = FUN_0023f3f8();
    if ((flags[10] & 0x1) != 0) {
        count = count + 1;
    }
    flags = FUN_0023f3f8();
    if ((flags[10] & 0x2) != 0) {
        count = count + 1;
    }
    flags = FUN_0023f3f8();
    if ((flags[10] & 0x4) != 0) {
        count = count + 1;
    }
    flags = FUN_0023f3f8();
    if ((flags[10] & 0x8) != 0) {
        count = count + 1;
    }
    flags = FUN_0023f3f8();
    if ((flags[10] & 0x10) != 0) {
        count = count + 1;
    }
    flags = FUN_0023f3f8();
    if ((flags[10] & 0x20) != 0) {
        count = count + 1;
    }
    flags = FUN_0023f3f8();
    if ((flags[10] & 0x40) != 0) {
        count = count + 1;
    }
    flags = FUN_0023f3f8();
    if ((flags[10] & 0x80) != 0) {
        count = count + 1;
    }
    flags = FUN_0023f3f8();
    if ((flags[11] & 0x1) != 0) {
        count = count + 1;
    }
    if (count > 0x18) {
        count = 0x18;
    }
    flags = FUN_002a8764();
    *(s8 *)(flags + 0x910b) = (s8)count;
}

} /* extern "C" */
