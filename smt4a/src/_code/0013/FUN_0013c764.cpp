/* NON_MATCHING: addressing only: retail forms a base at JobWork+0xF00 for the 0xFF5/0xFFD flags and folds the 0x148C flag as (work+0x1400)+0x8C; built uses flat offsets */
#include "common.h"

extern "C" {

typedef struct JobWork {
    /* 0x000 */ u8 unk000[0xFF4];
    /* 0xFF4 */ u8 enabled;
    /* 0xFF5 */ u8 ready;
    /* 0xFF6 */ u8 unkFF6[7];
    /* 0xFFD */ u8 shown;
    /* 0xFFE */ u8 unkFFE[0x48E];
    /* 0x148C */ u8 busy;
    /* 0x148D */ u8 unk148D[3];
    /* 0x1490 */ s32 request;
} JobWork;

extern u32 g_renderCtx;

extern JobWork *jobGetWork(void);
extern void FUN_00157558(u32 ctx);
extern void FUN_00150d38(s32 arg);

s32 FUN_0013c764(void)
{
    JobWork *work = jobGetWork();

    if (work->enabled != 0 && work->ready != 0 && work->shown != 0 && work->request != 0 && work->busy == 0) {
        FUN_00157558(g_renderCtx);
        FUN_00150d38(1);
        return 0;
    }
    return 0;
}

} /* extern "C" */
