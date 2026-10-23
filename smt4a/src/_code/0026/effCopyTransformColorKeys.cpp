#include "AsdSDK/Source/Gfx/Effect/EffectTransformCopy.h"

// Copy four transform/color keys and the source's low mode bits.
extern "C" void effCopyTransformColorKeys(EffectTransformCopyState *destination,
                            const EffectTransformCopyState *source)
{
    effectCopyTransformKeys(destination, source);
}
