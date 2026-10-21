/* NON_MATCHING: compiler uses separate field bases and retains the target instead of retail's paired load/reload sequence. */
#include "shard/Shard0034.h"

extern "C" {
BtlStateB *btlGetMainState(void);

// Bring the current value within one of the target, in steps of two.
u32 FUN_0038d238(void)
{
    BtlStateB *battle = btlGetMainState();
    s32 target = battle->unk4E58;
    s32 current = battle->unk4E5C;
    if (target != current) {
        current -= (current - target) & ~1u;
        battle->unk4E5C = current;
    }
    target = battle->unk4E58;
    if (target != current)
        battle->unk4E5C = current - ((current - target) & ~1u);
    return 1;
}
}
