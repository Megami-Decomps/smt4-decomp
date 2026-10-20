#include "shard/Sys43e188.h"

extern "C" {

u8 FUN_00290e78(void)
{
    s8 value = 0;

    if (DAT_0043e188.target != NULL) {
        value = DAT_0043e188.target->unk08;
    }
    return DAT_0043e188.target == NULL || value == 0;
}

} /* extern "C" */
