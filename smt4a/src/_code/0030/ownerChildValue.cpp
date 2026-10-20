#include "common.h"

extern "C" {

typedef struct Child00305696 {
    /* 0x00 */ u8 unk00[0x24];
    /* 0x24 */ u32 value;
} Child00305696;

typedef struct Owner00305696 {
    /* 0x00 */ u8 unk00[0x78];
    /* 0x78 */ Child00305696 *child;
} Owner00305696;

/* The owner's child's value word, or 0 when it has no child. */
u32 ownerChildValue(Owner00305696 *owner)
{
    return owner->child != NULL ? owner->child->value : 0;
}

} /* extern "C" */
