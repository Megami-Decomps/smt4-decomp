#include "common.h"

extern "C" {

void FUN_00300b18(void *object, s32 arg);
void *operatorNew(u32 size);

/* Allocates a 0x44-byte object and constructs it with FUN_00300b18(object, 0) if the allocation succeeded. */
void FUN_0012425a(void)
{
    void *object = operatorNew(0x44);

    if (object != NULL) {
        FUN_00300b18(object, 0);
    }
}

} /* extern "C" */
