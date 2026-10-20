/* Destructor: restores the vtable, releases the handle unless the global flag says it is shared, then runs the base destructor. */
#include "common.h"

extern "C" {

typedef struct {
    const void *vtbl; /* 0x00 */
    u8 unk04[0x3c];   /* 0x04 */
    u32 handle;       /* 0x40 */
} HandleOwner;

typedef struct {
    u8 unk00;          /* 0x00 */
    s8 handlesShared;  /* 0x01 */
} SystemFlags;

extern u8 DAT_0055a220;
extern SystemFlags g_systemTable;

void FUN_002eb7c0(HandleOwner *self);
void FUN_002f674e(u32 handle);

void _ZN9Obj55a218D1Ev(HandleOwner *self)
{
    self->vtbl = &DAT_0055a220;
    if (g_systemTable.handlesShared == 0) {
        FUN_002f674e(self->handle);
    }
    FUN_002eb7c0(self);
}

} /* extern "C" */
