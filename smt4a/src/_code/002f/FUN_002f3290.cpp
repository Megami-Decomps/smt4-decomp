/* NON_MATCHING: compiler shrink-wraps the frame and addresses the selected object through a separate literal. */
#include "common.h"
extern "C" {
extern struct { u8 unk00[0x0D]; u8 active; u8 unk0E[0x86]; void *object; } g_flagBlock;
void FUN_002f8548(void *object);
/* Applies the operation to the active online object's handle. */
void FUN_002f3290(void) {
    if (g_flagBlock.active != 0)
        FUN_002f8548(g_flagBlock.object);
}
}
