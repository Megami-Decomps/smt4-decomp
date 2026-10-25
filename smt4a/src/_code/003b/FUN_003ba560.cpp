/* NON_MATCHING: compiler hoists the shared clamp callback into r8 and predicates its stores; retail loads it separately inside each non-null track branch. */
#include "classes/Obj55b87c.h"
#include <stddef.h>

struct ModelLightBinding {
    u32 unk00;
    Obj55b87c *track;
    void *model;
    u32 value;
};
typedef char ModelLightBindingLayoutCheck[offsetof(ModelLightBinding, track) == 4 &&
    offsetof(ModelLightBinding, model) == 8 && offsetof(ModelLightBinding, value) == 0xc ? 1 : -1];

extern "C" {
u32 asdModelGetSlotArray0(s32 slot);
void FUN_0032c518(void *model, s32 slot);
void FUN_0018e9d8(u32 node, u32 value);
void settings5BAddFlags(u32 flags);
void effApplyModelLight(s32 slot);
}

static __inline void modelLightResetClamp(Obj55b87c *track)
{
    if (track != NULL) {
        track->enabled = 1;
        track->clamp = mathClampFloat;
    }
}

// Attach the model to one of the two render slots and restore its normal clamp policy.
extern "C" void FUN_003ba560(ModelLightBinding *binding, s32 slot)
{
    u32 node = asdModelGetSlotArray0(slot);
    FUN_0032c518(binding->model, slot);
    if (slot != 0) {
        if (slot != 1)
            return;
        FUN_0018e9d8(node, binding->value);
        settings5BAddFlags(2);
        modelLightResetClamp(binding->track);
        effApplyModelLight(1);
    } else {
        FUN_0018e9d8(node, binding->value);
        settings5BAddFlags(1);
        modelLightResetClamp(binding->track);
        effApplyModelLight(0);
    }
}
