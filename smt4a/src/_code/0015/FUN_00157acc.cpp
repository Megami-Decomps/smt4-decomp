/* NON_MATCHING: only r1/r3 swap between the stage pointer and the zero constant (twin of smt4 FUN_0011b588). */
#include "common.h"
#include <stddef.h>

extern "C" {

typedef struct ShaderStageState {
    /* 0x0 */ u8 enabled;
    /* 0x1 */ u8 mode;
    /* 0x2 */ u8 mask0;
    /* 0x3 */ u8 mask1;
    /* 0x4 */ u32 value;
} ShaderStageState;

typedef struct ShaderOwner {
    /* 0x00000 */ u8 unk00000[0x138];
    /* 0x00138 */ u8 shader[0x128E8];
    /* 0x12A20 */ ShaderStageState stages[5];
} ShaderOwner;

void *FUN_0016df14(void *shader);

static void shaderStageReset(ShaderStageState *stage, s32 mode)
{
    stage->enabled = 0;
    stage->mode = mode;
    stage->mask0 = 0xff;
    stage->mask1 = 0xff;
    stage->value = 0;
}

/* Reset the five shader stage states of the owner of the given shader. */
void FUN_00157acc(ShaderOwner *owner)
{
    ShaderOwner *base = (ShaderOwner *)((u8 *)FUN_0016df14(owner->shader) - offsetof(ShaderOwner, shader));

    shaderStageReset(&base->stages[0], 1);
    shaderStageReset(&base->stages[1], 1);
    shaderStageReset(&base->stages[2], 1);
    shaderStageReset(&base->stages[3], 2);
    shaderStageReset(&base->stages[4], 2);
}

} /* extern "C" */
