#include "common.h"

extern "C" {

typedef struct ResultItem {
    /* 0x00 */ u8 unk00[8];
} ResultItem;

typedef struct BtlResultOwner {
    /* 0x000 */ u32 id;
    /* 0x004 */ u32 job;
    /* 0x008 */ u8 unk008[0x1b0 - 0x8];
    /* 0x1B0 */ u8 panel[0x1f0 - 0x1b0];
    /* 0x1F0 */ u8 list[0x22c - 0x1f0];
    /* 0x22C */ ResultItem items[(0x42c - 0x22c) / 8];
    /* 0x42C */ s32 itemCount;
} BtlResultOwner;

extern void *g_btlUiBlock;

u32 taskCreateDraw(const char *name, s32 priority, s32 a, s32 b, void (*update)(u32), void (*draw)(u32), void *owner, u32 id);
void cleanupCompletionCallback(u32 job);
void jobStopChild(u32 job);
void FUN_002c52d8(void);
void FUN_002ed428(void *panel);
void FUN_0031e6f4(void *list);
void FUN_00331c60(ResultItem *item);
void btlUiPanelStart(void *block);
void FUN_004ac044(void *block);

/* Starts the battle result job, resets its panel, list and items, and starts the battle UI panel. */
void btlResultTaskStart(BtlResultOwner *owner)
{
    s32 i;

    owner->job = taskCreateDraw("btlResult Calc", 4, 0, 0, cleanupCompletionCallback, jobStopChild, owner, owner->id);
    FUN_002c52d8();
    FUN_002ed428(owner->panel);
    FUN_0031e6f4(owner->list);
    for (i = 0; i < owner->itemCount; i++) {
        FUN_00331c60(&owner->items[i]);
    }
    owner->itemCount = 0;
    btlUiPanelStart(g_btlUiBlock);
    FUN_004ac044(g_btlUiBlock);
}

} /* extern "C" */
