#include "common.h"

extern "C" {

typedef void (*ReleaseCallback)(void *arg);

typedef struct Hooks00513288 {
    /* 0x00 */ u8 unk00[4];
    /* 0x04 */ ReleaseCallback release;   /* called to release the object's resources; NULL = nothing to do */
} Hooks00513288;

typedef struct Object00513288 {
    /* 0x00 */ void *resource;
    /* 0x04 */ void *extra;
} Object00513288;

extern Hooks00513288 DAT_00589510;

/* Releases the object's extra and main resources through the hook, then the object itself. */
void handleObjectRelease(Object00513288 *object)
{
    if (DAT_00589510.release != NULL && object != NULL) {
        Object00513288 *self = object;

        if (self->extra != NULL) {
            DAT_00589510.release(self->extra);
        }
        DAT_00589510.release(self->resource);
        DAT_00589510.release(self);
    }
}

} /* extern "C" */
