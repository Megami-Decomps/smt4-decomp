#include "common.h"

extern "C" {

extern int aocEntryGetKind(void);

u8 FUN_0022f1b8(void)
{
    return aocEntryGetKind() == 10;
}

} /* extern "C" */
