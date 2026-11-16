#include "shard/S1ModelEffect.h"

extern "C" {

void itemTableClear(ModelEffectList *list);
void modelEffectsBuildListForModel(ModelEffects *effects, u32 modelId);

/* Select the model and rebuild its effect list. */
void modelEffectsSelect(ModelEffects *effects, u32 modelId)
{
    effects->modelId = modelId;
    itemTableClear(&effects->list);
    modelEffectsBuildListForModel(effects, modelId);
}

} /* extern "C" */
