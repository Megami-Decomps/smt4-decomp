#include "common.h"

extern "C" {

/* 0 for values 4-0x35, otherwise 1. */
u8 FUN_003bf570(int value)
{
    if (value - 4U < 0x32) {
        return 0;
    }
    return 1;
}

} /* extern "C" */
