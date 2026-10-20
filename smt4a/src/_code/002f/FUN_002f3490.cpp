/* NON_MATCHING: only the Thumb literal-pool alignment pad differs in fdiff (retail lists it as code `movs r0, r0`, the build as data `.short 0x0000`); the bytes are the same. */
/* Destructor: restores the vtable, destroys the member at 0x10 and then the sub-object at 0x4 that holds it; returns this. */
#include "common.h"

extern "C" {

typedef struct {
    const void *vtbl; /* 0x00 */
    u8 unk04[0xc];    /* 0x04 */
    u8 member[1];     /* 0x10 */
} MemberOwner;

extern u8 DAT_00558b2c;

u8 *onlineStringDestroy(u8 *self);

MemberOwner *FUN_002f3490(MemberOwner *self)
{
    u8 *subObject;

    self->vtbl = &DAT_00558b2c;
    subObject = onlineStringDestroy(self->member) - 0xc;
    return (MemberOwner *)(onlineStringDestroy(subObject) - 4);
}

} /* extern "C" */
