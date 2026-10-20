#include "common.h"

extern "C" {

void FUN_00121cc4(void *object);
void FUN_002e75fa(void *object);
void *FUN_002eb5f4(void);
void *FUN_002e760a(u32 size);

/* If FUN_002eb5f4 yields an object, runs FUN_002e75fa on it; otherwise allocates a 0x3C4-byte object and constructs it with FUN_00121cc4. */
void FUN_002f5940(void)
{
    void *object;

    object = FUN_002eb5f4();
    if (object != NULL) {
        FUN_002e75fa(FUN_002eb5f4());
    } else {
        object = FUN_002e760a(0x3C4);
        if (object != NULL) {
            FUN_00121cc4(object);
            return;
        }
    }
}

} /* extern "C" */
