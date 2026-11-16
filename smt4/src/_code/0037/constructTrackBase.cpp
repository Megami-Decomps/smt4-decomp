#include "common.h"

extern "C" {

extern u8 DAT_00421e00;
extern const void **FUN_0037df5c(void);

void constructTrackBase(void)
{
    const void **object = FUN_0037df5c();

    *object = &DAT_00421e00;
}

} /* extern "C" */
