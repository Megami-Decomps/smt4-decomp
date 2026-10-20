#include "common.h"

extern "C" {

int FUN_00147a80(u32 addr);

/* Tail-calls the address rebasing function that follows it. */
int FUN_00147a7c(u32 addr)
{
    return FUN_00147a80(addr);
}

} /* extern "C" */
