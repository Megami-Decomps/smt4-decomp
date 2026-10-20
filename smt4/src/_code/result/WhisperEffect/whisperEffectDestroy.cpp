/* Destroy callback of the whisper effect: releases its five resources and clears the global. */
#include "common.h"
#include "result/WhisperEffect.h"

extern "C" {

int asdTMTexTableFreeEntry(int type);
int FUN_002ae898(int type, int index);
int jobGetWork(void);

extern WhisperEffect *g_whisperEffect;

void whisperEffectDestroy(void)
{
    int i;

    jobGetWork();
    for (i = 0; i < 5; i++) {
        FUN_002ae898(0x37, i);
    }
    asdTMTexTableFreeEntry(0x37);
    g_whisperEffect = NULL;
}

} /* extern "C" */
