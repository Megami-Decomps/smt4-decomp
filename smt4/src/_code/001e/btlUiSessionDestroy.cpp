/* NON_MATCHING: retail loads g_btlUi's address before uiFadeRelease (owner r5, g_btlUi r6, ui r4); here it is loaded after the call. A local pointer to g_btlUi hoists the load but renumbers owner/global/ui to r6/r4/r5. */
#include "ui/UiSpriteApi.h"
#include "common.h"
#include "AsdSDK/AsdMemAlloc.h"
#include "battle/BtlUiGlobal.h"

extern "C" {

/* The battle UI job's work: the job it runs on. */
typedef struct BtlUiJobWork {
    /* 0x00 */ u8 unk00[0x54];
    /* 0x54 */ u32 job;
} BtlUiJobWork;


int FUN_00287188(BtlUiObjC *object);
int uiFadeRelease(void);
int asdMemFreeNonNull(u32 handle);
int jobStop(u32 job, int delay);

/* Tears down the battle UI: releases its widget and panel memory, frees the UI block, then stops the owner's job. */
void btlUiSessionDestroy(BtlUiJobWork *owner)
{
    uiFadeRelease();
    BtlUi *ui = g_btlUi.ui;
    FUN_00287188(&ui->objC);
    asdMemFreeNonNull(ui->panelState.unk20);
    ui->panelState.unk20 = 0;
    if (g_btlUi.ui != NULL) {
        asdMemFree(g_btlUi.ui);
        g_btlUi.ui = NULL;
    }
    jobStop(owner->job, 0);
}

} /* extern "C" */
