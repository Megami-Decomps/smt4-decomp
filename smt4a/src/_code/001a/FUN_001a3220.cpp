#include "common.h"

extern "C" {

void nn_applet_CTR_detail_OpenSession(void);
void nn_applet_CTR_detail_CloseSession(void);
u32 FUN_001b0508(u32 a, u32 b);

/* Calls FUN_001b0508 between nn_applet_CTR_detail_OpenSession and nn_applet_CTR_detail_CloseSession (a lock/unlock pair); returns its result. */
u32 FUN_001a3220(u32 a, u32 b)
{
    u32 result;

    nn_applet_CTR_detail_OpenSession();
    result = FUN_001b0508(a, b);
    nn_applet_CTR_detail_CloseSession();
    return result;
}

} /* extern "C" */
