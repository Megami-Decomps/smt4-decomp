#include "common.h"

extern "C" {

extern const u8 DAT_0055afbc[];  /* vtable */
void handleWatcherPoll(void *self);
void *FUN_001173ac(void *buffer);
void asdOperatorDeleteArray(void *memory);

typedef struct Object Object;
typedef struct ObjectVtbl {
    /* 0x00 */ void *unk00;
    /* 0x04 */ void (*destroy)(Object *object);
} ObjectVtbl;
struct Object {
    /* 0x00 */ const ObjectVtbl *vtbl;
};

typedef struct Object55afbc {
    /* 0x00 */ const void *vtbl;
    /* 0x04 */ u8 unk04[4];
    /* 0x08 */ void *buffer;
    /* 0x0C */ Object *child;
} Object55afbc;

/* Destructor: restores the vtable, runs handleWatcherPoll, frees the buffer and destroys the child; returns `self`. */
Object55afbc *destroyObj0055afbc(Object55afbc *self)
{
    self->vtbl = DAT_0055afbc;
    handleWatcherPoll(self);
    if (self->buffer != NULL) {
        asdOperatorDeleteArray(FUN_001173ac(self->buffer));
    }
    if (self->child != NULL) {
        self->child->vtbl->destroy(self->child);
    }
    return self;
}

} /* extern "C" */
