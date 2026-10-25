/* Sets or clears flag `id` in the global flag bit array; alias ids are first mapped to their canonical flag. */
#include "common.h"

extern "C" {

typedef struct FlagSet {
    /* 0x000 */ u8 unk000[0xCCC];
    /* 0xCCC */ u32 bits[1];
} FlagSet;

extern FlagSet *gameFlagsGetBlock(void);

void FUN_00377158(s32 id, s32 set)
{
    FlagSet *flags = gameFlagsGetBlock();

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
    s32 word = id / 32;
    s32 bit = id % 32;
    if (set != 0) {
        flags->bits[word] |= 1 << bit;
    } else {
        flags->bits[word] &= ~(1 << bit);
    }
}

}
