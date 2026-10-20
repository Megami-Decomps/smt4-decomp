#include "common.h"

extern "C" {

extern u16 *DAT_0043dcf0;

void FUN_0024aa74(void)
{
    u16 *p = DAT_0043dcf0;

    if (p != NULL) {
        p[0x1e] = 0;
        p[0x20] = 0xffff;
        p[0x1f] = 0;
    }
}

} /* extern "C" */
