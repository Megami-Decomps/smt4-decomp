#include "common.h"

extern "C" {

void FUN_00303208(void *object, s32 arg);
void *FUN_002e760a(u32 size);

/* Allocates a 0x44-byte object and constructs it with FUN_00303208(object, 0) if the allocation succeeded. */
void FUN_0012426e(void)
{
    void *object = FUN_002e760a(0x44);

    if (object != NULL) {
        FUN_00303208(object, 0);
    }
}

} /* extern "C" */
