/* NON_MATCHING: VFP multiply operands are reversed. */
#include "common.h"
/* Applies the category's scale factor. */
extern "C" f32 FUN_004c0834(s32 category, f32 value) { return value * (category < 4 ? 1.2f : 1.1f); }
