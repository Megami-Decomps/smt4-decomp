#include "common.h"

extern "C" {

void FUN_0042fbc4(void);
s32 cecInitializeOnce(void);

/* Initialize the CEC (StreetPass) support: runs the shared setup, then the service init. */
s32 FUN_0042d368(void)
{
    FUN_0042fbc4();
    return cecInitializeOnce();
}

} /* extern "C" */
