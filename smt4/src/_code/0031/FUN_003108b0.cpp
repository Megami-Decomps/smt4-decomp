/* NON_MATCHING: readable rebuild via gfx/MaterialPairScan.h; retail keeps the owner on the stack, reloads the model chain each pass and resolves the self-relative tables with post-indexed loads (`ldr r,[r,#N]!` then add/mov0); armcc here recomputes the slot addresses and keeps a different register assignment. */
#include "gfx/MaterialPairScan.h"

extern "C" {

/* Collects the shapes and materials of every damage ("dami") material the model uses. */
void FUN_003108b0(DamageMaterialSets *sets, DamageOwner *owner)
{
    collectMaterialPairs(sets, owner, "dami");
}

} /* extern "C" */
