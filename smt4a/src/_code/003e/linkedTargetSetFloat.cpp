#include "common.h"

extern "C" {

typedef struct Target003e5728 {
    /* 0x000 */ u8 unk000[0x1fc];
    /* 0x1fc */ f32 value;
} Target003e5728;

typedef struct Link003e5728 {
    /* 0x00 */ u8 unk00[4];
    /* 0x04 */ Target003e5728 *target;
} Link003e5728;

typedef struct Owner003e5728 {
    /* 0x00 */ u8 unk00[8];
    /* 0x08 */ Link003e5728 *link;
} Owner003e5728;

/* Stores `value` into the linked target's float field, if it has a target. */
void linkedTargetSetFloat(Owner003e5728 *owner, f32 value)
{
    Target003e5728 *target = owner->link->target;

    if (target != NULL) {
        target->value = value;
    }
}

} /* extern "C" */
