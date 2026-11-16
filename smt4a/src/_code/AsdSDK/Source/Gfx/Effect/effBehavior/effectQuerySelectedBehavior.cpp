#include "shard/W5_W5Match2_EffectBehaviorQuery.h"

extern "C" {
extern EffectBehaviorEntry DAT_005c1d60[];

/* Invoke the selected behavior query when that callback exists. */
s32 effectQuerySelectedBehavior(const EffectBehaviorArgument *argument)
{
    if (DAT_005c1d60[argument->index].query == NULL) {
        return 0;
    }
    return DAT_005c1d60[argument->index].query(argument);
}
}
