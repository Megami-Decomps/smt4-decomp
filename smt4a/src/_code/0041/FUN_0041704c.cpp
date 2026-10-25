/* NON_MATCHING: zero/final-state constant scheduling and next-state reset register reuse differ. */
#include "shard/W6_W6Match3_UnitStatusRequest.h"
#include <stddef.h>
#include "event/2dEvent/SmokeFade.h"
#include "util/CalleeContracts.h"

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
s32 FUN_002c7cb4();
void scrScriptProcessStartEntry(u32, s32);
void FUN_00333dc8(s32);
s32 scrRunOpcodesStub(u32);
void sysPlaySe(u32);

/* Open player/saved-unit status, run the optional entry script and restore the caller's state. */
u32 FUN_0041704c(void *work)
{
    struct StatusRequestView {
        u8 unk00[8];
        s32 state;
        u32 phase;
        s32 nextState;
        u8 unk14[8];
        u32 script;
        u8 unk20[0x14];
        u32 unitId;
        u16 selection;
        u8 unk3A[6];
        u8 player;
    };
    typedef char StatusRequestOffsets[
        offsetof(StatusRequestView, state) == 8 &&
        offsetof(StatusRequestView, phase) == 0xC &&
        offsetof(StatusRequestView, nextState) == 0x10 &&
        offsetof(StatusRequestView, script) == 0x1C &&
        offsetof(StatusRequestView, unitId) == 0x34 &&
        offsetof(StatusRequestView, selection) == 0x38 &&
        offsetof(StatusRequestView, player) == 0x40 ? 1 : -1];
    StatusRequestView *request = (StatusRequestView *)work;
    switch (request->phase) {
    case 0:
        FUN_002c8538(1);
        FUN_00215bd0();
        request->phase = 1;
        // Fall through to the preparation wait.
    case 1:
        if (!FUN_0023b3d0())
            break;
        request->phase = 2;
        // Fall through to opening the selected status.
    case 2:
        if (request->player) {
            FUN_002c85b0(12);
            FUN_0031f718(-1, 0, 0);
            statusPanelSetOpen(1);
            UnitStatusOpenRequest open = {0};
            open.selection = request->selection;
            FUN_0035da20(&open, 8);
        } else {
            const UnitCategoryRecord *unit = saveSlotFindById((u16)request->unitId);
            FUN_002c85b0(12);
            statusRequestUnitDetails(unit, 0, NULL);
            statusPanelSetOpen(1);
            UnitStatusOpenRequest open = {0};
            open.selection = request->selection;
            FUN_0035da20(&open, 8);
        }
        statusDownEnterStateOne();
        request->phase = 3;
        // Fall through to the panel-close wait.
    case 3:
        if (FUN_002c7cb4()) {
            if (!request->player) {
                request->phase = 5;
            } else {
                scrScriptProcessStartEntry(request->script, 14);
                FUN_00333dc8(1);
                request->phase = 4;
            }
        }
        break;
    case 4:
        if (scrRunOpcodesStub(request->script) == 2) {
            FUN_00333dc8(0);
            request->phase = 5;
        }
        break;
    case 5: {
        s32 next = request->nextState;
        request->nextState = 0;
        request->state = next;
        request->phase = 0;
        if (next == 5)
            sysPlaySe(request->player ? 0x11D : 0x67);
        break;
    }
    }
    return 0;
}
}
