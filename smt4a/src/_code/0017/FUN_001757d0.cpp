#include "common.h"

extern "C" {

void FUN_001afdc4(u32 handle);

typedef struct Handles {
    /* 0x00 */ u32 handle[2];
} Handles;

/* Releases the (up to two) non-zero handles and returns the object. */
Handles *FUN_001757d0(Handles *object)
{
    s32 i;

    i = 0;
    do {
        if (object->handle[i] != 0) {
            FUN_001afdc4(object->handle[i]);
        }
        i = i + 1;
    } while (i < 2);
    return object;
}

} /* extern "C" */
