#include "shard/SaveWork.h"

struct MapFlagWords {
    /* 0x000 */ u8 unk000[0xcd8];
    /* 0xcd8 */ u32 words[1];
};

extern "C" SaveWork* gameGetMapBlock(void);

extern "C" void FUN_00316de4(s32 index, s32 enabled)
{
    MapFlagWords* flags = (MapFlagWords*)gameGetMapBlock();
    s32 word = index / 32;
    s32 bit = index % 32;
    if (enabled == 0) {
        flags->words[word] &= ~(1 << bit);
    } else if ((flags->words[word] & (1 << bit)) == 0) {
        flags->words[word] |= 1 << bit;
    }
}
