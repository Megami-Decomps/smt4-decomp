/* NON_MATCHING: compiler folds the embedded ring base into field displacements rather than retail address additions. */
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
struct CommandRing {
    /* 0x00 */ u8 unk00[8];
    /* 0x08 */ CommandEntry entries[2];
    /* 0x48 */ u32 index;
};
struct CommandOwner {
    /* 0x00 */ u8 unk00[0xE0];
    /* 0xE0 */ CommandRing *ring;
};
void asdCommandRingAdvance(CommandOwner *owner)
{
    CommandRing *ring = owner->ring;
    if (ring != NULL) {
        ++ring->index;
        if (ring->index >= 2) {
            ring->index = 0;
        }
        ring->entries[ring->index].enabled = 0;
        ring->entries[ring->index].first = 0;
        ring->entries[ring->index].second = 0;
        ring->entries[ring->index].status = -1;
    }
}

} /* extern "C" */
