#ifndef BATTLE_LISTEDENTRY_H
#define BATTLE_LISTEDENTRY_H

#include "common.h"
#include <stddef.h>

/* One 0x288-byte entry of the battle main state's entry table (Shin Megami Tensei IV). */
struct ListedEntry {
    /* 0x000 */ u32 flags;      /* bit 0 = used, bit 4 = listed, bit 6 = excluded */
    /* 0x004 */ u8 unk04[4];
    /* 0x008 */ s16 id;
    /* 0x00A */ u8 unk0a[0x8c];
    /* 0x096 */ s16 value96;
    /* 0x098 */ s16 value98;
    /* 0x09A */ s16 value9a;
    /* 0x09C */ u8 unk9c[0x1ec];
};

struct ListedState {
    /* 0x0000 */ u8 unk0000[0x1fc0];
    /* 0x1FC0 */ ListedEntry *entries;
};

typedef char ListedEntrySizeCheck[sizeof(ListedEntry) == 0x288 && offsetof(ListedEntry, value9a) == 0x9a ? 1 : -1];

#endif
