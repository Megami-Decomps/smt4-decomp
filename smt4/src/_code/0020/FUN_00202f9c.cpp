/* NON_MATCHING: the global base pointer is held in r6 (retail: r4); otherwise identical. */
#include "common.h"

extern "C" {

typedef struct SceneState {
    /* 0x000 */ void *context;
    /* 0x004 */ u8 released;
    /* 0x005 */ u8 unk005[0x23B];
    /* 0x240 */ void *buffer240;
    /* 0x244 */ void *buffer244;
    /* 0x248 */ void *buffer248;
    /* 0x24C */ u8 unk24C[0x104];
    /* 0x350 */ void *buffer350;
    /* 0x354 */ u8 unk354[0xC];
    /* 0x360 */ u32 handle360;
    /* 0x364 */ u8 unk364[0x16];
    /* 0x37A */ u8 hasExtraTarget;
    /* 0x37B */ u8 unk37B[1];
    /* 0x37C */ void *buffer37C;
    /* 0x380 */ void *buffer380;
    /* 0x384 */ void *buffer384;
} SceneState;

typedef struct SceneGlobals {
    /* 0x00 */ u32 unk00;
    /* 0x04 */ SceneState *state;
} SceneGlobals;

extern SceneGlobals g_saveLoadUIFlags;

int FUN_002108c0(int arg0, u32 arg1);
int msgWindowReset(void);
int gameReleaseDataReference(void);
int messageMainSetEnabled(int arg);
int gameGlobalsSetSelected(int arg);
int FUN_0029ee6c(int arg0, int color);
int fileSlotFree(int arg);
int scrScriptProcessDestroy(void);
int asdMdlManagerDestroy(u32 handle);
int ifTouchRegionRemove(void);
int asdMemFree(void *block);
int jobStop(void *context, int arg);

/* Tears down the scene state: releases its buffers and handles, then frees the context. */
void FUN_00202f9c(void)
{
    SceneState *state = g_saveLoadUIFlags.state;
    SceneState *state2;
    u32 i;

    asdMdlManagerDestroy(state->handle360);
    state->handle360 = 0;
    if (state->hasExtraTarget != 0) {
        ifTouchRegionRemove();
        ifTouchRegionRemove();
    }
    FUN_0029ee6c(0, 0x323232ff);
    state2 = g_saveLoadUIFlags.state;
    i = 0;
    do {
        FUN_002108c0(0x36, i);
        i++;
    } while (i < 10);
    fileSlotFree(0x3d);
    msgWindowReset();
    if (state2->buffer248 != NULL) {
        scrScriptProcessDestroy();
        state2->buffer248 = NULL;
    }
    if (state2->buffer240 != NULL) {
        asdMemFree(state2->buffer240);
        state2->buffer240 = NULL;
    }
    if (state2->buffer244 != NULL) {
        asdMemFree(state2->buffer244);
        state2->buffer244 = NULL;
    }
    gameGlobalsSetSelected(0);
    gameReleaseDataReference();
    messageMainSetEnabled(1);
    state->released = 1;
    if (state->buffer350 != NULL) {
        asdMemFree(state->buffer350);
        state->buffer350 = NULL;
    }
    asdMemFree(state->buffer37C);
    asdMemFree(state->buffer380);
    asdMemFree(state->buffer384);
    jobStop(state->context, 0);
}

} /* extern "C" */
