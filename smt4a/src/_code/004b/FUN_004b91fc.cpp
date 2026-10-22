/* NON_MATCHING: work and its +0x1000 base trade r4/r5, the constant 2 is kept in r6, and the step/frame stores are not paired into strd. */
#include "common.h"

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

typedef struct SceneSetupWork {
    /* 0x0000 */ u8 unk0000[0x20];
    /* 0x0020 */ u32 flags; // 0x10: setup pending
    /* 0x0024 */ u8 unk0024[4];
    /* 0x0028 */ s32 step;
    /* 0x002C */ s32 frame;
    /* 0x0030 */ u8 unk0030[0xC];
    /* 0x003C */ u8 position[6];
    /* 0x0042 */ u8 rotation[0x5A];
    /* 0x009C */ u8 flagSet[0x1078];
    /* 0x1114 */ u8 table33[0x24];
    /* 0x1138 */ SceneScriptFile scripts[2];
} SceneSetupWork;

s32 dataTable33IsLoaded(void *table);
s32 sceneTexturesAreLoaded(void);
s32 isFlag1F0Set(void *flags);
SceneScriptProcess *FUN_00275bc8(void *data, u32 size);
void FUN_001d1438(void *position, void *rotation);
void FUN_004b7128(SceneSetupWork *work);
void FUN_004b7d88(SceneSetupWork *work);

/* Once the scene data is loaded, starts both scene scripts and, when setup is pending, places the scene. */
void FUN_004b91fc(SceneSetupWork *work)
{
    if (!dataTable33IsLoaded(work->table33) || !sceneTexturesAreLoaded() || !isFlag1F0Set(work->flagSet)) {
        return;
    }
    if (work->scripts[0].data == NULL || work->scripts[0].size == 0) {
        return;
    }
    if (work->scripts[1].data == NULL || work->scripts[1].size == 0) {
        return;
    }
    work->scripts[0].process = FUN_00275bc8(work->scripts[0].data, work->scripts[0].size);
    work->scripts[0].process->mode = 2;
    work->scripts[1].process = FUN_00275bc8(work->scripts[1].data, work->scripts[1].size);
    work->scripts[1].process->mode = 2;
    if (work->flags & 0x10) {
        FUN_001d1438(work->position, work->rotation);
        FUN_004b7128(work);
        work->step = 2;
        work->frame = 0;
        work->flags &= ~0x10;
        FUN_004b7d88(work);
    }
}

} /* extern "C" */
