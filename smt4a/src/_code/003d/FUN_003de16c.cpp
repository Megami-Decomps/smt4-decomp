#include "shard/Shard003D.h"

extern "C" {

extern Sub68Owner *DAT_00587f28;

u8 FUN_003de16c(void)
{
    if (DAT_00587f28 != NULL) {
        return 0;
    }
    return 1;
}

} /* extern "C" */
