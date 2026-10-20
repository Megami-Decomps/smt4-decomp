#include "common.h"

extern "C" {

int FUN_0039309c(void *target);

typedef struct Target {
    /* 0x00 */ u8 unk00[0x1A];
    /* 0x1A */ u8 kind;
    /* 0x1B */ u8 unk1B;
    /* 0x1C */ void *unk1C;
} Target;

u32 FUN_0020ed30(Target **owner)
{
    Target *target = *owner;
    void *sub;

    if (target->kind == 1 || target->kind == 2 || target->kind == 3) {
        sub = NULL;
        if (target != NULL) {
            sub = target->unk1C;
        }
        if (target != NULL && sub != NULL) {
            FUN_0039309c(sub);
        }
    }
    return 0;
}

} /* extern "C" */
