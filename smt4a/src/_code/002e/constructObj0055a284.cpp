#include "common.h"

extern "C" {

extern const u8 DAT_0055a284[];  /* vtable */
void FUN_002f4364(void);

typedef struct Object55a284 {
    /* 0x00 */ const void *vtbl;
} Object55a284;

/* Constructor: sets the vtable, then runs FUN_002f4364; returns `self`. */
Object55a284 *constructObj0055a284(Object55a284 *self)
{
    self->vtbl = DAT_0055a284;
    FUN_002f4364();
    return self;
}

} /* extern "C" */
