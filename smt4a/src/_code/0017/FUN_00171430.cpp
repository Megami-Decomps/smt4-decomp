/* Runs FUN_0018bc7c(mode, arg) between nn_applet_CTR_detail_OpenSession and nn_applet_CTR_detail_CloseSession (lock / unlock) and returns its result. */
#include "common.h"

extern "C" {

void nn_applet_CTR_detail_OpenSession(void);
void nn_applet_CTR_detail_CloseSession(void);
u32 FUN_0018bc7c(u32 mode, u32 arg);

u32 FUN_00171430(u32 mode, u32 arg)
{
    u32 result;

    nn_applet_CTR_detail_OpenSession();
    result = FUN_0018bc7c(mode, arg);
    nn_applet_CTR_detail_CloseSession();
    return result;
}

}
