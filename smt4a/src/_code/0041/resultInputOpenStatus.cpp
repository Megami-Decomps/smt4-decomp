/* NON_MATCHING: the final state reset stores next-state's zero from the shared r6 where retail materializes a fresh zero (one instruction). */
#include "shard/W6_W6Match3_UnitStatusRequest.h"
#include <stddef.h>
#include "result/ResultInput.h"
#include "event/2dEvent/SmokeFade.h"
#include "code/Code002c.h"
#include "code/Code002c_Smt4a.h"

struct UnitStatusOpenRequest {
    u16 selection;
    u8 unk02[14];
};
typedef char UnitStatusOpenRequestSize[sizeof(UnitStatusOpenRequest) == 16 ? 1 : -1];

extern "C" {
void FUN_00215bd0();
void FUN_002c85b0(s32);
void FUN_0031f718(s32, s32, u32);
const UnitCategoryRecord *saveSlotFindById(u32);
void statusPanelSetOpen(s32);
void FUN_0035da20(const UnitStatusOpenRequest *, u32);
void statusDownEnterStateOne();
void scrScriptProcessStartEntry(u32, s32);
void FUN_00333dc8(s32);
s32 scrRunOpcodesStub(u32);
void sysPlaySe(u32);

/* Open player/saved-unit status, run the optional entry script and restore the caller's state. */
u32 resultInputOpenStatus(ResultInputWork *work)
{
    switch (work->preparation.phase) {
    case 0:
        FUN_002c8538(1);
        FUN_00215bd0();
        work->preparation.phase = 1;
        // Fall through to the preparation wait.
    case 1:
        if (!FUN_0023b3d0())
            break;
        work->preparation.phase = 2;
        // Fall through to opening the selected status.
    case 2:
        if (work->preparation.player) {
            FUN_002c85b0(12);
            FUN_0031f718(-1, 0, 0);
            statusPanelSetOpen(1);
            UnitStatusOpenRequest open = {0};
            open.selection = work->preparation.skill;
            FUN_0035da20(&open, 8);
        } else {
            const UnitCategoryRecord *unit = saveSlotFindById((u16)work->resources.selectedId);
            FUN_002c85b0(12);
            statusRequestUnitDetails(unit, 0, NULL);
            statusPanelSetOpen(1);
            UnitStatusOpenRequest open = {0};
            open.selection = work->preparation.skill;
            FUN_0035da20(&open, 8);
        }
        statusDownEnterStateOne();
        work->preparation.phase = 3;
        // Fall through to the panel-close wait.
    case 3:
        if (FUN_002c7cb4()) {
            if (!work->preparation.player) {
                work->preparation.phase = 5;
            } else {
                scrScriptProcessStartEntry(work->resources.resultHandle, 14);
                FUN_00333dc8(1);
                work->preparation.phase = 4;
            }
        }
        break;
    case 4:
        if (scrRunOpcodesStub(work->resources.resultHandle) == 2) {
            FUN_00333dc8(0);
            work->preparation.phase = 5;
        }
        break;
    case 5: {
        u32 next = work->preparation.nextState;
        work->preparation.nextState = 0;
        work->preparation.state = next;
        work->preparation.phase = 0;
        if (next == 5)
            sysPlaySe(work->preparation.player ? 0x11D : 0x67);
        break;
    }
    }
    return 0;
}
}
