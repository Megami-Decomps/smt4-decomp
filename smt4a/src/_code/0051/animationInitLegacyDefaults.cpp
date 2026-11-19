/* NON_MATCHING: fdiff agrees on the instructions, but retail puts a 0x50-byte gap before the second
 * slot array. The native object's .bss does not yet reproduce that layout. */
#include "gfx/AnimationTemplate.h"

extern "C" {
AnimationLegacyDefaults g_legacyAnimationDefaults(0.0f, 0.0f, 0.0f);
AnimationSlot g_animationSlotsA[150];
AnimationSlot g_animationSlotsB[150];
}
