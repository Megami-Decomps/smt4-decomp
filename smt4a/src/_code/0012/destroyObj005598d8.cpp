#include "common.h"

extern "C" {

extern const u8 DAT_005598d8[];  /* vtable */
extern u8 DAT_00594b24[];
void FUN_0030ccc0(u8 *table, void *self);
void FUN_001294c4(void *self);
u8 *FUN_0030cbdc(u8 *member);

typedef struct Object5598d8 {
    /* 0x00 */ const void *vtbl;
    /* 0x04 */ u8 unk04[0xE4];
    /* 0xE8 */ u8 memberE8[1];
} Object5598d8;

/* Destructor: restores the vtable, unregisters the object from the global table, runs FUN_001294c4 and destroys the embedded members; returns the base address. */
u8 *destroyObj005598d8(Object5598d8 *self)
{
    u8 *member;

    self->vtbl = DAT_005598d8;
    FUN_0030ccc0(DAT_00594b24, self);
    FUN_001294c4(self);
    member = FUN_0030cbdc(self->memberE8);
    member = FUN_0030cbdc(member - 0xD8);
    return member - 0x10;
}

} /* extern "C" */
