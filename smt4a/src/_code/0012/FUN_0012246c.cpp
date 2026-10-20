#include "common.h"

extern "C" {

typedef struct Target Target;
typedef struct TargetVtbl {
    /* 0x00 */ void *unk00[5];
    /* 0x14 */ void (*handle)(Target *target, void *source);
} TargetVtbl;
struct Target {
    /* 0x00 */ const TargetVtbl *vtbl;
};

typedef struct Source {
    /* 0x00 */ u8 unk00[0x28];
    /* 0x28 */ Target *target;
    /* 0x2C */ u32 flags;
} Source;

/* Forwards the source to its target when bit 0 of `flags` is set; always returns 1. */
u32 FUN_0012246c(Source *source)
{
    if ((~source->flags & 1) == 0) {
        source->target->vtbl->handle(source->target, source);
    }
    return 1;
}

} /* extern "C" */
