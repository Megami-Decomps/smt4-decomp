#include "common.h"

extern "C" {

typedef struct UiSub {
    /* 0x000 */ u8 unk000[0x39C];
    /* 0x39C */ void *bufferA;
    /* 0x3A0 */ u32 process;
    /* 0x3A4 */ void *bufferB;
    /* 0x3A8 */ void *bufferC;
} UiSub;

typedef struct UiObject {
    /* 0x0000 */ u8 unk0000[0x4000];
    /* 0x4000 */ UiSub sub;
} UiObject;

typedef struct UiHolder {
    /* 0x00 */ u32 unk00;
    /* 0x04 */ UiObject *object;
} UiHolder;

extern UiHolder g_engineCleanupOwner;

extern void scrScriptProcessDestroy(u32 process);
extern void asdMemFree(void *p);
extern void FUN_001695a0(void);
extern void dataTableFree(s32 table);
extern void asdTMTexTableReleaseNode(s32 table, s32 node);

/* Tears down the UI object: its script process and buffers, data tables 0x14/0x25 and texture nodes 0..2, then frees it. */
void FUN_00267bf0(void)
{
    UiObject *object = g_engineCleanupOwner.object;
    UiSub *sub;
    s32 i;

    if (object != NULL) {
        sub = &object->sub;
        scrScriptProcessDestroy(sub->process);
        asdMemFree(sub->bufferA);
        asdMemFree(sub->bufferB);
        FUN_001695a0();
        asdMemFree(sub->bufferC);
        dataTableFree(0x14);
        dataTableFree(0x25);
        for (i = 0; i < 3; i++) {
            asdTMTexTableReleaseNode(0x1D, i);
        }
        asdMemFree(g_engineCleanupOwner.object);
        g_engineCleanupOwner.object = NULL;
    }
}

} /* extern "C" */
