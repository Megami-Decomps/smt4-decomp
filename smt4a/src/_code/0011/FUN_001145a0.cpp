#include "common.h"

extern "C" {

extern u8 DAT_005596a4; /* vtable */

typedef struct Handler {
    void *vtbl;      /* 0x00 */
    u8 unk04[0x1c];
    u8 unk20[8];
    u8 active;       /* 0x28 */
} Handler;

extern void FUN_00114aa0(void);
extern void FUN_002ed250(Handler *self);

/* Destructor: stops the handler if it is still active, then runs the base destructor. */
void FUN_001145a0(Handler *self)
{
    self->vtbl = &DAT_005596a4;
    if (self->active != 0) {
        FUN_00114aa0();
        self->active = 0;
    }
    FUN_002ed250(self);
}

} /* extern "C" */
