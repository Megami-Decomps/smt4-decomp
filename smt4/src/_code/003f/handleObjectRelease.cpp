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

extern Hooks003f5c14 DAT_0044e930;

/* Releases the object's extra and main resources through the hook, then the object itself. */
void handleObjectRelease(Object003f5c14 *object)
{
    if (DAT_0044e930.release != NULL && object != NULL) {
        Object003f5c14 *self = object;

        if (self->extra != NULL) {
            DAT_0044e930.release(self->extra);
        }
        DAT_0044e930.release(self->resource);
        DAT_0044e930.release(self);
    }
}

} /* extern "C" */
