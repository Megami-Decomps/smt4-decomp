#include "common.h"

extern "C" {

extern int *DAT_0044e190;

/* Saves the current mode (word 0x100) into word 0x101 and switches to mode 6. */
void FUN_0030aacc(void)
{
    int *block = DAT_0044e190;

    if (block != NULL) {
        block[0x101] = block[0x100];
        block[0x100] = 6;
    }
}

} /* extern "C" */
