/* NON_MATCHING: built saves r4 for the index*12 product (push/pop and a tail `bx`); retail multiplies in place in r1 and returns with a plain `b`. */
#include "common.h"

extern "C" {

typedef struct Entry {
    /* 0x0 */ u32 first;
    /* 0x4 */ u32 second;
    /* 0x8 */ u32 unk08;
} Entry;

typedef struct Selector {
    /* 0x00 */ u8 unk00[0x24];
    /* 0x24 */ u32 value[3];
    /* 0x30 */ u8 unk30[0x34];
    /* 0x64 */ Entry *entries;
    /* 0x68 */ s16 index;
    /* 0x6A */ u16 unk6A;
    /* 0x6C */ s8 mode;
    /* 0x6D */ u8 unk6D[0x1B];
    /* 0x88 */ u8 unk88;
    /* 0x89 */ u8 unk89;
    /* 0x8A */ u8 unk8A;
} Selector;

/* Selects entry `index`; `mode` picks which of its two values becomes the current one. */
void FUN_002a9fdc(Selector *selector, s32 index, s32 mode)
{
    Entry *entry;
    u32 value;

    if (selector->entries != NULL) {
        selector->index = (s16)index;
        selector->unk6A = 0;
        selector->unk88 = 0;
        entry = &selector->entries[index];
        selector->unk8A = 0;
        selector->mode = (s8)mode;
        if (mode != 0) {
            value = entry->second;
        } else {
            value = entry->first;
        }
        selector->value[0] = value;
        selector->value[1] = value;
        selector->value[2] = value;
    }
}

} /* extern "C" */
