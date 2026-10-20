#include "common.h"

extern "C" {

void FUN_002e6e34(u8 *guard, u32 *lock);
void _ZN9Obj55b28cD1Ev(u8 *guard);
void FUN_002e7614(u8 *buffer, s32 size);
void FUN_002ec8a8(u32 dest, u8 *buffer);
void strDestroy(u8 *str);

typedef struct Object Object;
typedef struct ObjectVtbl {
    /* 0x00 */ void *unk00[3];
    /* 0x0C */ u32 (*fill)(Object *object, u32 dest, u8 *buffer);
} ObjectVtbl;
struct Object {
    /* 0x00 */ const ObjectVtbl *vtbl;
    /* 0x04 */ u8 unk04[0x0C];
    /* 0x10 */ u32 lock;
};

/* Under the object's lock, asks it to fill a 32-byte temporary string, copies the string to `dest` and returns the object's result. */
u32 FUN_002f5c4c(Object *object, u32 dest)
{
    u32 result;
    u8 buffer[32];
    u8 guard[12];

    FUN_002e6e34(guard, &object->lock);
    FUN_002e7614(buffer, 2000);
    result = object->vtbl->fill(object, dest, buffer);
    FUN_002ec8a8(dest, buffer);
    strDestroy(buffer);
    _ZN9Obj55b28cD1Ev(guard);
    return result;
}

} /* extern "C" */
