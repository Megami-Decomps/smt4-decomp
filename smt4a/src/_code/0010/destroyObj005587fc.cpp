#include "common.h"

extern "C" {

extern const u8 DAT_005587fc[];  /* vtable */
u8 *FUN_002ea00c(u8 *member);
void FUN_002ecac4(u8 *member);

typedef struct Object5587fc {
    /* 0x00 */ const void *vtbl;
    /* 0x04 */ u8 unk04[0x6C];
    /* 0x70 */ u8 member70[1];
} Object5587fc;

/* Destructor: restores the vtable and destroys the embedded members. */
void destroyObj005587fc(Object5587fc *self)
{
    u8 *member;

    self->vtbl = DAT_005587fc;
    member = FUN_002ea00c(self->member70);
    FUN_002ecac4(member - 0x70);
}

} /* extern "C" */
