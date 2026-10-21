/* NON_MATCHING: armcc merges the clear/set stores and uses a writeback load, unlike retail's separate clear and conditional-set address forms. */
#include "shard/SaveWork.h"

struct MapFlagWords {
    /* 0x000 */ u8 unk000[0xcd8];
    /* 0xcd8 */ u32 words[1];
};

extern "C" SaveWork* gameGetMapBlock(void);

extern "C" void FUN_00316de4(s32 index, s32 enabled)
{
    MapFlagWords* flags = (MapFlagWords*)gameGetMapBlock();
    u32* word = &flags->words[index / 32];
    u32 mask = 1u << (index % 32);
    if (enabled == 0) {
        *word &= ~mask;
    } else if ((*word & mask) == 0) {
        *word |= mask;
    }
}
