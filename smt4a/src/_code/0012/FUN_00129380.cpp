/* NON_MATCHING: only the Thumb literal-pool alignment pad differs in fdiff (retail lists it as code `movs r0, r0`, the build as data `.short 0x0000`); the bytes are the same. */
/* Destructor: restores the vtable, destroys the member at 0x34 and then the sub-object at 0x4 that holds it; returns this. */
#include "common.h"

extern "C" {

typedef struct {
    const void *vtbl; /* 0x00 */
    u8 unk04[0x30];   /* 0x04 */
    u8 member[1];     /* 0x34 */
} MemberOwner;

extern u8 DAT_0055909c;

u8 *FUN_002eb624(u8 *subObject);
u8 *FUN_002f8760(u8 *member);

MemberOwner *FUN_00129380(MemberOwner *self)
{
    u8 *subObject;

    self->vtbl = &DAT_0055909c;
    subObject = FUN_002f8760(self->member) - 0x30;
    return (MemberOwner *)(FUN_002eb624(subObject) - 4);
}

} /* extern "C" */
