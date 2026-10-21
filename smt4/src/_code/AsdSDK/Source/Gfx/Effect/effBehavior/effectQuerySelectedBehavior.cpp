/* NON_MATCHING: compiler swaps the callback-table base and selected index registers. */
#include "shard/W5_W5Match2_EffectBehaviorQuery.h"
extern "C" {
extern EffectBehaviorEntry DAT_00473590[];
/* Invoke the selected behavior query when that callback exists. */
s32 effectQuerySelectedBehavior(const EffectBehaviorArgument *argument) { EffectBehaviorQuery query=DAT_00473590[argument->index].query; return query!=NULL ? query(argument) : 0; }
}
