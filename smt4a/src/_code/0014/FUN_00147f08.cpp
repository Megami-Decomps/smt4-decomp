/* NON_MATCHING: delay validation and integer gains match; VFP load/arithmetic scheduling differs. */
#include "sound/SoundEffectDelay.h"
extern "C" void rt_memcpy_w(void *destination, const void *source, u32 size);

// Validate delay parameters and derive the fixed-point gains used by the effect.
extern "C" u32 FUN_00147f08(SoundEffectDelay *effect, const SoundEffectDelayParameters *parameters)
{
    if (!(0.0f <= parameters->damping && parameters->damping <= 1.0f &&
          0.0f <= parameters->feedback && parameters->feedback <= 1.0f))
        return 0;
    if (effect->initialized == 1) {
        if (parameters->time > effect->maximumTime)
            return 0;
        if (effect->surroundSupported == 0 && parameters->surround == 1)
            return 0;
    }

    effect->delayBlocks = parameters->time * 1000 / 4888;
    if (effect->delayBlocks == 0)
        effect->delayBlocks = 1;
    effect->channelCount = parameters->surround == 0 ? 2 : 4;
    effect->feedbackGain = (s32)(parameters->feedback * 128.0f);
    f32 damping = parameters->damping;
    if (damping > 0.95f)
        damping = 0.95f;
    effect->directGain = (s32)((1.0f - damping) * 128.0f);
    effect->dampingGain = (s32)(damping * 128.0f);
    rt_memcpy_w(&effect->parameters, parameters, 13);
    return 1;
}
