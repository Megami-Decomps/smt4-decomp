/* NON_MATCHING: readable rebuild via gfx/MaterialPairScan.h (same loop as FUN_003108b0 with a caller-supplied pattern); relative-pointer walks and register assignment differ from retail. */
#include "gfx/MaterialPairScan.h"

/* The screen state: the model owner and the sets collected from its materials. */
struct ScreenStateWork {
    /* 0x00 */ u8 unk00[0x84];
    /* 0x84 */ DamageOwner *owner;
    /* 0x88 */ u8 unk88[0xC];
    /* 0x94 */ DamageMaterialSets sets;
};

extern "C" {
extern ScreenStateWork *g_screenStateWork;

/* Collects the shapes and materials of every material whose name contains `pattern`. */
void FUN_00258408(const char *pattern)
{
    collectMaterialPairs(&g_screenStateWork->sets, g_screenStateWork->owner, pattern);
}

} /* extern "C" */
