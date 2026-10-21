/* NON_MATCHING: retail emits 'beq 24'; compiler emits 'beq 20' at the first differing instruction. */
#include "common.h"
extern "C" {
struct Object { u8 unk00[0x5F0]; s32 state; };
void FUN_00387604(void);
s32 FUN_0031c348(const Object *const *object) {
    if (*object) return (*object)->state == 1;
    FUN_00387604();
    return 0;
}
}
