#include "common.h"

extern "C" {

void block6Free(void *block);
void asdMemFree(void *block);

struct BlockPair {
    u8 unk00[4];
    void *block6;
    void *block;
};

struct BlockOwner {
    u8 unk00[0x3c];
    BlockPair *pair;
};

/* Frees both blocks of the owner's pair. */
void FUN_003adc24(BlockOwner *owner)
{
    BlockPair *pair = owner->pair;
    block6Free(pair->block6);
    asdMemFree(pair->block);
}

} /* extern "C" */
