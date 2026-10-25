/* NON_MATCHING: enterMode's two values use exchanged registers; the mode and remembered-mode stores now have the retail order. */
#include "shard/SaveSlotHeaderWork.h"
#include "network/DataStore/DataStoreMain.h"

extern "C" {
extern void *g_handleRegistry;
s32 uiSpriteGetCompletionState(const UiAnimatedSprite *sprite);
void ptrListRemoveClearOwner(void *registry, u32 handle);
void FUN_0041e3a0(SaveSlotHeaderWork *work, s32 resetHeader);
void FUN_00420a2c(SaveSlotHeaderWork *work);
s32 FUN_0022e72c(void);
void FUN_0022e774(void);

/* Switches to another mode, remembering the one it leaves. */
static void enterMode(SaveSlotHeaderWork *work, u8 mode)
{
    u8 previousMode = work->mode;
    work->mode = mode;
    work->previousMode = previousMode;
}

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
void FUN_0041f110(SaveSlotHeaderWork *work)
{
    switch (work->step) {
    case 0:
        FUN_0041e3a0(work, 1);
        ++work->step;
        // Fall through to poll for the dismissal.
    case 1:
        FUN_00420a2c(work);
        if ((objBStateAllowsAction() || FUN_0022e72c()) && work->popupActive) {
            work->popupActive = 0;
            releaseRegisteredHandle(work->popup);
            FUN_0022e774();
            ++work->step;
        }
        return;
    case 2:
        FUN_00420a2c(work);
        if (uiSpriteGetCompletionState(&work->sprites[work->spriteCount]) == 0) {
            return;
        }
        enterMode(work, 6);
        work->step = 0;
        work->phase = 0;
        return;
    }
}
}
