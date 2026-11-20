#include "common.h"

struct ModelHolder {
    /* 0x00 */ u8 unk00[4];
    /* 0x04 */ void *model;
};

extern "C" {
void motionPlayerStartBlended(void *model, u32 index, u8 enabled, f32 first, f32 second);

/* Starts the model operation at frame zero. */
static __inline void modelStart(void *model, u32 index, s32 enabled, f32 value)
{
    motionPlayerStartBlended(model, index, enabled, 0.0f, value);
}

/* Starts the referenced model operation at frame zero, if there is a model. */
void FUN_004d888c(ModelHolder **holder, u32 index, u32 enabled, f32 value)
{
    if (*holder != NULL) {
        s32 on = 1;
        if (enabled == 0) {
            on = 0;
        }
        modelStart((*holder)->model, index, on, value);
    }
}
}
