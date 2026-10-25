/* Destroy callback of the whisper effect: releases its five resources and clears the global. */
#include "common.h"
#include "result/WhisperEffect.h"
#include "AsdSDK/Source/Gfx/AsdTexManager/AsdTMTexTable.h"

extern "C" {

int asdTMTexTableReleaseNode(int type, int index);
int jobGetWork(void);

extern WhisperEffect *g_whisperEffect;

void whisperEffectDestroy(void)
{
    int i;

    jobGetWork();
    for (i = 0; i < 5; i++) {
        asdTMTexTableReleaseNode(0x37, i);
    }
    asdTMTexTableFreeEntry(0x37);
    g_whisperEffect = NULL;
}

} /* extern "C" */
