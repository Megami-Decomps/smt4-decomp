#include "common.h"

extern "C" {

int FUN_002e7264(void);

/* Releases the resource held in *slot (via FUN_002e7264) and clears the slot. */
void FUN_002ea3f4(int *slot)
{
    if (*slot != 0) {
        FUN_002e7264();
        *slot = 0;
    }
}

} /* extern "C" */
