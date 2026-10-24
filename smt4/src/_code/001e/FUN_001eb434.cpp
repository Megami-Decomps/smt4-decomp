#include "common.h"

extern "C" {

s32 FUN_00220490(const char *name);

/* Script condition: whether the "StartMenu" entry exists. */
s32 FUN_001eb434(void)
{
    return FUN_00220490("StartMenu") != 0;
}

} /* extern "C" */
