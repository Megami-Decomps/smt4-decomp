#include "common.h"

extern "C" {

extern const u8 DAT_00558be8[];  /* vtable */
void handleObjectDtor(u8 *base);
void _ZN9Obj558be04stopEv(void *self);
void FUN_002f30e0(void *self, u32 child);
u8 *FUN_002eb728(u8 *member);
u8 *FUN_002f30fc(u8 *member);

typedef struct Obj558be0 {
    /* 0x000 */ const void *vtbl;
    /* 0x004 */ u8 unk004[0x40];
    /* 0x044 */ u32 childA;
    /* 0x048 */ u32 childB;
    /* 0x04C */ u8 unk04C[0xD4];
    /* 0x120 */ u8 member120[1];
} Obj558be0;

/* Destructor: restores the vtable, stops the object, releases its two children and destroys its embedded members and bases. */
void destroyObj00558be8(Obj558be0 *self)
{
    u8 *member;

    self->vtbl = DAT_00558be8;
    _ZN9Obj558be04stopEv(self);
    FUN_002f30e0(self, self->childB);
    FUN_002f30e0(self, self->childA);
    member = FUN_002eb728(self->member120);
    member = FUN_002f30fc(member - 0x58);
    member = FUN_002f30fc(member - 0x50);
    handleObjectDtor(member - 0x78);
}

} /* extern "C" */
