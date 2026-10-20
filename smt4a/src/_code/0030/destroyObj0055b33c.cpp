#include "common.h"

extern "C" {

extern const u8 DAT_0055b33c[];  /* vtable */
void FUN_00301590(void *self);

typedef struct Object Object;
typedef struct ObjectVtbl {
    /* 0x00 */ void *unk00;
    /* 0x04 */ void (*destroy)(Object *object);
} ObjectVtbl;
struct Object {
    /* 0x00 */ const ObjectVtbl *vtbl;
};

typedef struct Object55b33c {
    /* 0x000 */ const void *vtbl;
    /* 0x004 */ u8 unk004[0x114];
    /* 0x118 */ Object *child;
} Object55b33c;

/* Destructor: restores the vtable, destroys the child at 0x118 and runs FUN_00301590. */
void destroyObj0055b33c(Object55b33c *self)
{
    self->vtbl = DAT_0055b33c;
    if (self->child != NULL) {
        self->child->vtbl->destroy(self->child);
        self->child = NULL;
    }
    FUN_00301590(self);
}

} /* extern "C" */
