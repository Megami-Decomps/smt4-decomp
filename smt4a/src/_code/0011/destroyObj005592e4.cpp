#include "common.h"

extern "C" {

extern const u8 DAT_005592e4[];  /* vtable */
void operatorDeleteArrayNullable(u32 handle);
void FUN_002faf62(void *self);
u8 *FUN_002fb028(u8 *member);
u8 *FUN_002ea00c(u8 *member);
u8 *destroyObj0055ae64(u8 *member);
u8 *ptrHolderDestroy(u8 *member);
u8 *_ZN9Obj55aff4D1Ev(u8 *member);
void FUN_002ecac4(u8 *member);

typedef struct Object5592e4 {
    /* 0x000 */ const void *vtbl;
    /* 0x004 */ u8 unk004[0x74];
    /* 0x078 */ u32 handle;
    /* 0x07C */ u8 unk07C[0xB4];
    /* 0x130 */ u8 member130[1];
} Object5592e4;

/* Destructor: restores the vtable, releases the handle, then destroys the embedded members from the last to the first and the base. */
void destroyObj005592e4(Object5592e4 *self)
{
    u8 *member;

    self->vtbl = DAT_005592e4;
    operatorDeleteArrayNullable(self->handle);
    FUN_002faf62(self);
    member = FUN_002fb028(self->member130);
    member = FUN_002ea00c(member - 0x60);
    member = destroyObj0055ae64(member - 0x24);
    member = ptrHolderDestroy(member - 0x10);
    member = ptrHolderDestroy(member - 8);
    member = ptrHolderDestroy(member - 8);
    member = _ZN9Obj55aff4D1Ev(member - 0xC);
    member = _ZN9Obj55aff4D1Ev(member - 0x10);
    FUN_002ecac4(member - 0x70);
}

} /* extern "C" */
