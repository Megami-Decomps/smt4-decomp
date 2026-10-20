#include "common.h"

extern "C" {

typedef struct Target Target;
typedef struct TargetVtbl {
    /* 0x00 */ void *unk00[5];
    /* 0x14 */ void (*notify)(Target *target);
} TargetVtbl;
struct Target {
    /* 0x00 */ const TargetVtbl *vtbl;
};

typedef struct Owner {
    /* 0x00 */ u8 unk00[4];
    /* 0x04 */ s8 state;
    /* 0x05 */ u8 unk05[0x36];
    /* 0x3B */ u8 unk3B;
    /* 0x3C */ Target *target;
    /* 0x40 */ u8 unk40;
    /* 0x41 */ u8 active;
} Owner;

/* Notifies the target when the owner is active and its state is not 3. */
void FUN_001213a2(Owner *owner)
{
    if (owner->state != 3 && owner->active != 0 && owner->target != NULL) {
        owner->target->vtbl->notify(owner->target);
        return;
    }
}

} /* extern "C" */
