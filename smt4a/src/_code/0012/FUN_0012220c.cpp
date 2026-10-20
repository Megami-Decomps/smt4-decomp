#include "common.h"

extern "C" {

typedef struct Target Target;
typedef struct TargetVtbl {
    /* 0x00 */ void *unk00[11];
    /* 0x2C */ void (*handle)(Target *target, void *source);
} TargetVtbl;
struct Target {
    /* 0x00 */ const TargetVtbl *vtbl;
};

typedef struct Source {
    /* 0x00 */ u8 unk00[4];
    /* 0x04 */ Target *target;
} Source;

/* Forwards the source to its target's handle method. */
void FUN_0012220c(Source *source)
{
    source->target->vtbl->handle(source->target, source);
}

} /* extern "C" */
