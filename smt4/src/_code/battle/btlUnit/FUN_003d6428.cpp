#include "common.h"

extern "C" {

typedef struct RangeSetup {
    /* 0x0 */ f32 min;
    /* 0x4 */ f32 max;
    /* 0x8 */ s16 mode;
    /* 0xA */ u8 pad[2];
} RangeSetup; /* 0xC */

typedef struct Range {
    /* 0x0 */ u8 unk0[0x10];
} Range;

typedef struct RangeOwner {
    /* 0x000 */ u8 unk000[0x30];
    /* 0x030 */ Range range;
    /* 0x040 */ u8 unk040[0x5F4];
    /* 0x634 */ u32 flags;
} RangeOwner;

extern RangeSetup DAT_00439960[];

extern s32 rangeIsValid(Range *range);
extern void rangeInit(Range *range, f32 min, f32 max, s32 mode, s32 arg);
extern void FUN_00227228(Range *range);

void FUN_003d6428(RangeOwner *owner, s32 index)
{
    if (rangeIsValid(&owner->range) == 0) {
        FUN_00227228(&owner->range);
    }
    RangeSetup *setup = &DAT_00439960[index];

    rangeInit(&owner->range, setup->min, setup->max, setup->mode, 0);
    owner->flags |= 0x40000;
}

} /* extern "C" */
