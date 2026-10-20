/* NON_MATCHING: register choice in the last call only: retail forms the &a address in r5 (keeping r4), built reuses r4 */
/* Looks up the three UI parameter sets 0x573-0x575 and applies each to `target` through its own setter. */
#include "common.h"

extern "C" {

extern void FUN_001b3f7c(void);
extern void FUN_0049277c(s32 group, s32 id, s32 *a, s32 *b, s32 *c, s32 *d);
extern void FUN_004d091c(u32 target, s32 a, s32 b, s32 c, s32 d);
extern void FUN_004d09b8(u32 target, s32 a, s32 b, s32 c, s32 d);
extern void FUN_004d0a98(u32 target, s32 a, s32 b, s32 c, s32 d);

void FUN_004a6a50(u32 target)
{
    s32 a;
    s32 b;
    s32 c;
    s32 d;

    FUN_001b3f7c();
    FUN_0049277c(0x14, 0x573, &a, &b, &c, &d);
    FUN_004d09b8(target, a, b, c, d);
    FUN_0049277c(0x14, 0x574, &a, &b, &c, &d);
    FUN_004d0a98(target, a, b, c, d);
    FUN_0049277c(0x14, 0x575, &a, &b, &c, &d);
    FUN_004d091c(target, a, b, c, d);
}

}
