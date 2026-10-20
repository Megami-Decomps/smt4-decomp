#include "common.h"

extern "C" {

extern u32 *DAT_0043e0d0;
extern int jobIsValid(u32 job);

u8 FUN_002b8804(void)
{
    if (DAT_0043e0d0 == NULL) {
        return 0;
    }
    return jobIsValid(*DAT_0043e0d0) != 0;
}

} /* extern "C" */
