/* NON_MATCHING: work/touch-list bases coalesce, and script mode 2 remains in a saved register through activation. */
#include "common.h"
#include "script/scrScriptProcess.h"
#include "shard/W6_W6Match3_UnitStatusRequest.h"

struct UnitScreenReadyViewA {
    u32 unk00;
    u8 mode;
    u8 unk05[3];
    u32 state;
    u32 nextState;
    u8 unk10[0x2B4];
    u32 selectedUnit;
    u8 unk2C8[0x30];
    s16 touchRegions[12];
    s32 touchCount;
    void* resource;
    u32 infoWindow;
    void* scriptResource;
    ScriptRunState* script;
    s32 unitCount;
    u8 unk328[0x1C];
    u32 refresh;
};
extern "C" {
s32 FUN_0023b3d0(void);
ScriptRunState* FUN_00275bc8(void* resource, u32 infoWindow);
void infoWinSetText(u32 window, s32 text);
void dialogOpen(s32 first, s32 second);
void __aeabi_memset4(void* destination, u32 size, u32 value);
void ifTouchRegionRemove(void);
void ifTouchResetRecord(void);
UnitCategoryRecord* FUN_003e4d68(u16 unit);
s32 FUN_00187168(const UnitCategoryRecord* unit);
u16 FUN_001643b4(u32 table, s32 region);
void statusPanelSetOpen(s32 opened);

void FUN_004be1c8(UnitScreenReadyViewA* work)
{
    if (!work->resource || !work->infoWindow || !work->scriptResource ||
        (work->mode != 1 && !FUN_0023b3d0())) {
        return;
    }
    ScriptRunState* script = FUN_00275bc8(work->scriptResource, work->infoWindow);
    work->script = script;
    script->mode = 2;
    if (work->mode == 1) {
        infoWinSetText(work->infoWindow, 4);
        dialogOpen(0, 1);
        work->state = 9;
        return;
    }
    __aeabi_memset4(work->touchRegions, sizeof(work->touchRegions), 0xFFFFFFFF);
    if (work->touchCount > 0) {
        // Retail post-increments this count in the loop condition.
        for (s32 index = 0; index < work->touchCount++; ++index) {
            ifTouchRegionRemove();
            work->touchRegions[index] = -1;
        }
        work->touchCount = 0;
        ifTouchResetRecord();
    }
    for (s32 index = 0; index < 12; ++index) {
        UnitCategoryRecord* unit = FUN_003e4d68(static_cast<u16>(index));
        if (unit && FUN_00187168(unit)) {
            u16 region = FUN_001643b4(0x11, work->touchCount + 0xAE);
            work->touchRegions[work->touchCount] = region;
            ++work->touchCount;
        }
    }
    if (work->unitCount > 0) {
        UnitCategoryRecord* unit = FUN_003e4d68(static_cast<u16>(work->selectedUnit));
        statusRequestUnitDetails(unit, 0, 0);
        statusPanelSetOpen(1);
    }
    work->state = 2;
    work->nextState = 3;
    work->refresh = 1;
}
}
