#include "common.h"

extern "C" {

struct CommandEntry {
    /* 0x00 */ u8 unk00[0x10];
    /* 0x10 */ u32 first;
    /* 0x14 */ u32 second;
    /* 0x18 */ s32 status;
    /* 0x1C */ u8 enabled;
    /* 0x1D */ u8 unk1D[3];
};
struct CommandBlock {
    /* 0x00 */ CommandEntry entries[2];
    /* 0x40 */ u32 index;
};
struct CommandRing {
    /* 0x00 */ u8 unk00[8];
    /* 0x08 */ CommandBlock block;
};
struct CommandOwner {
    /* 0x00 */ u8 unk00[0xE0];
    /* 0xE0 */ CommandRing *ring;
};

static __inline CommandEntry *commandBlockCurrent(CommandBlock *block)
{
    return &block->entries[block->index];
}

/* Moves the ring to its next slot and resets that slot's command entry. */
void asdCommandRingAdvance(CommandOwner *owner)
{
    CommandRing *ring = owner->ring;
    if (ring != NULL) {
        ++ring->block.index;
        if (ring->block.index >= 2) {
            ring->block.index = 0;
        }
        commandBlockCurrent(&ring->block)->enabled = 0;
        commandBlockCurrent(&ring->block)->first = 0;
        commandBlockCurrent(&ring->block)->second = 0;
        commandBlockCurrent(&ring->block)->status = -1;
    }
}

} /* extern "C" */
