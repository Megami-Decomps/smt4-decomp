#include "common.h"

extern "C" {

void FUN_002fd020(void *object);
void *rt_malloc(u32 size);

/* Allocates an 8-byte object and initialises it with FUN_002fd020 if the allocation succeeded. */
void FUN_00128ce0(void)
{
    void *object = rt_malloc(8);

    if (object != NULL) {
        FUN_002fd020(object);
    }
}

} /* extern "C" */
