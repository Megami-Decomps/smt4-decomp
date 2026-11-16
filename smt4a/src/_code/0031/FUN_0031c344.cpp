#include "common.h"
extern "C" {
struct Object { u8 unk00[0x5F0]; s32 state; };
void FUN_00387604(void);
extern const Object *g_bustupCutAnim;

/* 1 while the bust-up cut animation exists and is in state 1; without one, runs FUN_00387604 and returns 0. */
s32 FUN_0031c344(void)
{
    if (g_bustupCutAnim == NULL) {
        FUN_00387604();
    } else if (g_bustupCutAnim->state == 1) {
        return 1;
    }
    return 0;
}
}
