#include "common.h"

extern "C" {

extern const u8 DAT_00558c98[];  /* vtable */
void FUN_002e7232(void);
void FUN_002ecf28(void);
void FUN_002f3b6e(void *self, s32 flag);

typedef struct Object558c98 {
    /* 0x00 */ const void *vtbl;
} Object558c98;

/* Destructor: restores the vtable, runs FUN_002f3b6e(self, 0), FUN_002ecf28 and FUN_002e7232; returns `self`. */
Object558c98 *destroyObj00558c98(Object558c98 *self)
{
    self->vtbl = DAT_00558c98;
    FUN_002f3b6e(self, 0);
    FUN_002ecf28();
    FUN_002e7232();
    return self;
}

} /* extern "C" */
