/* Allocates and constructs a string-like object with its default value (FUN_00121234) and returns it. */
#include "common.h"

extern "C" {

typedef struct Object {
    /* 0x00 */ const void *vtbl;
} Object;

extern u8 DAT_0055af54;

extern Object *_ZN9Obj5593b8C1Ev(void);
extern u32 FUN_00121234(void);
extern void FUN_002ecad4(Object *obj, u32 value, s32 arg);

Object *strInit(void)
{
    Object *obj = _ZN9Obj5593b8C1Ev();

    obj->vtbl = &DAT_0055af54;
    FUN_002ecad4(obj, FUN_00121234(), 0);
    return obj;
}

}
