#include "common.h"

struct CellListController {
    void *vtable; // 0x00
    s32 state; // 0x04
    s32 elapsed; // 0x08
    u32 unk0c;
    s32 previousState; // 0x10
    u32 unk14;
    u8 mode; // 0x18
    u8 unk19[0xb27];
    s32 listKind; // 0xb40
};
extern "C" void FUN_00499d14(CellListController *controller);
extern "C" void FUN_004964e0(CellListController *controller, s32 refresh);
extern "C" void FUN_00496a0c(CellListController *controller, s32 refresh);

static __inline void cellListEnterState(CellListController *controller, s32 next)
{
    controller->elapsed = 0;
    controller->previousState = controller->state;
    controller->state = next;
}

// Enter list state sixteen and dispatch the requested list refresh.
extern "C" void FUN_004969a8(CellListController *controller)
{
    cellListEnterState(controller, 16);
    if (controller->listKind != 8) {
        if (controller->mode == 1)
            controller->listKind = 7;
        else
            FUN_00499d14(controller);
        FUN_004964e0(controller, 1);
        return;
    }
    FUN_00496a0c(controller, 1);
}
