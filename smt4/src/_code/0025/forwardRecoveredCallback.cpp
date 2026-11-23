#include "common.h"
#include "shard/W6_W6Match3_ForwardEffect.h"
#include "shard/W6_W6Match5_DevilSort.h"

/* Submits the six default float parameters (a tail call of submitDefaultFloatParameters, which takes no argument). */
extern "C" void forwardRecoveredCallback(void)
{
    submitDefaultFloatParameters();
}
