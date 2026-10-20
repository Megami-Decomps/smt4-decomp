#include "common.h"

extern "C" {

/* The payload at +8 of a block tagged 'TBCR' (0x52434254), else 0. */
int FUN_00254484(int *block)
{
    int payload;

    if ((block != NULL) && (*block == 0x52434254)) {
        payload = block[2];
    } else {
        payload = 0;
    }
    return payload;
}

} /* extern "C" */
