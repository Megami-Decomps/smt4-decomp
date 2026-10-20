/* Constructor: sets the vtable and, when the global hook is installed, registers the object with it. */
#include "common.h"

extern "C" {

typedef struct {
    const void *vtbl; /* 0x00 */
} HookedObject;

typedef struct {
    u8 unk00[0x1c]; /* 0x00 */
    void *hook;     /* 0x1c */
} SystemHooks;

extern u8 DAT_00558d10;
extern SystemHooks g_systemTable;

void FUN_0010b628(HookedObject *self);

HookedObject *FUN_0010b678(HookedObject *self)
{
    self->vtbl = &DAT_00558d10;
    if (g_systemTable.hook != NULL) {
        FUN_0010b628(self);
    }
    return self;
}

} /* extern "C" */
