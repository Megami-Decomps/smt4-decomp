#include "common.h"

extern "C" {

int asdFatalError(void);

extern int DAT_00471a68;

int FUN_002ad888(void)
{
    if (DAT_00471a68 == 0) {
        asdFatalError();
    }
    return DAT_00471a68;
}

} /* extern "C" */
