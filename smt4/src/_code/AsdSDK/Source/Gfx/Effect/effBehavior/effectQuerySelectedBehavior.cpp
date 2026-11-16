#include "shard/W5_W5Match2_EffectBehaviorQuery.h"

extern "C" {
extern EffectBehaviorEntry g_effBehaviorTable[];

/* Invoke the selected behavior query when that callback exists. */
s32 effectQuerySelectedBehavior(const EffectBehaviorArgument *argument)
{
    if (g_effBehaviorTable[argument->index].query == NULL) {
        return 0;
    }
    return g_effBehaviorTable[argument->index].query(argument);
}
}
