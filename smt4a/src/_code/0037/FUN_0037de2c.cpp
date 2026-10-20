#include "common.h"

extern "C" {

extern s8 DAT_00588e14[2];

/* Returns the second byte of DAT_00588e14, sign-extended. */
int FUN_0037de2c(void)
{
    return DAT_00588e14[1];
}

} /* extern "C" */
