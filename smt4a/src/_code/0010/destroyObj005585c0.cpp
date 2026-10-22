#include "shard/VObject.h"

extern "C" {

extern const u8 DAT_005585c0[];  /* vtable */
void FUN_00103fa4(VObject *self);
u8 *_ZN9Obj55aff4D1Ev(u8 *member);
void _ZN9Obj5593b8D1Ev(u8 *member);

typedef struct Object5585c0 {
    /* 0x00 */ const void *vtbl;
    /* 0x04 */ u8 unk04[0x18];
    /* 0x1C */ u8 member1C[1];
} Object5585c0;

/* Destructor: restores the vtable, destroys the base part, then three embedded members. */
void destroyObj005585c0(Object5585c0 *self)
{
    u8 *member;

    self->vtbl = DAT_005585c0;
    FUN_00103fa4((VObject *)self);
    member = _ZN9Obj55aff4D1Ev(self->member1C);
    member = _ZN9Obj55aff4D1Ev(member - 8);
    _ZN9Obj5593b8D1Ev(member - 0x14);
}

} /* extern "C" */
