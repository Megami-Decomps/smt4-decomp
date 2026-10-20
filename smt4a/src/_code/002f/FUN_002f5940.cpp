#include "common.h"

extern "C" {

void FUN_00121cc4(void *object);
void sharedRefAddRef(void *object);
void *FUN_002eb5f4(void);
void *operatorNew(u32 size);

/* If FUN_002eb5f4 yields an object, runs sharedRefAddRef on it; otherwise allocates a 0x3C4-byte object and constructs it with FUN_00121cc4. */
void FUN_002f5940(void)
{
    void *object;

    object = FUN_002eb5f4();
    if (object != NULL) {
        sharedRefAddRef(FUN_002eb5f4());
    } else {
        object = operatorNew(0x3C4);
        if (object != NULL) {
            FUN_00121cc4(object);
            return;
        }
    }
}

} /* extern "C" */
