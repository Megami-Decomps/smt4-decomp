/* NON_MATCHING: retail resolves the table offset with a hoisted NULL register (moveq/addne select, then a separate null test); armcc merges both tests into one adds/moveq. */
#include "common.h"
#include "shard/W6_W6Match4_RelativeResourceGraph.h"

extern "C" {

/* The animation data: a table of 16-byte slots behind a self-relative offset at 0x14. */
struct AnimResourceData {
    /* 0x00 */ u8 unk00[0x14];
    /* 0x14 */ ResourceRelativePointer<RelativeResourceTable> table;
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

void FUN_003e94f0(RelativeResourceRecord **record, u32 value, u32 element);

/* Binds slot `index` of the animation source: its record (via two self-relative offsets) and element values. */
void FUN_0024edd4(AnimPlayer *player, s32 index)
{
    AnimSource *source = player->source;

    u32 *elements = source->elementsBegin;
    if (source->elementsEnd - elements != 0) {
        RelativeResourceTable *table = source->data->table.get();
        RelativeResourceRecord *record = NULL;

        if (table != NULL) {
            record = table->entries[index].record.get();
        }
        FUN_003e94f0(&record, source->values[index], elements[index]);
        player->loaded = 1;
    }
}

} /* extern "C" */
