/* NON_MATCHING: compiler shrink-wraps the push/pop around the conditional call. */
#include "common.h"
extern "C" {
extern struct { u8 unk00[0x0D]; u8 active; } g_flagBlock;
void FUN_002f8554(void *object);
/* Applies the operation only while the online flag block is active. */
void FUN_002fd0f4(void *object) {
    if (g_flagBlock.active != 0)
        FUN_002f8554(object);
}
}
