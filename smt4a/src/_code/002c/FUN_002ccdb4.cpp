/* NON_MATCHING: retail emits 'beq 30'; compiler emits 'movne r0, #0' at the first differing instruction. */
#include "common.h"
extern "C" {
s32 FUN_0022a030(u32 context, u32 value);
s32 FUN_004009d0(u32 value, u32 option);
s32 FUN_002ccdb4(u32 context, u32 value) {
    if (!FUN_0022a030(context, value)) return 0;
    return FUN_004009d0(value, 0) == 0;
}
}
