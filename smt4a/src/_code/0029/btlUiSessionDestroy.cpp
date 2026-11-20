/* NON_MATCHING: scheduling only: retail loads the g_btlUi address before calling campCommonBgRelease, built after */
/* Tears down the session: resets its sub-state, releases its handle, frees the session itself and notifies the owner's window. */
#include "common.h"
#include "battle/BtlUiGlobal.h"
#include "util/MemoryHelpers_VariantC.h"

extern "C" {

typedef struct Owner {
    /* 0x00 */ u8 unk00[0x78];
    /* 0x78 */ u32 window;
} Owner;

extern void jobStop(u32 window, s32 arg);
extern void asdOperatorDelete(u32 handle);
extern void partyReleasePreviewResources(void *subState);
extern void campCommonBgRelease(void);

void btlUiSessionDestroy(Owner *owner)
{
    BtlUiA *ui;

    campCommonBgRelease();
    ui = g_btlUi.ui;
    partyReleasePreviewResources(&ui->objC);
    asdOperatorDelete(ui->unk7488);
    ui->unk7488 = 0;
    if (g_btlUi.ui != NULL) {
        asdMemFree(g_btlUi.ui);
        g_btlUi.ui = NULL;
    }
    jobStop(owner->window, 0);
}

}
