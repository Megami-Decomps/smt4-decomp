#ifndef MAP_LMAPDESTINATIONLISTSA_H
#define MAP_LMAPDESTINATIONLISTSA_H
#include "common.h"
#include <stddef.h>

/* One 0x64-byte destination entry. */
struct LmapDestinationEntryA {
    /* 0x00 */ u8 unk00[4];
    /* 0x04 */ u8 id;
    /* 0x05 */ u8 type;       /* 0xff owned item, 0xfe/0xfc quest checks, 0xfd flag bit, else flag pair */
    /* 0x06 */ s16 mapId;     /* map the entry belongs to */
    /* 0x08 */ u16 fullFrame;
    /* 0x0a */ u16 halfFrame;
    /* 0x0c */ u8 unk0c[0x22];
    /* 0x2e */ s16 checkId;
    /* 0x30 */ s16 requiredFlag;
    /* 0x32 */ s16 forbiddenFlag;
    /* 0x34 */ u16 available;
    /* 0x36 */ u8 unk36[0x16];
    /* 0x4c */ u32 dataKey;
    /* 0x50 */ u8 unk50[0x10];
    /* 0x60 */ s32 requiredSubmode;
};

/* Known prefix of the Apocalypse map-screen owner; not its allocation extent. */
struct LmapDestinationListsA {
    /* 0x0000 */ u8 unk0000[0x64];
    /* 0x0064 */ s8 mapId;
    /* 0x0065 */ u8 unk0065[0x1727];
    /* 0x178c */ LmapDestinationEntryA entries[256];
    /* 0x7b8c */ s32 entryCount;
    /* 0x7b90 */ u8 dirty;
    /* 0x7b91 */ u8 unk7b91[3];
    /* 0x7b94 */ LmapDestinationEntryA extraEntries[24];
    /* 0x84f4 */ s32 extraEntryCount;
};

typedef char LmapDestinationListsALayoutCheck[sizeof(LmapDestinationEntryA) == 0x64 &&
    offsetof(LmapDestinationEntryA, type) == 0x5 &&
    offsetof(LmapDestinationEntryA, checkId) == 0x2E &&
    offsetof(LmapDestinationEntryA, available) == 0x34 &&
    offsetof(LmapDestinationEntryA, dataKey) == 0x4C &&
    offsetof(LmapDestinationEntryA, requiredSubmode) == 0x60 &&
    offsetof(LmapDestinationListsA, entries) == 0x178c && offsetof(LmapDestinationListsA, entryCount) == 0x7b8c &&
    offsetof(LmapDestinationListsA, extraEntries) == 0x7b94 && offsetof(LmapDestinationListsA, extraEntryCount) == 0x84f4 ? 1 : -1];

extern "C" {
void lmapRefreshDestinationAvailability(LmapDestinationListsA *list);
}
#endif
