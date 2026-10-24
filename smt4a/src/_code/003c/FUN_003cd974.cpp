/* NON_MATCHING: only the VFP registers holding the first and fifth argument differ (retail keeps the first in s20, the fifth in s19). */
#include "common.h"

extern "C" {

f32 scriptReadStackValueAsFloat(s32 index);
void lmapSetSecondTransform(f32 a, f32 b, f32 c, f32 d, f32 e, f32 f);

/* Script command: sets the second map transform from six float arguments. */
u32 FUN_003cd974(void)
{
    f32 a = scriptReadStackValueAsFloat(0);
    f32 b = scriptReadStackValueAsFloat(1);
    f32 c = scriptReadStackValueAsFloat(2);
    f32 d = scriptReadStackValueAsFloat(3);
    f32 e = scriptReadStackValueAsFloat(4);
    f32 f = scriptReadStackValueAsFloat(5);
    lmapSetSecondTransform(a, b, c, d, e, f);
    return 1;
}

} /* extern "C" */
