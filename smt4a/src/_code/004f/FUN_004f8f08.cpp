/* NON_MATCHING: retail does the flags read-modify-write with one base register and a #1612 displacement; built forms base+1612 in a separate register for the store */
#include "common.h"

extern "C" {

typedef struct BtlCamera {
    /* 0x000 */ u8 unk000[0x64C];
    /* 0x64C */ u32 flags;
} BtlCamera;

typedef struct BtlStageWork {
    /* 0x0000 */ u8 unk0000[0x3050];
    /* 0x3050 */ u32 pending;
} BtlStageWork;

extern BtlCamera *g_btlCamera;
extern void keyedRecordsFreeAll(void);
extern void textureCacheReleaseAll(void);

/* Clears the stage's pending word, runs the two camera resets and drops camera flag 0x08000000. */
void FUN_004f8f08(BtlStageWork *work)
{
    work->pending = 0;
    keyedRecordsFreeAll();
    textureCacheReleaseAll();
    if (g_btlCamera != NULL) {
        g_btlCamera->flags &= ~0x08000000;
    }
}

} /* extern "C" */
