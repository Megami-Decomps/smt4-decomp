#include "common.h"

extern "C" {

typedef void (*ReleaseCallback)(void *arg);

typedef struct Hooks003f5c14 {
    /* 0x00 */ u8 unk00[4];
    /* 0x04 */ ReleaseCallback release;   /* called to release the object's resources; NULL = nothing to do */
} Hooks003f5c14;

typedef struct Object003f5c14 {
    /* 0x00 */ void *resource;
    /* 0x04 */ void *extra;
} Object003f5c14;

extern Hooks003f5c14 g_moAllocationHooks;

/* Releases the object's extra and main resources through the hook, then the object itself. */
void handleObjectRelease(Object003f5c14 *object)
{
    if (g_moAllocationHooks.release != NULL && object != NULL) {
        Object003f5c14 *self = object;

        if (self->extra != NULL) {
            g_moAllocationHooks.release(self->extra);
        }
        g_moAllocationHooks.release(self->resource);
        g_moAllocationHooks.release(self);
    }
}

} /* extern "C" */
