#include "gfx/TitleRadialGradient.h"

struct ChildBlock {
    /* 0x00 */ u8 unk00[8];
    /* 0x08 */ u32 value;
};

struct Owned {
    /* 0x00 */ u8 unk00[0xc0];
    /* 0xC0 */ TitleRadialGradient gradient;
};

struct Holder {
    /* 0x00 */ u8 unk00[0x24];
    /* 0x24 */ Owned *owned;
    /* 0x28 */ ChildBlock *child;
};

extern "C" {

/* Draws the owned radial gradient if its centre is visible. */
void FUN_002c7314(Holder *self)
{
    Owned *owned = self->owned;
    TitleRadialGradient *gradient = &owned->gradient;

    if (gradient->block.color.rgba.a) {
        titleDrawRadialGradient(gradient, self->child->value);
    }
}

} /* extern "C" */
