/* NON_MATCHING: retail saves LR before the null check and has two post-call NOPs; built shrink-wraps the frame. */
#include "common.h"
extern "C" {
struct Object { u8 unk00[0x5F0]; s32 state; };
void FUN_00387604(void);
extern const Object *g_bustupCutAnim;
s32 FUN_0031c344(void) {
    if (g_bustupCutAnim) return g_bustupCutAnim->state == 1;
    FUN_00387604();
    return 0;
}
}
