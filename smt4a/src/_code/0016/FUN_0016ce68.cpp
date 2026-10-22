/* NON_MATCHING: instructions and relocations agree except that armcc reverses the two literal-pool entries (the work pointer and command 0x207). */
#include "nn/Result.h"
#include "shard/S1NnOs.h"

extern "C" {
extern AppletParameterState DAT_0062d2d8;
s32 FUN_0016f9bc(AppletParameterState *state, u32 command);
s32 FUN_0018a8ec(u32 command);
void FUN_0016e800(s32 result, u32 address);
}

/* The diagnostic address identifies the result check, even on success. */
static __inline void checkAppletResult(s32 result, u32 address)
{
    if (nnResultIsFailure(result)) {
        FUN_0016e800(result, address);
    }
}

/* Register the applet parameter and apply command 0x207, reporting SDK failures. */
extern "C" void FUN_0016ce68(u32 parameter)
{
    DAT_0062d2d8.parameter = parameter;
    s32 result = FUN_0016f9bc(&DAT_0062d2d8, 0x207);
    checkAppletResult(result, __current_pc());
    result = FUN_0018a8ec(0x207);
    checkAppletResult(result, __current_pc());
}
