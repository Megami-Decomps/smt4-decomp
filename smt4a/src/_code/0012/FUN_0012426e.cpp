#include "common.h"

extern "C" {

void _ZN9Obj55abd4C1Ej(void *object, s32 arg);
void *_Znwj(u32 size);

/* Allocates a 0x44-byte object and constructs it with _ZN9Obj55abd4C1Ej(object, 0) if the allocation succeeded. */
void FUN_0012426e(void)
{
    void *object = _Znwj(0x44);

    if (object != NULL) {
        _ZN9Obj55abd4C1Ej(object, 0);
    }
}

} /* extern "C" */
