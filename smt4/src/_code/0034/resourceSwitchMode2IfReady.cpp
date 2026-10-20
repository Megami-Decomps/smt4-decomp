#include "common.h"

extern "C" {

extern int resourceIsReady(u32 target);

typedef struct Resource {
    /* 0x00 */ u8 unk00[0x38];
    /* 0x38 */ u32 mode;
    /* 0x3C */ u32 unk3C;
    /* 0x40 */ u32 unk40;
} Resource;

typedef struct Target {
    /* 0x0 */ u8 unk0[8];
    /* 0x8 */ Resource *resource;
} Target;

typedef struct Obj {
    /* 0x0 */ u8 unk0[8];
    /* 0x8 */ Target *target;
} Obj;

/* If the target is ready, switches its resource to mode 2. */
u8 resourceSwitchMode2IfReady(Obj *obj)
{
    int ready = resourceIsReady((u32)obj->target);

    if (ready != 0) {
        obj->target->resource->unk3C = 1;
        obj->target->resource->unk40 = 1;
        obj->target->resource->mode = 2;
    }
    return ready != 0;
}

} /* extern "C" */
