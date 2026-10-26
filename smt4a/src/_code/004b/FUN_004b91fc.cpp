/* NON_MATCHING: register assignment and block layout now match retail; the constant 2 is kept in r6 instead of reloaded, the second script's pointer/size are loaded with ldm, and the step/frame strd is scheduled after the flag clear. */
#include "common.h"
#include "shard/W6_W6Match8_BattleDebug.h"

extern "C" {

typedef struct SceneScriptProcess {
    /* 0x000 */ u8 unk000[0x108];
    /* 0x108 */ s32 mode;
} SceneScriptProcess;

typedef struct SceneScriptFile {
    /* 0x00 */ void *data;
    /* 0x04 */ u32 size;
    /* 0x08 */ SceneScriptProcess *process;
} SceneScriptFile;

typedef struct SceneSetupBlock {
    /* 0x000 */ u8 unk000[0x114];
    /* 0x114 */ u8 table33[0x24];
    /* 0x138 */ SceneScriptFile scripts[2];
} SceneSetupBlock;

typedef struct SceneSetupWork {
    /* 0x0000 */ u8 unk0000[0x20];
    /* 0x0020 */ u32 flags; // 0x10: setup pending
    /* 0x0024 */ u8 unk0024[4];
    /* 0x0028 */ u64 stepAndFrame; // low word: step, high word: frame
    /* 0x0030 */ u8 unk0030[0xC];
    /* 0x003C */ u8 position[6];
    /* 0x0042 */ u8 rotation[0x5A];
    /* 0x009C */ u8 flagSet[0x1000 - 0x9C];
    /* 0x1000 */ SceneSetupBlock block;
} SceneSetupWork;

s32 sceneTexturesAreLoaded(void);
s32 isFlag1F0Set(void *flags);
SceneScriptProcess *FUN_00275bc8(void *data, u32 size);
void FUN_001d1438(void *position, void *rotation);
void mikadoLoadSceneResources(SceneSetupWork *work);
void FUN_004b7d88(SceneSetupWork *work);

/* Places the scene, moves setup on to step 2 and clears the pending flag. */
static __inline void sceneSetupPlace(SceneSetupWork *scene)
{
    FUN_001d1438(scene->position, scene->rotation);
    mikadoLoadSceneResources(scene);
    scene->stepAndFrame = 2;
    scene->flags &= ~0x10;
}

/* Once the scene data is loaded, starts both scene scripts and, when setup is pending, places the scene. */
void FUN_004b91fc(SceneSetupWork *work)
{
    if (!dataTable33IsLoaded(work->block.table33) || !sceneTexturesAreLoaded() || !isFlag1F0Set(work->flagSet)) {
        return;
    }
    SceneSetupBlock *block = &work->block;
    if (block->scripts[0].data == NULL || block->scripts[0].size == 0) {
        return;
    }
    if (block->scripts[1].data == NULL || block->scripts[1].size == 0) {
        return;
    }
    block->scripts[0].process = FUN_00275bc8(block->scripts[0].data, block->scripts[0].size);
    block->scripts[0].process->mode = 2;
    block->scripts[1].process = FUN_00275bc8(block->scripts[1].data, block->scripts[1].size);
    block->scripts[1].process->mode = 2;
    if (work->flags & 0x10) {
        sceneSetupPlace(work);
        FUN_004b7d88(work);
    }
}

} /* extern "C" */
