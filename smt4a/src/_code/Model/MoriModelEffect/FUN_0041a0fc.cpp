#include "shard/S1ModelEffect.h"

extern "C" {

void itemTableClear(ModelEffectList *list);
void FUN_0041a124(ModelEffects *effects, u32 modelId);

/* Select the model and rebuild its effect list. */
void FUN_0041a0fc(ModelEffects *effects, u32 modelId)
{
    effects->modelId = modelId;
    itemTableClear(&effects->list);
    FUN_0041a124(effects, modelId);
}

} /* extern "C" */
