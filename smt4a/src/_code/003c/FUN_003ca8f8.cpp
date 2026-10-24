#include "common.h"

extern "C" {
extern u8 DAT_0059e070[];
void FUN_0039a9d0(const char *name, const void *table, s32 count);
}

extern "C" void FUN_003ca8f8(void)
{
    FUN_0039a9d0("FILTER", DAT_0059e070, 3);
}
