#include "common.h"
#include "gfx/VectorScratch.h"

extern "C" {

void gfxQuaternionFromMatrix(u32 value);
void effectTimelinePartApplyRotation(void *object, const EffectEditorWords *parameters);

void engineApplyGlobalParameters(void *object, u32 value)
{
    gfxQuaternionFromMatrix(value);
    EffectEditorWords parameters = g_vectorScratch.first.words;
    effectTimelinePartApplyRotation(object, &parameters);
}

} /* extern "C" */
