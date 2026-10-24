#include "common.h"

extern "C" {

s32 FUN_00317ef4(const char *name);

/* Script condition: whether the "StartMenu" entry exists. */
s32 FUN_002a194c(void)
{
    return FUN_00317ef4("StartMenu") != 0;
}

} /* extern "C" */
