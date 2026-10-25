/* NON_MATCHING: shared flags-store tail is placed after the first flag case instead of after the last; mode/frame strd now matches. */
#include "common.h"
#include <stddef.h>

struct MapMenuDestination { u16 values[3]; };
struct MapMenuMotion { u32 mode, frame; };
struct MapMenuActionWork {
    u8 unk00[0x20];
    u32 flags;
    u32 unk24;
    MapMenuMotion motion;
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
    offsetof(MapMenuActionWork, flags) == 0x20 && offsetof(MapMenuActionWork, motion) == 0x28 &&
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
    work->motion.frame = 0;
    work->motion.mode = 5;
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
        MapMenuMotion reset;
        reset.mode = 5;
        reset.frame = 0;
        work->motion = reset;
        return;
    case 7:
        FUN_004b7a08(work);
        work->flags |= 0x200000;
        break;
    case 6:
        work->flags |= 0x800000;
        break;
    case 5:
        FUN_004b7a08(work);
        work->flags |= 0x4000000;
        break;
    case 3:
        FUN_004b7a08(work);
        work->flags |= 0x1000000;
        break;
    case 4:
        FUN_004b7a08(work);
        work->flags |= 0x2000000;
        break;
    case 8:
        FUN_004b6bc4(work, work->map, record->destination.values[0]);
        MapMenuMotion start;
        start.mode = 4;
        start.frame = 0;
        work->motion = start;
        return;
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
