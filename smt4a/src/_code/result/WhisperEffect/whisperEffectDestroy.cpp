/* NON_MATCHING: the retail keeps the zero stored to the global in a register (r5) across the free call */
/* Destroy callback of the whisper effect: releases its five resources and frees the effect. */
#include "common.h"
#include "result/WhisperEffect.h"

extern "C" {

int jobGetWork(void);
int FUN_0019a7f4(int type, int index);
int asdTMTexTableFreeEntry(int type);
int FUN_002e3328(void *ptr);

extern WhisperEffect *g_whisperEffect;

void whisperEffectDestroy(void)
{
    int i;

    jobGetWork();
    for (i = 0; i < 5; i++) {
        FUN_0019a7f4(0x2c, i);
    }
    asdTMTexTableFreeEntry(0x2c);
    if (g_whisperEffect != NULL) {
        FUN_002e3328(g_whisperEffect);
        g_whisperEffect = NULL;
    }
}

} /* extern "C" */
