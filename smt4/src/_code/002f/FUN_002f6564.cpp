#include "shard/Sys44e190.h"

extern "C" {

u32 FUN_002f6564(void)
{
    u32 result;

    if ((DAT_0044e190 == NULL) || (DAT_0044e190->unk400 != 7)) {
        result = 0;
    } else {
        result = 1;
    }
    return result;
}

} /* extern "C" */
