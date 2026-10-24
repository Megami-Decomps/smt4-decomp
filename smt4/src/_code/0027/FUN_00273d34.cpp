/* NON_MATCHING: readable rewrite; the build allocates the registers of the two table scans differently from retail. */
#include "common.h"

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
    /* 0x0e */ u16 minutes;
    /* 0x10 */ u8 third;
    /* 0x11 */ u8 fourth;
};

// One of the 16 location markers kept in the map block (0x14 bytes).
struct MapMarkerSlot {
    /* 0x00 */ u8 flags;       // bit 0: used, bit 1: shows a content entry
    /* 0x01 */ s8 first;
    /* 0x02 */ s8 second;
    /* 0x03 */ u8 stage;
    /* 0x04 */ s16 contentIndex;
    /* 0x06 */ u8 unk06[2];
    /* 0x08 */ s16 duration;   // content minutes * 0x708
    /* 0x0a */ u8 third;
    /* 0x0b */ u8 fourth;
    /* 0x0c */ s16 v0;
    /* 0x0e */ s16 v1;
    /* 0x10 */ s16 v2;
    /* 0x12 */ s16 v3;
};

struct MapBlockView {
    u8 unk0000[0xf20];
    MapMarkerSlot markers[16];  // 0xf20
};

extern "C" {
MapBlockView *gameGetMapBlock(void);
s32 dataTableGetRecordFifty(void);
LocationRecord *FUN_00267144(s32 index);
s32 FUN_0027d968(void);
s32 FUN_00326e44(void);
ContentEntry *contentEntryGetE(s32 index);
void FUN_00267074(u32 kind, u32 argument, u32 first, u32 second, u32 third, u32 fourth, u32 fifth);

// Fills the map's location markers from the records that belong to the current map.
void FUN_00273d34(void)
{
    MapBlockView *block = gameGetMapBlock();
    s32 used = 0;
    MapBlockView *cleared = gameGetMapBlock();
    for (s32 i = 0; i < 16; i++) {
        cleared->markers[i].flags = 0;
        cleared->markers[i].contentIndex = 0;
        cleared->markers[i].stage = 0;
        cleared->markers[i].duration = 0;
    }
    for (s32 i = 0; i < dataTableGetRecordFifty(); i++) {
        LocationRecord *record = FUN_00267144(i);
        if (record->first == -1 || record->mapId == 0 || FUN_0027d968() != (s16)record->mapId) {
            continue;
        }
        MapMarkerSlot *marker = &block->markers[used];
        if (record->contentId != 0) {
            marker->flags = (marker->flags & ~4) | 3;
            s16 id = (s16)record->contentId;
            s32 found = -1;
            for (s32 j = 0; j < FUN_00326e44(); j++) {
                ContentEntry *entry = contentEntryGetE(j);
                if (entry->id != -1 && entry->id == id) {
                    found = j;
                    break;
                }
            }
            marker->contentIndex = (s16)found;
            ContentEntry *entry = contentEntryGetE((s16)found);
            marker->stage = 0;
            marker->duration = entry->minutes * 0x708;
            marker->first = entry->first;
            marker->second = entry->second;
            marker->v0 = entry->v0;
            marker->v1 = entry->v1;
            marker->v2 = entry->v2;
            marker->v3 = entry->v3;
            marker->third = entry->third;
            marker->fourth = entry->fourth;
        } else if (record->kind == 2 || record->kind == 3) {
            marker->flags = (marker->flags & ~6) | 1;
            marker->contentIndex = 0;
            marker->stage = 0;
            marker->duration = 0;
            marker->first = record->first;
            marker->second = record->second;
            marker->v0 = record->v0;
            marker->v1 = record->v1;
            marker->v2 = record->v2;
            marker->v3 = record->v3;
            marker->third = 0;
            marker->fourth = 0;
        } else {
            used++;
            continue;
        }
        FUN_00267074(used, marker->first, marker->second, marker->v0, marker->v1, marker->v2, 0);
        used++;
    }
}
}
