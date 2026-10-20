#include "shard/Sys43e188.h"

extern "C" {

u8 FUN_00290e78(void)
{
    s8 value = 0;

    if (g_messageMain.target != NULL) {
        value = g_messageMain.target->unk08;
    }
    return g_messageMain.target == NULL || value == 0;
}

} /* extern "C" */
