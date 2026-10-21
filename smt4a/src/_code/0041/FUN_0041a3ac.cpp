/* NON_MATCHING: reset stores are rescheduled and the index/first-count pair does not combine into retail's STRD. */
#include "shard/S1ModelEffect.h"

extern "C" {
extern const u8 _ZTV9Obj557d58[];
void rt_aeabi_memclr(void *, u32);
void FUN_0041a270(ModelEffects *);

ModelEffects *FUN_0041a3ac(ModelEffects *effects, ModelEffectTable *table, u32 argument)
{
    effects->vtable = _ZTV9Obj557d58 + 8;
    effects->table = table;
    effects->setup.argument = argument;
    effects->setup.count = table->count;
    effects->modelId = 0xffffffff;
    effects->filtered.count = 0;
    effects->filtered.items = NULL;
    effects->list.count = 0;
    effects->list.items = NULL;
    rt_aeabi_memclr(&effects->filtered, sizeof(effects->filtered));
    rt_aeabi_memclr(&effects->list, sizeof(effects->list));
    FUN_0041a270(effects);
    return effects;
}
}
