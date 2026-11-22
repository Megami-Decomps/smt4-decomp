/* NON_MATCHING: retail keeps the content search's -1 in a register from the loop's start and reuses the loop
 * index as the result, and the record arm jumps into the content arm's naviSetActiveMapSlot call (here the other
 * way round). */
#include "gamedata/MapSaveBlock.h"

// A location record of the type-50 table (the part this function reads).
struct LocationRecord {
    /* 0x00 */ s8 first;
    /* 0x01 */ s8 second;
    /* 0x02 */ s16 v0;
    /* 0x04 */ s16 v1;
    /* 0x06 */ s16 v2;
    /* 0x08 */ u16 v3;
    /* 0x0a */ u8 unk0a[2];
    /* 0x0c */ u16 contentId;  // content entry to show, 0: use the record's own values
    /* 0x0e */ u8 unk0e;
    /* 0x0f */ s8 kind;        // 2 and 3 are shown
    /* 0x10 */ u8 unk10[2];
    /* 0x12 */ u16 mapId;
};

// An entry of the content table 0x32 (the part this function reads).
struct ContentEntry {
    /* 0x00 */ s32 id;         // -1: unused
    /* 0x04 */ s8 first;
    /* 0x05 */ s8 second;
    /* 0x06 */ s16 v0;
    /* 0x08 */ s16 v1;
    /* 0x0a */ s16 v2;
    /* 0x0c */ u16 v3;
    /* 0x0e */ s16 minutes;
    /* 0x10 */ u8 third;
    /* 0x11 */ u8 fourth;
};

extern "C" {
s32 dataTableGetRecordFifty(void);
LocationRecord *FUN_00267144(s32 index);
s32 FUN_0027d968(void);
s32 FUN_00326e44(void);
ContentEntry *contentEntryGetE(s32 index);
void naviSetActiveMapSlot(u32 kind, u32 argument, u32 first, u32 second, u32 third, u32 fourth, u32 fifth);

// Fills the map's location markers from the records that belong to the current map.
void mapUpdateLocationAvailability(void)
{
    MapSaveBlock *block = gameGetMapBlock();
    s32 used = 0;
    MapSaveBlock *cleared = gameGetMapBlock();
    for (s32 i = 0; i < 16; i++) {
        cleared->markers[i].flags = 0;
        cleared->markers[i].contentIndex = 0;
        cleared->markers[i].stage = 0;
        cleared->markers[i].timer = 0;
    }
    for (s32 i = 0; i < dataTableGetRecordFifty(); i++) {
        LocationRecord *record = FUN_00267144(i);
        if (record->first == -1 || record->mapId == 0 || FUN_0027d968() != (s16)record->mapId) {
            continue;
        }
        if (record->contentId != 0) {
            block->markers[used].flags = (block->markers[used].flags & ~4) | 3;
            s16 id = (s16)record->contentId;
            s32 found = -1;
            for (s32 j = 0; j < FUN_00326e44(); j++) {
                ContentEntry *entry = contentEntryGetE(j);
                if (entry->id != -1 && entry->id == id) {
                    found = j;
                    break;
                }
            }
            block->markers[used].contentIndex = (s16)found;
            ContentEntry *entry = contentEntryGetE((s16)found);
            block->markers[used].stage = 0;
            block->markers[used].timer = entry->minutes * 0x708;
            block->markers[used].first = entry->first;
            block->markers[used].second = entry->second;
            block->markers[used].values[0] = entry->v0;
            block->markers[used].values[1] = entry->v1;
            block->markers[used].values[2] = entry->v2;
            block->markers[used].values[3] = entry->v3;
            block->markers[used].x = entry->third;
            block->markers[used].y = entry->fourth;
            naviSetActiveMapSlot(used, block->markers[used].first, block->markers[used].second,
                                 block->markers[used].values[0], block->markers[used].values[1],
                                 block->markers[used].values[2], 0);
        } else if (record->kind == 2 || record->kind == 3) {
            block->markers[used].flags = (block->markers[used].flags & ~6) | 1;
            block->markers[used].contentIndex = 0;
            block->markers[used].stage = 0;
            block->markers[used].timer = 0;
            block->markers[used].first = record->first;
            block->markers[used].second = record->second;
            block->markers[used].values[0] = record->v0;
            block->markers[used].values[1] = record->v1;
            block->markers[used].values[2] = record->v2;
            block->markers[used].values[3] = record->v3;
            block->markers[used].x = 0;
            block->markers[used].y = 0;
            naviSetActiveMapSlot(used, block->markers[used].first, block->markers[used].second,
                                 block->markers[used].values[0], block->markers[used].values[1],
                                 block->markers[used].values[2], 0);
        }
        used++;
    }
}
}
