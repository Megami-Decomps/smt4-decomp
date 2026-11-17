/* Sets or clears flag `id` in the global flag bit array; alias ids are first mapped to their canonical flag. */
#include "gamedata/MapSaveBlockA.h"

extern "C" {

void FUN_00377158(s32 id, s32 set)
{
    MapSaveBlockA *flags = gameFlagsGetBlock();

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
        flags->markBits[word] |= 1 << bit;
    } else {
        flags->markBits[word] &= ~(1 << bit);
    }
}

}
