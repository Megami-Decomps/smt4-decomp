#include "shard/Shard003B.h"

extern "C" {

extern StateHolder1C *DAT_0057f268;

s32 FUN_003b6fc4(void)
{
    s32 value = 0;

    if (DAT_0057f268 != NULL) {
        value = DAT_0057f268->unk3C;
    }
    return value;
}

} /* extern "C" */
