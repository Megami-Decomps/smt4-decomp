/* NON_MATCHING: readable rebuild via gfx/MaterialPairScan.h (same loop as FUN_003108b0 with a caller-supplied pattern); relative-pointer walks and register assignment differ from retail. */
#include "camp/Unite/UniteEffectState.h"

extern "C" {

/* Collects the shapes and materials of every material whose name contains `pattern`. */
void FUN_00258408(const char *pattern)
{
    collectMaterialPairs(&g_screenStateWork->materialSets,
                         reinterpret_cast<DamageOwner *>(g_screenStateWork->model), pattern);
}

} /* extern "C" */
