/* NON_MATCHING: register allocation only (ip/r2/r3 usage in the loop) */
/* Copies the two default words of table DAT_00536bcc into `dest`. */
#include "common.h"

extern "C" {

extern u32 DAT_00536bcc[2];

void FUN_003e4140(u32 *dest)
{
    u32 i = 0;

    do {
        u8 index = i;
        u32 *slot = &dest[i];

        i++;
        *slot = DAT_00536bcc[index];
    } while ((s32)i < 2);
}

}
