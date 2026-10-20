/* Allocates and constructs a string-like object with its default value (FUN_00121234) and returns it. */
#include "common.h"

extern "C" {

typedef struct Object {
    /* 0x00 */ const void *vtbl;
} Object;

extern u8 DAT_0055af54;

extern Object *FUN_002e9f80(void);
extern u32 FUN_00121234(void);
extern void FUN_002ecad4(Object *obj, u32 value, s32 arg);

Object *strInit(void)
{
    Object *obj = FUN_002e9f80();

    obj->vtbl = &DAT_0055af54;
    FUN_002ecad4(obj, FUN_00121234(), 0);
    return obj;
}

}
