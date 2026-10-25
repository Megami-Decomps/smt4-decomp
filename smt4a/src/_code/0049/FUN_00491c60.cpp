/* NON_MATCHING: only difference is the entry->type compare chain using r0 instead of retail's r1 (4 compares in loop 1, 2 in loop 2) */
#include "map/mapDepart.h"
#include "shard/W6_W6Match3_UnitStatusRequest.h"

/* One selectable entry of the map's destination lists. */
struct LmapListEntry {
    /* 0x00 */ u8 unk00[4];
    /* 0x04 */ u8 id;
    /* 0x05 */ u8 type;       /* 0xff owned item, 0xfe/0xfc quest checks, 0xfd flag bit, else flag pair */
    /* 0x06 */ s16 mapId;     /* map the entry belongs to */
    /* 0x08 */ u16 unlockA;
    /* 0x0a */ u16 unlockB;
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

struct LmapList {
    /* 0x0000 */ u8 unk0000[0x64];
    /* 0x0064 */ s8 mapId;
    /* 0x0065 */ u8 unk0065[0x1727];
    /* 0x178c */ LmapListEntry entries[256];
    /* 0x7b8c */ s32 entryCount;
    /* 0x7b90 */ u8 dirty;
    /* 0x7b91 */ u8 unk7b91[3];
    /* 0x7b94 */ LmapListEntry extraEntries[24];
    /* 0x84f4 */ s32 extraEntryCount;
};

typedef char LmapListLayoutCheck[sizeof(LmapListEntry) == 100 &&
    offsetof(LmapList, entries) == 0x178c && offsetof(LmapList, entryCount) == 0x7b8c &&
    offsetof(LmapList, extraEntries) == 0x7b94 && offsetof(LmapList, extraEntryCount) == 0x84f4 ? 1 : -1];

extern "C" {

s32 gameFlagIsSet(u32 id);
s32 gameOwnedBitTest2(s32 id);
s32 gameFlagsBitTest(s32 id);
s32 gameFlagsGetWorkState(void);
s32 dataTableHasMatchingEntry35(u32 key);
s32 FUN_002e707c(u32 key);
s32 FUN_003bf5a8(s32 id);
s32 FUN_004083a8(u8 id);

extern GameStateA g_gameState;

/* Refresh the availability of every entry in the current map's destination lists. */
void FUN_00491c60(LmapList *list)
{
    s32 i;

    for (i = 0; i < list->entryCount; i++) {
        LmapListEntry *entry = &list->entries[i];

        if (entry->mapId == list->mapId) {
            if (g_gameState.showAllEntries != 0) {
                entry->available = 1;
            } else if (entry->type == 0xff) {
                if (gameOwnedBitTest2(entry->checkId) != 0) {
                    entry->available = 1;
                } else {
                    entry->available = 0;
                }
            } else if (entry->type == 0xfe) {
                if (FUN_00384d34(entry->checkId) != 0) {
                    entry->available = 1;
                } else {
                    entry->available = 0;
                }
            } else if (entry->type == 0xfd) {
                if (gameFlagsBitTest(entry->checkId) != 0) {
                    entry->available = 1;
                } else {
                    entry->available = 0;
                }
                if (entry->requiredSubmode != 0 && entry->requiredSubmode != g_gameState.submode) {
                    entry->available = 0;
                }
            } else if (entry->type == 0xfc) {
                if (FUN_003bf5a8(entry->checkId) != 0) {
                    entry->available = 1;
                } else {
                    entry->available = 0;
                }
            } else if (FUN_004083a8(entry->id) == 0) {
                entry->available = 0;
            } else {
                s32 blocked = 0;

                if ((entry->requiredFlag != 0 && gameFlagIsSet(entry->requiredFlag) == 0) ||
                    (entry->forbiddenFlag != 0 && gameFlagIsSet(entry->forbiddenFlag) != 0)) {
                    blocked = 1;
                }
                if ((entry->dataKey == 0 || FUN_002e707c(entry->dataKey) != 0 ||
                     dataTableHasMatchingEntry35(entry->dataKey) != 0) &&
                    blocked == 0) {
                    entry->available = 1;
                } else {
                    entry->available = 0;
                }
                if (g_gameState.mode == 0x17) {
                    if (g_gameState.submode == 2 && entry->id == 0x7a && entry->type == 2) {
                        entry->available = 0;
                    }
                }
                if (g_gameState.mode == 0x17) {
                    if (g_gameState.submode == 3 && entry->id == 0x7e && entry->type == 2) {
                        entry->available = 0;
                    }
                }
            }
        } else if (entry->unlockA == 0x1bd2 || entry->unlockB == 0x1bd4) {
            if (gameFlagsGetWorkState() == 0x17) {
                entry->available = 1;
            } else {
                entry->available = 0;
            }
        } else if (entry->unlockA == 0x1bd6 || entry->unlockB == 0x1bd8) {
            entry->available = 1;
        } else {
            entry->available = 0;
        }
    }

    for (i = 0; i < list->extraEntryCount; i++) {
        LmapListEntry *entry = &list->extraEntries[i];

        if (entry->mapId == list->mapId) {
            if (g_gameState.showAllEntries != 0) {
                entry->available = 1;
            } else if (entry->type == 0xff) {
                if (gameOwnedBitTest2(entry->checkId) != 0) {
                    entry->available = 1;
                } else {
                    entry->available = 0;
                }
            } else if (entry->type == 0xfd) {
                if (gameFlagsBitTest(entry->checkId) != 0) {
                    entry->available = 1;
                } else {
                    entry->available = 0;
                }
                if (entry->requiredSubmode != 0 && entry->requiredSubmode != g_gameState.submode) {
                    entry->available = 0;
                }
            } else if (FUN_004083a8(entry->id) == 0) {
                entry->available = 0;
            } else {
                if ((entry->requiredFlag != 0 && gameFlagIsSet(entry->requiredFlag) == 0) ||
                    (entry->forbiddenFlag != 0 && gameFlagIsSet(entry->forbiddenFlag) != 0)) {
                    entry->available = 0;
                } else {
                    entry->available = 1;
                }
                if (g_gameState.mode == 0x17) {
                    if (g_gameState.submode == 2 && entry->id == 0x7a && entry->type == 2) {
                        entry->available = 0;
                    }
                }
                if (g_gameState.mode == 0x17) {
                    if (g_gameState.submode == 3 && entry->id == 0x7e && entry->type == 2) {
                        entry->available = 0;
                    }
                }
            }
        } else {
            entry->available = 0;
        }
    }
    list->dirty = 0;
}

} /* extern "C" */
