#include "common.h"

extern "C" {

extern const u8 DAT_00558c98[];  /* vtable */
void sharedRefRelease(void);
void FUN_002ecf28(void);
void sharedRefHolderSet(void *self, s32 flag);

typedef struct Object558c98 {
    /* 0x00 */ const void *vtbl;
} Object558c98;

/* Destructor: restores the vtable, runs sharedRefHolderSet(self, 0), FUN_002ecf28 and sharedRefRelease; returns `self`. */
Object558c98 *destroyObj00558c98(Object558c98 *self)
{
    self->vtbl = DAT_00558c98;
    sharedRefHolderSet(self, 0);
    FUN_002ecf28();
    sharedRefRelease();
    return self;
}

} /* extern "C" */
