#include "common.h"

extern "C" {

int nn_applet_CTR_detail_CloseSession(void);
int FUN_002bb378(void);
extern u32 FUN_00150030(u32 a, u32 b);

/* Runs FUN_00150030 between FUN_002bb378 and nn_applet_CTR_detail_CloseSession (lock/unlock). */
u32 FUN_001482cc(u32 a, u32 b)
{
    u32 result;

    FUN_002bb378();
    result = FUN_00150030(a, b);
    nn_applet_CTR_detail_CloseSession();
    return result;
}

} /* extern "C" */
