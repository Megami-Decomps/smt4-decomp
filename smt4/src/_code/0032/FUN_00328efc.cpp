#include "common.h"

extern "C" {
extern u8 DAT_0044f040[];
void FUN_0024233c(const char *name, const void *table, s32 count);
}

extern "C" void FUN_00328efc(void)
{
    FUN_0024233c("POLY FLASH", DAT_0044f040, 11);
}
