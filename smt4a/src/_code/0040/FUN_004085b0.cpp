#include "common.h"

struct TargetVtbl004085b0 {
    /* 0x00 */ u8 unk00[0xc];
    /* 0x0c */ void (*method)(u32 handle, u32 value);
};

struct Object004085b0 {
    /* 0x00 */ u8 unk00[4];
    /* 0x04 */ u32 handle;
    /* 0x08 */ const TargetVtbl004085b0 *vtbl;
};

extern "C" {

/* Calls the target's method at 0xc with the saved handle and the value. */
void FUN_004085b0(const Object004085b0 *object, u32 value)
{
    object->vtbl->method(object->handle, value);
}

} /* extern "C" */
