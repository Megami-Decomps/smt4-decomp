/* NON_MATCHING: Compiler merges the null return with the post-call zero assignment instead of branching directly to the epilogue. */
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

extern Holder *DAT_00588e2c;

/* Runs the global holder's target if present; returns NULL. */
Holder *FUN_002a60c8(void)
{
    Holder *holder = DAT_00588e2c;

    if (holder != NULL) {
        holder->target->vtbl->run(holder->target);
    }
    return NULL;
}

} /* extern "C" */
