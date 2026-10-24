#include "common.h"

struct ScaleBlock {
    /* 0x00 */ f32 value[57];
};

struct ScaleTransfer {
    /* 0x00 */ u8 unk00[0x20];
    /* 0x20 */ ScaleBlock *target;
    /* 0x24 */ ScaleBlock *source;
};

extern "C" {

/* Virtual slot: copies the source block's tunables into the target block, scaled. */
void FUN_0030c8f0(ScaleTransfer *self, f32 scale)
{
    ScaleBlock *target = self->target;
    ScaleBlock *source = self->source;

    target->value[25] = source->value[25] * scale;
    target->value[26] = source->value[26] * scale;
    target->value[29] = source->value[29] * scale;
    target->value[31] = source->value[31] * scale;
    target->value[33] = source->value[33] * scale;
    target->value[50] = source->value[50] * scale;
    target->value[51] = source->value[51] * scale;
    target->value[53] = source->value[53] * scale;
    target->value[54] = source->value[54] * scale;
    target->value[56] = source->value[56] * scale;
}

} /* extern "C" */
