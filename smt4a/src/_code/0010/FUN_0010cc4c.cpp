/* NON_MATCHING: only the Thumb literal-pool alignment pad differs in fdiff (retail lists it as code `movs r0, r0`, the build as data `.short 0x0000`); the bytes are the same. */
/* Copy constructor: sets the vtable, copies the scalar fields, then copy-constructs the embedded sub-object at 0x1c and returns this. */
#include "common.h"

extern "C" {

typedef struct {
    u32 lo; /* +0 */
    u32 hi; /* +4 */
} Pair;

typedef struct {
    u8 bytes[4]; /* 0x00 */
} SubObject;

typedef struct {
    const void *vtbl; /* 0x00 */
    u8 flag;          /* 0x04 */
    u8 unk05[3];      /* 0x05 */
    u32 field08;      /* 0x08 */
    u32 unk0c;        /* 0x0c */
    Pair range;       /* 0x10 */
    u16 field18;      /* 0x18 */
    u16 field1a;      /* 0x1a */
    SubObject sub;    /* 0x1c */
} CopyObject;

extern u8 DAT_00559018;

SubObject *FUN_002f6b9c(SubObject *self, const SubObject *other);

CopyObject *FUN_0010cc4c(CopyObject *self, const CopyObject *other)
{
    self->vtbl = &DAT_00559018;
    self->flag = other->flag;
    self->field08 = other->field08;
    self->range = other->range;
    self->field18 = other->field18;
    self->field1a = other->field1a;
    return (CopyObject *)((u8 *)FUN_002f6b9c(&self->sub, &other->sub) - 0x1c);
}

} /* extern "C" */
