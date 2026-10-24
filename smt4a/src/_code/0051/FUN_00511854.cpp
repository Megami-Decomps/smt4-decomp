/* NON_MATCHING: same stores; retail forms the second stage address from the recovered owner (r3 = shader - 8, then +0x128f8) while built folds it into the shader pointer; instruction order and register assignment differ (twin of FUN_00157acc idiom) */
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

typedef struct ShaderBlock {
    /* 0x00000 */ u8 body[0x128E8];
    /* 0x128E8 */ ShaderStageState stage;
} ShaderBlock;

typedef struct ShaderStageOwner {
    /* 0x00000 */ u32 id;
    /* 0x00004 */ u32 unk04;
    /* 0x00008 */ ShaderBlock shader;
    /* 0x128F8 */ ShaderStageState secondStage;
} ShaderStageOwner;

extern u8 entry;

ShaderBlock *FUN_0016df14(ShaderBlock *shader);
void FUN_00422180(void *object);
void emptyStub_002f4370(void *object, void (*destroy)(void *), void *module);

static void shaderStageReset(ShaderStageState *stage, s32 mode)
{
    stage->enabled = 0;
    stage->mode = mode;
    stage->mask0 = 0xff;
    stage->mask1 = 0xff;
    stage->value = 0;
}

/* Initialises the owner with its id and two shader stage states (mode 2), registering its destructor. */
void FUN_00511854(ShaderStageOwner *owner, u32 id)
{
    owner->id = id;
    owner->unk04 = 0;
    ShaderBlock *shader = FUN_0016df14(&owner->shader);
    ShaderStageOwner *base = (ShaderStageOwner *)((u8 *)shader - offsetof(ShaderStageOwner, shader));

    shaderStageReset(&shader->stage, 2);
    shaderStageReset(&base->secondStage, 2);
    emptyStub_002f4370(base, FUN_00422180, &entry);
}

} /* extern "C" */
