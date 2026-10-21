#include "common.h"

struct MapEntry {
    /* 0x00 */ u8 active;
    /* 0x01 */ u8 unk01[3];
    /* 0x04 */ u32 first;
    /* 0x08 */ u32 second;
    /* 0x0C */ f32 x;
    /* 0x10 */ f32 y;
    /* 0x14 */ f32 z;
    /* 0x18 */ f32 scale;
    /* 0x1C */ u32 state;
    /* 0x20 */ u8 ready;
    /* 0x21 */ u8 unk21[7];
    /* 0x28 */ u8 visible;
    /* 0x29 */ u8 unk29[3];
    /* 0x2C */ u32 handle;
    /* 0x30 */ u8 selected;
    /* 0x31 */ u8 unk31[3];
    /* 0x34 */ u32 value;
    /* 0x38 */ u32 unk38;
};

struct MapEntries {
    /* 0x00 */ u32 state;
    /* 0x04 */ u16 ids[4];
    /* 0x0C */ u32 unk0C;
    /* 0x10 */ u32 count;
    /* 0x14 */ u32 cursors[4];
    /* 0x24 */ MapEntry entries[16];
};

extern "C" {

extern MapEntries *g_mapRangeWork;

/* Resets map entries and their selection cursors. */
void FUN_001a8f74(void)
{
    MapEntries *work = g_mapRangeWork;
    work->state = 0;
    work->ids[0] = 0;
    work->ids[1] = 0;
    work->ids[2] = 0;
    work->ids[3] = 0;
    work->count = 0;
    for (s32 index = 0; index < 16; ++index) {
        MapEntry *entry = &work->entries[index];
        entry->active = 0;
        entry->first = 0;
        entry->second = 0;
        entry->x = 0.0f;
        entry->y = 0.0f;
        entry->z = 0.0f;
        entry->scale = 0.0f;
        entry->state = 0;
        entry->ready = 0;
        entry->visible = 0;
        entry->handle = 0;
        entry->selected = 0;
        entry->value = 0;
    }
    g_mapRangeWork->cursors[0] = 0;
    g_mapRangeWork->cursors[1] = 0;
    g_mapRangeWork->cursors[2] = 0;
    g_mapRangeWork->cursors[3] = 0;
}

} /* extern "C" */
