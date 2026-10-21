/* NON_MATCHING: compiler emits sxtb/sxth while retail uses pairs of shifts. */
#include "common.h"

/* Sign-extends a compact instruction's displacement according to its width flags. */
extern "C" s32 scrSignExtendOperand(s32 displacement, const u32 *instruction)
{
    u32 opcode = *instruction;
    if (opcode & 0x400) {
        return (s8)displacement;
    }
    if (opcode & 0x100) {
        return (s16)displacement;
    }
    return displacement;
}
