/* NON_MATCHING: only state-transition byte-store scheduling/register choices differ. */
#include "saveLoadUI/SaveLoadControllerA.h"
#include "gamedata/DataTable.h"

extern "C" {
extern void* g_handleRegistry;
extern SaveLoadUIBaseA g_saveLoadUIBase;
s32 objBStateAllowsAction(void);
void FUN_002f0384(s32 enabled);
void FUN_0041de6c(SaveLoadControllerA* controller);
void ptrListRemoveClearOwner(void* registry, u32 handle);
void FUN_0022e774(void);
void FUN_0019de98(void* color, u32 rgba);
void FUN_0041f020(SaveLoadControllerA* controller, s32 enabled);

// Exit to the suspended state or reset the idle save/load screen for another selection.
void FUN_0041eeec(SaveLoadControllerA* controller)
{
    if (objBStateAllowsAction() && controller->slotFlags[controller->selectedSlot]) {
        FUN_002f0384(1);
        controller->suspended = 1;
    }
    FUN_0041de6c(controller);
    if (g_saveLoadUIBase.unk01) {
        if (controller->resource != NULL) {
            ptrListRemoveClearOwner(g_handleRegistry, controller->resource->handle);
            if (controller->resource != NULL) {
                controller->resource->destroy();
                controller->resource = NULL;
            }
        }
        FUN_0022e774();
        u8 previous = controller->state;
        controller->frame = 0;
        controller->state = 16;
        controller->previousState = previous;
        controller->nextState = 12;
    } else if (!controller->busy) {
        s32 colorIndex = controller->colorIndex;
        void* section = dataTableGet(0x3D, 0);
        SaveLoadColorRecordA* colors = static_cast<SaveLoadColorRecordA*>(dataTableGetEntries(section));
        FUN_0019de98(colors[colorIndex].color, 0xF4F4F4FF);
        u8 previous = controller->state;
        controller->frame = 0;
        controller->state = 4;
        controller->previousState = previous;
        controller->nextState = 0;
        controller->pending = 0;
        controller->confirmed = 0;
        controller->canceled = 0;
        FUN_0041f020(controller, 1);
    }
}
}
