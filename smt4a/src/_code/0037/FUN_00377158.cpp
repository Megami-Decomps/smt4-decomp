/* NON_MATCHING: register allocation only in the final bit update (retail: r1 holds the mask temp chain differently) */
/* Sets or clears flag `id` in the global flag bit array; alias ids are first mapped to their canonical flag. */
#include "common.h"

extern "C" {

typedef struct FlagSet {
    /* 0x000 */ u8 unk000[0xCCC];
    /* 0xCCC */ u32 bits[1];
} FlagSet;

extern FlagSet *FUN_00162e8c(void);

void FUN_00377158(s32 id, s32 set)
{
    FlagSet *flags = FUN_00162e8c();

    if (id == 0x17 || id == 0x18) {
        id = 0xE;
    } else if (id == 0x19 || id == 0x1A) {
        id = 0x12;
    } else if (id == 0x49 || id == 0x4D) {
        id = 0x41;
    } else if (id == 0x4A || id == 0x4E) {
        id = 0x42;
    } else if (id == 0x4B || id == 0x4F) {
        id = 0x43;
    } else if (id == 0x4C || id == 0x50) {
        id = 0x44;
    } else if (id == 0x94 || id == 0x9E) {
        id = 0x8D;
    } else if (id == 0x95 || id == 0x9F) {
        id = 0x8E;
    } else if (id == 0x96 || id == 0xA0) {
        id = 0x91;
    } else if (id == 0xA6 || id == 0xA7) {
        id = 0xA4;
    }
    if (set != 0) {
        flags->bits[id / 32] |= 1 << (id % 32);
    } else {
        flags->bits[id / 32] &= ~(1 << (id % 32));
    }
}

}
