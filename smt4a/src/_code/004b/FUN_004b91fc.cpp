#include "common.h"
#include "shard/W6_W6Match8_BattleDebug.h"
#include "script/scrScriptProcess.h"
#include "shard/W6_W6Match6_ContentTransition.h"

extern "C" {

typedef struct SceneScriptFile {
    /* 0x00 */ void *data;
    /* 0x04 */ void *messages;
    /* 0x08 */ ScriptProcess *process;
} SceneScriptFile;

typedef struct SceneSetupBlock {
    /* 0x000 */ u8 unk000[0x114];
    /* 0x114 */ u8 table33[0x24];
    /* 0x138 */ SceneScriptFile scripts[2];
} SceneSetupBlock;

/* The content transition's object past its ContentTransition head: the scene setup this step builds. */
struct SceneSetupWork : ContentTransition {
    /* 0x0048 */ u8 unk0048[0x54];
    /* 0x009C */ u8 flagSet[0x1000 - 0x9C];
    /* 0x1000 */ SceneSetupBlock block;
};

s32 sceneTexturesAreLoaded(void);
s32 isFlag1F0Set(void *flags);
void __ARM_common_memcpy4_6(void *destination, const void *source);
void mikadoLoadSceneResources(SceneSetupWork *work);
void FUN_004b7d88(SceneSetupWork *work);
void scriptProcessSetMode(ScriptProcess *process, s32 mode);

/* Places the scene, moves setup on to step 2 and clears the pending flag. */
static __inline void sceneSetupPlace(SceneSetupWork *scene)
{
    __ARM_common_memcpy4_6(&scene->sourceMap, &scene->destination);
    mikadoLoadSceneResources(scene);
    scene->step = contentTransitionStep(2, 0);
    scene->flags &= ~0x10;
}

/* Once the scene data is loaded, starts both scene scripts and, when setup is pending, places the scene. */
void FUN_004b91fc(SceneSetupWork *work)
{
    if (!dataTable33IsLoaded(work->block.table33) || !sceneTexturesAreLoaded() || !isFlag1F0Set(work->flagSet)) {
        return;
    }
    SceneSetupBlock *block = &work->block;
    if (block->scripts[0].data == NULL || block->scripts[0].messages == NULL) {
        return;
    }
    if (block->scripts[1].data == NULL || block->scripts[1].messages == NULL) {
        return;
    }
    block->scripts[0].process = scrScriptProcessCreate(block->scripts[0].data, block->scripts[0].messages);
    scriptProcessSetMode(block->scripts[0].process, 2);
    block->scripts[1].process = scrScriptProcessCreate(block->scripts[1].data, block->scripts[1].messages);
    scriptProcessSetMode(block->scripts[1].process, 2);
    if (work->flags & 0x10) {
        sceneSetupPlace(work);
        FUN_004b7d88(work);
    }
}

} /* extern "C" */
