/* NON_MATCHING: retail keeps the resolved record in a register and stores it to the stack once before the call; armcc here initialises the stack slot first and stores conditionally. */
#include "common.h"
#include "shard/S3GfxAnim.h"

extern "C" {

/* The animation data: a table of 16-byte slots behind a self-relative offset at 0x14. */
struct AnimResourceData {
    /* 0x00 */ u8 unk00[0x14];
    /* 0x14 */ s32 tableOffset;
};

/* A pointer pair (begin/end) of a vector of words. */
struct AnimSource {
    /* 0x00 */ u8 unk00[8];
    /* 0x08 */ AnimResourceData *data;
    /* 0x0C */ u8 unk0C[0x28];
    /* 0x34 */ u32 *values;
    /* 0x38 */ u8 unk38[0x1C];
    /* 0x54 */ u32 *elementsBegin;
    /* 0x58 */ u32 *elementsEnd;
};

struct AnimPlayer {
    /* 0x00 */ u8 unk00[8];
    /* 0x08 */ AnimSource *source;
    /* 0x0C */ u8 unk0C[0x4C];
    /* 0x58 */ u8 loaded;
};

void FUN_0050be58(void **record, u32 value, u32 element);

/* Binds slot `index` of the animation source: its record (via two self-relative offsets) and element values. */
void FUN_00449814(AnimPlayer *player, s32 index)
{
    AnimSource *source = player->source;

    if (source->elementsEnd - source->elementsBegin != 0) {
        u8 *table = (u8 *)gfxRelativePointer(&source->data->tableOffset);
        void *record = NULL;

        if (table != NULL) {
            s32 *slot = (s32 *)(table + index * 16 + 0x28);
            if (*slot != 0) {
                record = (u8 *)slot + *slot;
            }
        }
        FUN_0050be58(&record, source->values[index], source->elementsBegin[index]);
        player->loaded = 1;
    }
}

} /* extern "C" */
