#include "common.h"

extern "C" {

typedef struct BtlStageGlobals {
    /* 0x0 */ u32 unk0;
    /* 0x4 */ void *stage;
} BtlStageGlobals;

extern BtlStageGlobals g_btlStage;

extern u32 jobGetWork(void);
extern s32 FUN_004d8d40(void *stage, u32 work);

/* Passes the current battle stage and job work to FUN_004d8d40; 0 when there is no stage. */
s32 btlStageRunWork(void)
{
    u32 work = jobGetWork();

    if (g_btlStage.stage != NULL) {
        return FUN_004d8d40(g_btlStage.stage, work);
    }
    return 0;
}

}
