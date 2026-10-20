#include "common.h"

extern "C" {

typedef struct Child {
    /* 0x0 */ u8 unk0[4];
    /* 0x4 */ u32 handle;
} Child;

typedef struct Owner {
    /* 0x00 */ u8 unk00[0x1C];
    /* 0x1C */ Child *children[3];
} Owner;

extern s32 FUN_003fdae8(u32 handle);
extern s32 FUN_003fe86c(u32 handle, s32 arg, s32 mode, f32 a, f32 b);

/* Lowers every child whose current value exceeds `level` down to it. */
void childrenLowerToLevel(Owner *owner, s32 level)
{
    s32 index;

    for (index = 0; index < 3; index++) {
        Child *child = owner->children[index];

        if (child != NULL) {
            u32 handle = child->handle;

            if (level < FUN_003fdae8(handle)) {
                FUN_003fe86c(handle, level, 2, 0.0f, 0.0f);
            }
        }
    }
}

} /* extern "C" */
