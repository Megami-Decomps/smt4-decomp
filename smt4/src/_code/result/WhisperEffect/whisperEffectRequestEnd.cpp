/* Asks the running whisper effect to end; returns 1 when there is none to end. */
#include "common.h"
#include "result/WhisperEffect.h"

extern "C" {

int FUN_002893d8(WhisperEffect *fx);

extern WhisperEffect *g_whisperEffect;

u32 whisperEffectRequestEnd(void)
{
    if (g_whisperEffect == NULL) {
        return 1;
    }
    if (FUN_002893d8(g_whisperEffect) == 0) {
        g_whisperEffect->finished = 1;
    }
    return 0;
}

} /* extern "C" */
