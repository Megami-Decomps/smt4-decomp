/* Runs FUN_0013bac4(mode, arg) between FUN_002bb378 and nn_applet_CTR_detail_CloseSession (lock / unlock) and returns its result. */
#include "common.h"

extern "C" {

void FUN_002bb378(void);
void nn_applet_CTR_detail_CloseSession(void);
u32 FUN_0013bac4(u32 mode, u32 arg);

u32 FUN_0012a74c(u32 mode, u32 arg)
{
    u32 result;

    FUN_002bb378();
    result = FUN_0013bac4(mode, arg);
    nn_applet_CTR_detail_CloseSession();
    return result;
}

}
