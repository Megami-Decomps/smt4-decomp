#include "shard/Sys44e190.h"

extern "C" {

void FUN_002efed8(u8 value)
{
    if (g_statusDown != NULL) {
        g_statusDown->unk411 = value;
    }
}

} /* extern "C" */
