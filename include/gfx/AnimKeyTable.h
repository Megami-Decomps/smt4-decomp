/* An animation's keyed table as the key searches see it: per-group ranges of keys sorted by key
 * value (smt4 animKeyTableFindKey, smt4a animKeyTableFindKey). */
#ifndef GFX_ANIMKEYTABLE_H
#define GFX_ANIMKEYTABLE_H

#include "common.h"
#include <stddef.h>

/* A group's run of keys in AnimKeyTable::keys. */
struct AnimKeyRange {
    /* 0x00 */ u16 first;
    /* 0x02 */ u16 count;
};

struct AnimKey {
    /* 0x00 */ s32 key;
    /* 0x04 */ u8 unk04[8];
};

struct AnimKeyTable {
    /* 0x00 */ u8 unk00[0x24];
    /* 0x24 */ AnimKeyRange *ranges;
    /* 0x28 */ u8 unk28[8];
    /* 0x30 */ AnimKey *keys;
};
typedef char AnimKeyTableLayoutCheck[sizeof(AnimKey) == 0xC && offsetof(AnimKeyTable, ranges) == 0x24 &&
    offsetof(AnimKeyTable, keys) == 0x30 ? 1 : -1];

#endif
