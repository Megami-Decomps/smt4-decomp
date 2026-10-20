#include "common.h"

extern "C" {

typedef struct Source00256f88 {
    /* 0x00 */ u8 unk00[0xc];
    /* 0x0c */ u32 length;
} Source00256f88;

/* 0x14-byte entry: the phase is set from a value and the entry's source length. */
typedef struct Entry00256f88 {
    /* 0x00 */ u8 unk00[4];
    /* 0x04 */ u32 phase;
    /* 0x08 */ u32 active;
    /* 0x0c */ Source00256f88 *source;
    /* 0x10 */ u8 unk10[4];
} Entry00256f88;

typedef struct List00256f88 {
    /* 0x00 */ u8 unk00[0xc];
    /* 0x0c */ s32 count;
    /* 0x10 */ Entry00256f88 *entries;
} List00256f88;

/* Wraps `time` into each entry's source length and activates the entry. */
void entryListSetPhase(List00256f88 *list, u32 time)
{
    s32 count = list->count;
    s32 i;

    for (i = 0; i < count; i++) {
        Entry00256f88 *entry = &list->entries[i];

        entry->phase = time % entry->source->length;
        entry->active = 1;
    }
}

} /* extern "C" */
