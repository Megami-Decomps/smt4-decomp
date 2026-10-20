#include "common.h"

extern "C" {

int FUN_00384ad8(void *target);

typedef struct Target {
    /* 0x00 */ u8 unk00[0x19];
    /* 0x19 */ u8 kind;
    /* 0x1A */ u8 unk1A[2];
    /* 0x1C */ void *unk1C;
} Target;

typedef struct Owner {
    /* 0x0 */ u8 unk0[4];
    /* 0x4 */ Target *target;
} Owner;

u32 FUN_001fe1a0(Owner *owner)
{
    Target *target = owner->target;
    void *sub;

    if (target->kind == 1 || target->kind == 3 || target->kind == 4) {
        sub = NULL;
        if (target != NULL) {
            sub = target->unk1C;
        }
        if (target != NULL && sub != NULL) {
            FUN_00384ad8(sub);
        }
    }
    return 0;
}

} /* extern "C" */
