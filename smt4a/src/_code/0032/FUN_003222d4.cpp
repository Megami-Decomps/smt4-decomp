#include "common.h"

struct ChildBlock {
    /* 0x00 */ u8 unk00[8];
    /* 0x08 */ u32 value;
};

struct Owned {
    /* 0x00 */ u8 unk00[0xc0];
    /* 0xC0 */ u8 block[0xf];
    /* 0xCF */ u8 enabled;
};

struct Holder {
    /* 0x00 */ u8 unk00[0x24];
    /* 0x24 */ Owned *owned;
    /* 0x28 */ ChildBlock *child;
};

extern "C" {

void FUN_002b3178(void *block, u32 value);

/* Virtual slot: when the owned object is enabled, passes its block and the child's value on. */
void FUN_003222d4(Holder *self)
{
    Owned *owned = self->owned;
    u8 *block = owned->block;

    if (owned->enabled) {
        FUN_002b3178(block, self->child->value);
    }
}

} /* extern "C" */
