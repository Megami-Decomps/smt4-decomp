/* Marks the running whisper effect as finished. */
#include "common.h"
#include "result/WhisperEffect.h"

extern "C" {

extern WhisperEffect *g_whisperEffect;

void whisperEffectFinish(void)
{
    g_whisperEffect->finished = 1;
}

} /* extern "C" */
