#include "common.h"

extern "C" {

extern u8 DAT_00421e00;
extern const void **FUN_0037df5c(void);

void FUN_0037e730(void)
{
    const void **object = FUN_0037df5c();

    *object = &DAT_00421e00;
}

} /* extern "C" */
