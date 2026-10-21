/* NON_MATCHING: retail array destruction or constructor lifetime code generation differs. */
#include "common.h"

extern "C" {
void FUN_00354f50(u32 id, u32 mode, u32 reserved, u32 first, u32 second, u32 third, u32 fourth);
/* Forwards parameters with the reserved argument cleared. */
void FUN_003550f4(u32 id, u32 mode, u32 first, u32 second, u32 third, u32 fourth)
{
    FUN_00354f50(id, mode, 0, first, second, third, fourth);
}
}
