#include "common.h"

extern "C" {

void _ZN9Obj55a94cC1Ej(void *object, s32 arg);
void *_Znwj(u32 size);

/* Allocates a 0x44-byte object and constructs it with _ZN9Obj55a94cC1Ej(object, 0) if the allocation succeeded. */
void FUN_0012425a(void)
{
    void *object = _Znwj(0x44);

    if (object != NULL) {
        _ZN9Obj55a94cC1Ej(object, 0);
    }
}

} /* extern "C" */
