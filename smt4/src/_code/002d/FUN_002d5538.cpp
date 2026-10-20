#include "common.h"

extern "C" {

int FUN_003ba63c(void);

typedef struct Target {
    /* 0x00 */ u8 unk00[5];
    /* 0x05 */ u8 kind;
    /* 0x06 */ u8 unk06[2];
    /* 0x08 */ void *unk08;
} Target;

typedef struct Owner {
    /* 0x0 */ u8 unk0[4];
    /* 0x4 */ Target *target;
} Owner;

u32 FUN_002d5538(Owner *owner)
{
    Target *target = owner->target;
    void *sub;

    if (target->kind == 1 || target->kind == 2 || target->kind == 3) {
        sub = NULL;
        if (target != NULL) {
            sub = target->unk08;
        }
        if (target != NULL && sub != NULL) {
            FUN_003ba63c();
        }
    }
    return 0;
}

} /* extern "C" */
