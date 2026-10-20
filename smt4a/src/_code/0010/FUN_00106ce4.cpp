#include "common.h"

extern "C" {

void FUN_0010ca78(void *object, u32 a, u32 b);
void *FUN_002e760a(u32 size);

/* Allocates a 0x9C-byte object and constructs it from the two arguments, if the allocation succeeded. */
void FUN_00106ce4(u32 a, u32 b)
{
    void *object = FUN_002e760a(0x9C);

    if (object != NULL) {
        FUN_0010ca78(object, a, b);
    }
}

} /* extern "C" */
