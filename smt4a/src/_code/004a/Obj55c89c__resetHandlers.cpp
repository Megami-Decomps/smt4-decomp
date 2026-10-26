#include "classes/Obj55c89c.h"

void Obj55c89c::resetHandlers()
{
    for (s32 i = 0; i < 16; ++i) {
        handlers[i] = NULL;
        enterHandlers[i] = NULL;
        leaveHandlers[i] = NULL;
    }
    handlers[0] = &Obj55c89c::confirm;
    handlers[1] = &Obj55c89c::FUN_004a2404;
    handlers[2] = &Obj55c89c::FUN_004a2064;
    handlers[3] = &Obj55c89c::FUN_004a39bc;
    handlers[4] = &Obj55c89c::shopPurchaseConfirmSelected;
    handlers[5] = &Obj55c89c::itemMenuDispatchSelectedEntry;
    handlers[6] = &Obj55c89c::screen4AFinish;
    handlers[7] = &Obj55c89c::FUN_004a40f4;
    handlers[8] = &Obj55c89c::FUN_004a38bc;
    handlers[9] = &Obj55c89c::demonScreenConfirmSaveRefresh;
    handlers[10] = &Obj55c89c::uiAnimatedPageToggleStep;
    handlers[11] = &Obj55c89c::FUN_004a2064;
    handlers[12] = &Obj55c89c::FUN_004a15a0;
    handlers[13] = &Obj55c89c::uiCursorEnterModeNine;
    handlers[14] = &Obj55c89c::FUN_004a321c;
    leaveHandlers[1] = &Obj55c920::FUN_004a24a8;
    leaveHandlers[2] = &Obj55c920::FUN_004a24a8;
    leaveHandlers[3] = &Obj55c920::FUN_004a4098;
    leaveHandlers[4] = &Obj55c920::FUN_004a4098;
    leaveHandlers[5] = &Obj55c920::FUN_004a4098;
    leaveHandlers[6] = &Obj55c920::FUN_004a4090;
    leaveHandlers[7] = &Obj55c920::FUN_004a24a8;
    leaveHandlers[8] = &Obj55c920::FUN_004a4094;
    leaveHandlers[11] = &Obj55c920::FUN_004a24a8;
    leaveHandlers[12] = &Obj55c920::FUN_004a24a8;
    leaveHandlers[13] = &Obj55c920::FUN_004a24a8;
    leaveHandlers[9] = &Obj55c920::FUN_004a24a4;
    leaveHandlers[10] = &Obj55c920::FUN_004a24a8;
}
