/* NON_MATCHING: readable rebuild via gfx/MaterialPairScan.h (same loop as FUN_003108b0 with a caller-supplied pattern);
 * retail keeps the reference count on the stack, hoists the 0x274 entry offset and allocates other registers. */
#include "camp/Unite/UniteEffectState.h"

extern "C" {

/* Collects the shapes and materials of every material whose name contains `pattern`. */
void uniteEffectCollectMaterialPairs(const char *pattern)
{
    collectMaterialPairs(&g_screenStateWork->materialSets,
                         reinterpret_cast<DamageOwner *>(g_screenStateWork->model), pattern);
}

} /* extern "C" */
