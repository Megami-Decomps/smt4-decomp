/* NON_MATCHING: near miss: register assignment and constant load order differ (retail keeps work in r9, the zero reserved word in the stack frame at sp+12 and hoists the 0.5/317/400 constants differently). */
#include "common.h"

/* A record of data table 0x2B sub-table 1: a map marker. */
struct MapMarkerRecord {
    s8 kind;            // 0x00: the map region it belongs to
    u8 unk01;
    u8 unk02;
    u8 unk03;
    u16 showFlag;       // 0x04
    u16 hideFlag;       // 0x06
    s16 type;           // 0x08
    u8 unk0A[4];
    s16 x;              // 0x0E
    s16 y;              // 0x10
};

/* A marker draw entry (0x4C bytes, at 0xE88 of the map work). */
struct MapMarkerEntry {
    u32 group;          // 0x00
    u8 unk04;
    u8 unk05;
    u16 unk06;
    u16 spriteId;       // 0x08
    u8 unk0A[2];
    f32 x;              // 0x0C
    f32 y;              // 0x10
    f32 width;          // 0x14
    f32 height;         // 0x18
    u8 unk1C[0x10];
    u16 type;           // 0x2C
    u16 unk2E;
    u16 showFlag;       // 0x30
    u16 hideFlag;       // 0x32
    u16 unk34;
    u8 unk36[0x12];
    s32 unk48;          // 0x48
};

struct MapMarkerWork {
    u8 unk0000[0xE88];
    MapMarkerEntry entries[1];
};

extern "C" {
s32 dataTable2bSub1GetCount(void *iterator);
MapMarkerRecord *dataTable2bSub1GetRecord(void *iterator, s32 index);
s32 gameFlagIsSet(u32 flag);
void uiGetEntrySize(u32 group, u32 sprite, s32 *width, s32 *height);
}

#define MARKER_COUNT(work) (*reinterpret_cast<s32 *>(reinterpret_cast<u8 *>(work) + 0x5A88))
#define MARKER_RESERVED(work) (*reinterpret_cast<s32 *>(reinterpret_cast<u8 *>(work) + 0x61B0))

/* Build the marker draw entries of one map region, projecting world positions onto the 317x400 map image. */
extern "C" void FUN_002316e8(MapMarkerWork *work, s32 region)
{
    s32 count = 0;
    s32 reserved = 0;
    f32 left = 0.0f;
    f32 right = 0.0f;
    f32 top = 0.0f;
    f32 bottom = 0.0f;
    if (region == 101) {
        left = -25500.0f;
        top = -18500.0f;
        right = 29500.0f;
        bottom = 38000.0f;
    } else if (region == 102) {
        left = -17000.0f;
        top = -18000.0f;
        right = 31000.0f;
        bottom = 37000.0f;
    } else if (region == 103) {
        left = -17000.0f;
        top = -19000.0f;
        right = 30000.0f;
        bottom = 37000.0f;
    }
    u8 iterator[4];
    for (s32 i = 0; i < dataTable2bSub1GetCount(iterator); i++) {
        MapMarkerRecord *record = dataTable2bSub1GetRecord(iterator, i);
        if (record->kind != region)
            continue;
        if (record->showFlag != 0 && gameFlagIsSet(record->showFlag) == 0)
            continue;
        if (record->hideFlag != 0 && gameFlagIsSet(record->hideFlag) != 0)
            continue;
        u32 sprite;
        if (record->type == 5)
            sprite = 0x1BC3;
        else if (record->type == 6)
            sprite = 0x1BC4;
        else
            sprite = 0x1BC5;
        s32 width;
        s32 height;
        uiGetEntrySize(0x13, sprite, &width, &height);
        MapMarkerEntry *entry = &work->entries[count++];
        f32 scaleX = 317.0f / right;
        f32 scaleY = 400.0f / bottom;
        s16 projectedX = static_cast<s16>(static_cast<s32>(scaleX * (static_cast<f32>(record->x) - left)));
        s16 projectedY = static_cast<s16>(static_cast<s32>(scaleY * (static_cast<f32>(record->y) - top)));
        f32 halfWidth = static_cast<f32>(width) * 0.5f;
        entry->group = 0x13;
        entry->unk04 = reinterpret_cast<u8 *>(record)[1];
        entry->unk05 = reinterpret_cast<u8 *>(record)[2];
        entry->unk06 = 0;
        entry->spriteId = sprite;
        entry->type = record->type;
        entry->unk2E = 0;
        entry->showFlag = record->showFlag;
        entry->hideFlag = record->hideFlag;
        entry->width = static_cast<f32>(width);
        entry->x = static_cast<f32>(static_cast<s16>(static_cast<s32>(static_cast<f32>(projectedX) - halfWidth)));
        entry->y = static_cast<f32>(static_cast<s16>(static_cast<s32>(static_cast<f32>(projectedY) - halfWidth)));
        entry->height = static_cast<f32>(height);
        entry->unk34 = 0;
        entry->unk48 = -1;
    }
    MARKER_COUNT(work) = count;
    MARKER_RESERVED(work) = reserved;
}
