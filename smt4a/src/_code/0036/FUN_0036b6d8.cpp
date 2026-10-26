/* NON_MATCHING: armcc hoists the constant 1 into r8 (retail rematerialises it, so the final `state`/`unk0C` stores become one stm) and orders the literal pool differently. */
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
void FUN_002c7e6c(void);
void FUN_002c85b0(s32 a);
void statusDownSwitchTab(s32 a);
void objBMarkAndInit20D4(void);
void stateHolderMarkAndInit2588(void);
void campButtonHelpAcquire(void);
void sysPlaySe(s32 id);
void FUN_0019de98(s32 a, u32 color);

/* Create the Arousal Skill scene process and its state, then load its resources and start it. */
void FUN_0036b6d8(s32 mode, u32 id)
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
    FUN_002c7e6c();
    FUN_002c85b0(0);
    statusDownSwitchTab(0);
    FUN_002c8538(0);
    objBMarkAndInit20D4();
    stateHolderMarkAndInit2588();
    campButtonHelpAcquire();
    sysPlaySe(244);
    FUN_0019de98(0, 0xF4F4F4FF);
    scene->unk10 = 0;
    scene->state = 1;
    scene->unk0C = 0;
}

} /* extern "C" */
