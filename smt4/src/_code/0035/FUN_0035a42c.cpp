#include "common.h"

extern "C" {

/* 1 for kind 10 (or kind 13 with value other than 10), 2 for kind 13 with value 10, otherwise 0. */
u32 FUN_0035a42c(int kind, int value)
{
    if (kind != 10) {
        if (kind != 0xd) {
            return 0;
        }
        if (value == 10) {
            return 2;
        }
    }
    return 1;
}

} /* extern "C" */
