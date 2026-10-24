#include "common.h"

extern "C" {
extern u8 DAT_0059e4f0[];
void FUN_0039a9d0(const char *name, const void *table, s32 count);
}

extern "C" void FUN_003ce3e0(void)
{
    FUN_0039a9d0("OBJ PARTICLE", DAT_0059e4f0, 11);
}
