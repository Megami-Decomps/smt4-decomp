#include "common.h"

extern "C" {

typedef struct Target Target;
typedef struct TargetVtbl {
    /* 0x00 */ void *unk00[5];
    /* 0x14 */ void (*run)(Target *target);
} TargetVtbl;
struct Target {
    /* 0x00 */ const TargetVtbl *vtbl;
};

typedef struct Holder {
    /* 0x00 */ u8 unk00[8];
    /* 0x08 */ Target *target;
} Holder;

/* Runs the target of the holder `*ref` and returns 0; returns 0 (NULL) when there is no holder. */
Holder *FUN_002a60cc(Holder **ref)
{
    Holder *holder = *ref;

    if (holder == NULL) {
        return holder;
    }
    holder->target->vtbl->run(holder->target);
    return NULL;
}

} /* extern "C" */
