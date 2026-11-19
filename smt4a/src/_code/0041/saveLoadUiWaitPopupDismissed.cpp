#include "shard/W6_W6Match8_AnimatedSprite.h"
#include "shard/SaveSlotHeaderWork.h"
#include "network/DataStore/DataStoreMain.h"

extern "C" {
extern void *g_handleRegistry;
void ptrListRemoveClearOwner(void *registry, u32 handle);
void FUN_0041e3a0(SaveSlotHeaderWork *work, s32 resetHeader);
void FUN_0022e774(void);

static void releaseRegisteredHandle(RegisteredHandle *&handle)
{
    if (handle != NULL) {
        ptrListRemoveClearOwner(g_handleRegistry, handle->id);
        if (handle != NULL) {
            delete handle;
            handle = NULL;
        }
    }
}

// Wait for the player to dismiss the popup, then (state 2) hand control back once the last sprite finishes.
void saveLoadUiWaitPopupDismissed(SaveSlotHeaderWork *work)
{
    switch (work->step) {
    case 0:
        FUN_0041e3a0(work, 1);
        ++work->step;
        // Fall through to poll for the dismissal.
    case 1:
        saveLoadUiAdvanceSprites(work);
        if ((objBStateAllowsAction() || FUN_0022e72c()) && work->popupActive) {
            work->popupActive = 0;
            releaseRegisteredHandle(work->popup);
            FUN_0022e774();
            ++work->step;
        }
        return;
    case 2:
        saveLoadUiAdvanceSprites(work);
        if (uiSpriteGetCompletionState(&work->slotSprites[work->spriteCount - 1]) == 0) {
            return;
        }
        saveLoadUiChangeMode(work, 6, 0);
        return;
    }
}
}
