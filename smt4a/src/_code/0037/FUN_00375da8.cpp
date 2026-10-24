#include "common.h"

struct ScaleBlock {
    /* 0x00 */ f32 value[58];
};

struct ScaleTransfer {
    /* 0x00 */ u8 unk00[0x20];
    /* 0x20 */ ScaleBlock *target;
    /* 0x24 */ ScaleBlock *source;
};

extern "C" {

/* Virtual slot: copies the source block's tunables into the target block, scaled. */
void FUN_00375da8(ScaleTransfer *self, f32 scale)
{
    ScaleBlock *target = self->target;
    ScaleBlock *source = self->source;

    target->value[25] = source->value[25] * scale;
    target->value[26] = source->value[26] * scale;
    target->value[29] = source->value[29] * scale;
    target->value[31] = source->value[31] * scale;
    target->value[33] = source->value[33] * scale;
    target->value[50] = source->value[50] * scale;
    target->value[52] = source->value[52] * scale;
    target->value[57] = source->value[57] * scale;
}

} /* extern "C" */
