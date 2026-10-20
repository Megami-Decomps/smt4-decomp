/* NON_MATCHING: same code as retail with the callee-saved registers permuted (this, the slot pointer and the part are r8, r7, r6 here; r7, r6, r8 in retail). */
#include "classes/Obj4209cc.h"

extern "C" {

/* The deleting destructor of Obj4209cc: armcc's own D0 calls the destructor body instead of
 * inlining it as retail does, so it stays in C form. */
void _ZN9Obj4209ccD0Ev(Obj4209cc *self);

extern u8 DAT_004209d0;   /* the vtable's address point */

}

/* Destroys the part and hands its memory back to the allocator it came from. */
static void releasePart(Obj4209ccPart **slot)
{
    Obj4209ccPart *part = *slot;

    if (part != NULL) {
        part->~Obj4209ccPart();
        part->allocator->release(part);
        *slot = NULL;
    }
}

/* Destroys and releases each part (two rows of three), then the handle and the block, and frees
 * the object. */
void _ZN9Obj4209ccD0Ev(Obj4209cc *self)
{
    *(const void **)self = &DAT_004209d0;
    self->unk04 = 0;
    for (int i = 0; i < 3; i++) {
        releasePart(&self->rowA[i]);
        releasePart(&self->rowB[i]);
        self->rowA[i] = NULL;
    }
    if (self->handle != 0) {
        asdMdlManagerDestroy(self->handle);
        self->handle = 0;
    }
    if (self->buffer != NULL) {
        asdMemFree(self->buffer);
        self->buffer = NULL;
    }
    asdMemFreeNonNull(self);
}
