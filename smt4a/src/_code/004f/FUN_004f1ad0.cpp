#include "common.h"

extern "C" {

typedef struct RangeEntry {
    /* 0x0 */ f32 start;
    /* 0x4 */ f32 end;
    /* 0x8 */ s16 duration;
    /* 0xA */ u8 unk0A[2];
} RangeEntry;

typedef struct Object {
    /* 0x000 */ u8 unk000[0x44];
    /* 0x044 */ u8 range[0x608];
    /* 0x64C */ u32 flags;
} Object;

extern RangeEntry DAT_0057a574[];

s32 rangeIsValid(void *range);
void words5Clear(void *range);
void rangeInit(void *range, f32 start, f32 end, s16 duration, s16 delay);

/* Starts the object's range from table entry `index`, clearing it first if it was not valid, and flags it as started. */
void FUN_004f1ad0(Object *obj, s32 index)
{
    if (index < 0) {
        return;
    }
    if (rangeIsValid(obj->range) == 0) {
        words5Clear(obj->range);
    }
    RangeEntry *entry = DAT_0057a574 + index;

    rangeInit(obj->range, entry->start, entry->end, entry->duration, 0);
    obj->flags |= 0x40000;
}

} /* extern "C" */
