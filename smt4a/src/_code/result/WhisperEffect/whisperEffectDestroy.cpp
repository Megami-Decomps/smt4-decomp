/* NON_MATCHING: the retail keeps the zero stored to the global in a register (r5) across the free call */
/* Destroy callback of the whisper effect: releases its five resources and frees the effect. */
#include "common.h"
#include "result/WhisperEffect.h"
#include "AsdSDK/AsdMemUtil.h"
#include "AsdSDK/Source/Gfx/AsdTexManager/AsdTMTexTable.h"

extern "C" {

int jobGetWork(void);
int asdTMTexTableReleaseNode(int type, int index);

extern WhisperEffect *g_whisperEffect;

void whisperEffectDestroy(void)
{
    int i;

    jobGetWork();
    for (i = 0; i < 5; i++) {
        asdTMTexTableReleaseNode(0x2c, i);
    }
    asdTMTexTableFreeEntry(0x2c);
    if (g_whisperEffect != NULL) {
        asdOperatorDelete(g_whisperEffect);
        g_whisperEffect = NULL;
    }
}

} /* extern "C" */
