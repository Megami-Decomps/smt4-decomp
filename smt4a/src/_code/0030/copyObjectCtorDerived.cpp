/* Copy constructor: the base part is initialised first (flag and fields), then the vtable is set to the derived class. */
#include "common.h"

extern "C" {

typedef struct {
    u32 lo; /* +0 */
    u32 hi; /* +4 */
} Pair;

typedef struct {
    const void *vtbl; /* 0x00 */
    u8 flag;          /* 0x04 */
    u8 unk05[3];      /* 0x05 */
    Pair range;       /* 0x08 */
    u32 field10;      /* 0x10 */
    u32 unk14;        /* 0x14 */
    Pair extent;      /* 0x18 */
} CopyObject;

extern u8 DAT_005596c4;
extern u8 DAT_0055a4d0;

void copyObjectCtorDerived(CopyObject *self, const CopyObject *other)
{
    self->vtbl = &DAT_0055a4d0;
    self->flag = other->flag;
    self->range = other->range;
    self->field10 = other->field10;
    self->extent = other->extent;
    self->vtbl = &DAT_005596c4;
}

} /* extern "C" */
