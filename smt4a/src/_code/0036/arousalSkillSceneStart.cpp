/* NON_MATCHING: the state-entry helper gives retail's final `state`/`unk0C` stm (no hoisted 1); remaining: retail places g_engineCleanupOwner first in the literal pool and schedules the process-creation arguments around its store, and clears unk10 from a fresh zero. */
#include "shard/S1ArousalSkill.h"
#include "code/Code002c.h"
#include "AsdSDK/Source/Sys/Mem/AsdMemory.h"

extern "C" {

extern ArousalSkillGlobals g_engineCleanupOwner;
extern const char DAT_00533d3c[]; /* "ArousalSkill PROC" */

u32 asdProcessCreateSimple(const char *name, s32 priority, s32 a, s32 b, void (*onEnd)(void), void (*onRun)(void), s32 c);
void sceneDestroyOwnedJobObject(void);
void engineReleaseCleanupHandle(void);
void loadSlotRequestAsync(s32 slot, s32 flags);
u16 ifTouchGetButtonHelpValue(void);
void statusAcquireSharedResources(void);
void FUN_002c85b0(s32 a);
void statusDownSwitchTab(s32 a);
void objBMarkAndInit20D4(void);
void stateHolderMarkAndInit2588(void);
void campButtonHelpAcquire(void);
void sysPlaySe(s32 id);
void buttonHelpSetText(s32 a, u32 color);

/* Moves the scene to `state` with its counters cleared. */
static inline void arousalSkillSceneEnter(ArousalSkillScene *scene, s32 state)
{
    scene->unk10 = 0;
    scene->state = state;
    scene->unk0C = 0;
}

/* Create the Arousal Skill scene process and its state, then load its resources and start it. */
void arousalSkillSceneStart(s32 mode, u32 id)
{
    ArousalSkillScene *memory = (ArousalSkillScene *)asdOperatorNew(sizeof(ArousalSkillScene));
    ArousalSkillScene *scene;

    if (memory != NULL) {
        memory->listBase[0] = 0;
        memory->listBase[1] = 0;
        memory->listBase[2] = 0;
        memory->listBase[3] = 0;
        memory->listBase[4] = 0;
        memory->listBase[5] = 0;
        memory->modeUnset = 0;
        scene = memory;
    } else {
        scene = NULL;
    }
    g_engineCleanupOwner.scene = scene;
    scene->process = asdProcessCreateSimple(DAT_00533d3c, 4, 0, 0, engineReleaseCleanupHandle, sceneDestroyOwnedJobObject, 0);
    scene->mode = mode;
    scene->id = id;
    scene->unk3A = 0;
    if (mode < 0) {
        scene->modeUnset = 1;
    } else {
        scene->modeUnset = 0;
    }
    loadSlotRequestAsync(37, 0);
    scene->slot = ifTouchGetButtonHelpValue();
    statusAcquireSharedResources();
    FUN_002c85b0(0);
    statusDownSwitchTab(0);
    FUN_002c8538(0);
    objBMarkAndInit20D4();
    stateHolderMarkAndInit2588();
    campButtonHelpAcquire();
    sysPlaySe(244);
    buttonHelpSetText(0, 0xF4F4F4FF);
    arousalSkillSceneEnter(scene, 1);
}

} /* extern "C" */
