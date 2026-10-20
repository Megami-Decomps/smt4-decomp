#include "common.h"

extern "C" {

int FUN_002e1b3c(int index);

void FUN_0033b33c(void)
{
    int i = 0;

    do {
        FUN_002e1b3c(i);
        i++;
    } while (i < 0xc);
}

} /* extern "C" */
