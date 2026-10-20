#include "common.h"

extern "C" {

void FUN_00358d24(void);
s32 FUN_0035778c(void);

/* Initialize the CEC (StreetPass) support: runs the shared setup, then the service init. */
s32 FUN_0035777c(void)
{
    FUN_00358d24();
    return FUN_0035778c();
}

} /* extern "C" */
