#include "common.h"

extern "C" {

void FUN_00358d24(void);
s32 cecInitializeOnce(void);

/* Initialize the CEC (StreetPass) support: runs the shared setup, then the service init. */
s32 cecInitializeServices(void)
{
    FUN_00358d24();
    return cecInitializeOnce();
}

} /* extern "C" */
