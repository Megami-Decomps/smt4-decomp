#include "shard/W5_W5Match2_EffectBehaviorQuery.h"

extern "C" {
extern EffectBehaviorEntry DAT_00473590[];

/* Invoke the selected behavior query when that callback exists. */
s32 effectQuerySelectedBehavior(const EffectBehaviorArgument *argument)
{
    if (DAT_00473590[argument->index].query == NULL) {
        return 0;
    }
    return DAT_00473590[argument->index].query(argument);
}
}
