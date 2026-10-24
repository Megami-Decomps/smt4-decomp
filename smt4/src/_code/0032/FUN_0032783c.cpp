#include "common.h"

extern "C" {
extern u8 DAT_0044ef20[];
void FUN_0024233c(const char *name, const void *table, s32 count);
}

extern "C" void FUN_0032783c(void)
{
    FUN_0024233c("FILTER", DAT_0044ef20, 3);
}
