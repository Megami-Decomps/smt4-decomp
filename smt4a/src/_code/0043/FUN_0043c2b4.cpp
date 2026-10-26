/* NON_MATCHING: mid-flow mov r0, r0 (nop) in a leaf with no lr save; not a removed call, cause unknown. */
#include "common.h"

extern "C" {
s32 nn_applet_CTR_detail_IsRegistered(u32 id);

void FUN_0043c2b4(void)
{
    nn_applet_CTR_detail_IsRegistered(0x407);
}
}
