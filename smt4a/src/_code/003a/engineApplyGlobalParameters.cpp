#include "common.h"
#include "gfx/VectorScratch.h"

extern "C" {

void FUN_002cf09c(u32 value);
void FUN_001acb48(void *object, const EffectEditorWords *parameters);

void engineApplyGlobalParameters(void *object, u32 value)
{
    FUN_002cf09c(value);
    EffectEditorWords parameters = g_vectorScratch.first.words;
    FUN_001acb48(object, &parameters);
}

} /* extern "C" */
