#include "common.h"

extern "C" {

typedef struct Child Child;
typedef struct ChildVtbl {
    /* 0x00 */ void *unk00;
    /* 0x04 */ void (*release)(Child *self);
} ChildVtbl;
struct Child {
    /* 0x00 */ ChildVtbl *vtbl;
};

typedef struct Object {
    /* 0x00 */ void *vtbl;
    /* 0x04 */ Child *child;
} Object;

extern u8 DAT_0055af44;

int FUN_00310284(Object *self);

/* Destructor body: installs the vtable, runs FUN_00310284, then releases the child if there is one. */
Object *FUN_001210e0(Object *self)
{
    self->vtbl = &DAT_0055af44;
    FUN_00310284(self);
    if (self->child != NULL) {
        self->child->vtbl->release(self->child);
    }
    return self;
}

} /* extern "C" */
