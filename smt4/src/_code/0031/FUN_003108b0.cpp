/* NON_MATCHING: readable rebuild via gfx/MaterialPairScan.h; retail keeps the reference count and the owner on the
 * stack, reloads the model chain each pass, hoists the 0x274 entry offset and loads "dami" pc-relative at the call
 * (written in place instead of through the helper it is 163 lines off, with the helper 177). */
#include "gfx/MaterialPairScan.h"

extern "C" {

/* Collects the shapes and materials of every damage ("dami") material the model uses. */
void FUN_003108b0(DamageMaterialSets *sets, DamageOwner *owner)
{
    collectMaterialPairs(sets, owner, "dami");
}

} /* extern "C" */
