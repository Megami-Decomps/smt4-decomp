#include "common.h"

struct ScaleBlock {
    /* 0x00 */ f32 value[59];
};

struct ScaleTransfer {
    /* 0x00 */ u8 unk00[0x20];
    /* 0x20 */ ScaleBlock *target;
    /* 0x24 */ ScaleBlock *source;
};

extern "C" {

/* Virtual slot: copies the source block's tunables into the target block, scaled. */
void FUN_0030c970(ScaleTransfer *self, f32 scale)
{
    ScaleBlock *target = self->target;
    ScaleBlock *source = self->source;

    target->value[25] = source->value[25] * scale;
    target->value[26] = source->value[26] * scale;
    target->value[29] = source->value[29] * scale;
    target->value[31] = source->value[31] * scale;
    target->value[33] = source->value[33] * scale;
    target->value[50] = source->value[50] * scale;
    target->value[55] = source->value[55] * scale;
    target->value[57] = source->value[57] * scale;
    target->value[58] = source->value[58] * scale;
}

} /* extern "C" */
