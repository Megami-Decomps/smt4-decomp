/* NON_MATCHING: suspended transition matches; idle transition's frame/state/previousState stores remain reordered. */
#include "saveLoadUI/SaveLoadControllerA.h"
#include "gamedata/DataTable.h"
#include "network/DataStore/DataStoreMain.h"

extern "C" {
extern void* g_handleRegistry;
extern SaveLoadUIBaseA g_saveLoadUIBase;
void FUN_002f0384(s32 enabled);
void FUN_0041de6c(SaveLoadControllerA* controller);
void ptrListRemoveClearOwner(void* registry, u32 handle);
void FUN_0022e774(void);
void buttonHelpSetText(void* color, u32 rgba);
void FUN_0041f020(SaveLoadControllerA* controller, s32 enabled);

static inline void saveLoadTransition(SaveLoadControllerA *controller, u8 state, u8 nextState)
{
    controller->previousState = controller->state;
    controller->state = state;
    controller->frame = 0;
    controller->nextState = nextState;
}

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
        saveLoadTransition(controller, 16, 12);
    } else if (!controller->busy) {
        s32 colorIndex = controller->colorIndex;
        void* section = dataTableGet(0x3D, 0);
        SaveLoadColorRecordA* colors = static_cast<SaveLoadColorRecordA*>(dataTableGetEntries(section));
        buttonHelpSetText(colors[colorIndex].color, 0xF4F4F4FF);
        saveLoadTransition(controller, 4, 0);
        controller->pending = 0;
        controller->confirmed = 0;
        controller->canceled = 0;
        FUN_0041f020(controller, 1);
    }
}
}
