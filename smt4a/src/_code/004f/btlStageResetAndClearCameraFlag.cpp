#include "common.h"
#include "battle/BattleHelpers_Smt4a.h"
#include "battle/BtlGlobals.h"

extern "C" {


typedef struct BtlStageWork {
    /* 0x0000 */ u8 unk0000[0x3050];
    /* 0x3050 */ u32 pending;
} BtlStageWork;

extern void keyedRecordsFreeAll(void);
extern void textureCacheReleaseAll(void);

/* Clears the stage's pending word, runs the two camera resets and drops camera flag 0x08000000. */
static __inline void btlCameraClearFlags(BtlCameraA *camera, u32 mask)
{
    camera->flags &= ~mask;
}

void btlStageResetAndClearCameraFlag(BtlStageWork *work)
{
    work->pending = 0;
    keyedRecordsFreeAll();
    textureCacheReleaseAll();
    if (g_btlCamera != NULL) {
        btlCameraClearFlags(g_btlCamera, 0x08000000);
    }
}

} /* extern "C" */
