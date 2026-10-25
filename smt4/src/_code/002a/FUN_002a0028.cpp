/* NON_MATCHING: unite list sizing and region rebuild are recovered; getter/base registers, invalid-region constant materialization, and count-loop layout differ. */
#include "shard/W6_W6Match3_ScrollSelection.h"
#include "status/StatusCamera.h"

struct UniteTouchWork {
    /* 0x000 */ u8 unk000[0x438];
    /* 0x438 */ u16 itemRegions[8];
    /* 0x448 */ u8 unk448[0x2a];
    /* 0x472 */ u16 previousRegion;
    /* 0x474 */ u16 nextRegion;
    /* 0x476 */ u16 confirmRegion;
    /* 0x478 */ u8 unk478[0x70];
    /* 0x4E8 */ ScrollSelection selection;
};

struct UniteMenuAvailability {
    /* 0x00 */ u8 unk00[0x2c];
    /* 0x2C */ u8 first;
    /* 0x2D */ u8 second;
    /* 0x2E */ u8 third;
};

extern "C" {
extern UniteTouchWork *g_unite;
s32 FUN_0029efc0(const ScrollSelection *selection);
s32 FUN_0029efa8(const ScrollSelection *selection);
void FUN_0029f848(ScrollSelection *selection, u32 count, u32 visible, u32 option, u32 first, u32 second);
void FUN_0029eb5c(ScrollSelection *selection, s32 index);
s32 FUN_0029ee54(const ScrollSelection *selection);
void ifTouchRegionRemove();
u16 FUN_002b8584(u32 table, u32 index);
}

// Resize the unite list for available menu categories and optionally rebuild its touch regions.
extern "C" void FUN_002a0028(s32 refreshRegions)
{
    UniteTouchWork *work = g_unite;
    UniteMenuAvailability *available = reinterpret_cast<UniteMenuAvailability *>(FUN_002a0d0c());
    ScrollSelection *selection = &work->selection;
    s32 top = FUN_0029efc0(selection);
    s32 offset = FUN_0029efa8(selection);
    u32 count = 3;
    if (available->first) {
        count = 6;
        if (available->second) {
            count = 12;
            if (available->third)
                count = 14;
        }
    }
    FUN_0029f848(selection, count, 8, 1, 0, 1);
    FUN_0029eb5c(selection, top + offset);
    if (refreshRegions) {
        for (s32 index = 0; index < 8; ++index) {
            work->itemRegions[index] = 0xffff;
            ifTouchRegionRemove();
        }
        work->confirmRegion = 0xffff;
        work->previousRegion = 0xffff;
        work->nextRegion = 0xffff;
        ifTouchRegionRemove();
        ifTouchRegionRemove();
        ifTouchRegionRemove();
        for (s32 index = 0; index < 8 && index < FUN_0029ee54(selection); ++index)
            work->itemRegions[index] = FUN_002b8584(36, index + 0xa9);
        work->confirmRegion = FUN_002b8584(36, 0x1f0);
        work->previousRegion = FUN_002b8584(36, 0x1ee);
        work->nextRegion = FUN_002b8584(36, 0x1ef);
    }
}
