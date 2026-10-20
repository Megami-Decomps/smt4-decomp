#include "common.h"

extern "C" {

extern const u8 DAT_005598b4[];  /* vtable */
extern u8 DAT_00594b24[];
void onlineObjectListRemove(u8 *table, void *self);
void FUN_001293b0(void *self);
u8 *FUN_002eb624(u8 *member);

typedef struct Object5598b4 {
    /* 0x000 */ const void *vtbl;
    /* 0x004 */ u8 unk004[0x138];
    /* 0x13C */ u8 member13C[1];
} Object5598b4;

/* Destructor: restores the vtable, unregisters the object from the global table, runs FUN_001293b0 and destroys the embedded members; returns the base address. */
u8 *destroyObj005598b4(Object5598b4 *self)
{
    u8 *member;

    self->vtbl = DAT_005598b4;
    onlineObjectListRemove(DAT_00594b24, self);
    FUN_001293b0(self);
    member = FUN_002eb624(self->member13C);
    member = FUN_002eb624(member - 300);
    return member - 0x10;
}

} /* extern "C" */
