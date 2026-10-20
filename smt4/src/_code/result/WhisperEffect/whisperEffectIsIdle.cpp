/* Returns nonzero while no whisper effect is running. */
#include "common.h"
#include "result/WhisperEffect.h"

extern "C" {

extern WhisperEffect *g_whisperEffect;

u8 whisperEffectIsIdle(void)
{
    return g_whisperEffect == NULL;
}

} /* extern "C" */
