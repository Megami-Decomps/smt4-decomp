#include "common.h"

extern "C" {

typedef struct Child {
    /* 0x00 */ u8 unk00[0x22];
    /* 0x22 */ u8 state;
} Child;

typedef struct Owner {
    /* 0x00 */ u8 unk00[0x9C];
    /* 0x9C */ Child *child;
} Owner;

/* Returns 1 when the owner has a child whose state is not 5. */
u32 FUN_002f7064(Owner *owner)
{
    if ((owner->child != NULL) && (owner->child->state != 5)) {
        return 1;
    }
    return 0;
}

} /* extern "C" */
