/* NON_MATCHING: switch block ordering, shared flags tail and paired mode/frame stores differ. */
#include "common.h"
#include <stddef.h>

struct MapMenuDestination { u16 values[3]; };
struct MapMenuActionWork {
    u8 unk00[0x20];
    u32 flags;
    u32 unk24;
    u32 mode;
    u32 frame;
    u8 unk30[0xc];
    s16 map;
    u8 unk3e[4];
    MapMenuDestination destination;
};
struct MapMenuActionRecord {
    u8 unk00[0x21];
    u8 action;
    u8 unk22[0x32];
    MapMenuDestination destination;
};
typedef char MapMenuActionOffsets[
    offsetof(MapMenuActionWork, flags) == 0x20 &&
    offsetof(MapMenuActionWork, map) == 0x3c &&
    offsetof(MapMenuActionWork, destination) == 0x42 &&
    offsetof(MapMenuActionRecord, action) == 0x21 &&
    offsetof(MapMenuActionRecord, destination) == 0x54 ? 1 : -1];
extern "C" {
void FUN_001d1438(MapMenuDestination *, const MapMenuDestination *);
void FUN_004b7a08(MapMenuActionWork *);
void FUN_004b6bc4(MapMenuActionWork *, s32, s32);

void FUN_004b726c(MapMenuActionWork *work, const MapMenuActionRecord *record)
{
    work->frame = 0;
    work->mode = 5;
    MapMenuDestination destination;
    destination.values[0] = 0;
    destination.values[1] = 0;
    destination.values[2] = 0;
    switch (record->action) {
    case 1:
        destination.values[0] = record->destination.values[0];
        FUN_001d1438(&work->destination, &destination);
        work->flags |= 0x10;
        break;
    case 2:
        destination.values[0] = record->destination.values[0];
        destination.values[1] = record->destination.values[1];
        destination.values[2] = record->destination.values[2];
        FUN_001d1438(&work->destination, &destination);
        work->flags |= 0x100010;
        work->mode = 5;
        work->frame = 0;
        break;
    case 3:
        FUN_004b7a08(work);
        work->flags |= 0x1000000;
        break;
    case 4:
        FUN_004b7a08(work);
        work->flags |= 0x2000000;
        break;
    case 5:
        FUN_004b7a08(work);
        work->flags |= 0x4000000;
        break;
    case 6:
        work->flags |= 0x800000;
        break;
    case 7:
        FUN_004b7a08(work);
        work->flags |= 0x200000;
        break;
    case 8:
        FUN_004b6bc4(work, work->map, record->destination.values[0]);
        work->mode = 4;
        work->frame = 0;
        break;
    case 9:
        FUN_004b7a08(work);
        work->flags |= 0x8000000;
        break;
    case 10:
        FUN_004b7a08(work);
        work->flags |= 0x20000000;
        break;
    }
}
}
