/* NON_MATCHING: the frame != 7 branch skips the frame reload (bne 8c) where retail branches to it (bne 88). */
#include "common.h"

extern "C" {

typedef struct QuestClearScene {
    /* 0x00 */ u8 unk00[8];
    /* 0x08 */ s32 step;
    /* 0x0C */ s32 frame;
} QuestClearScene;

typedef struct QuestRecord1b {
    /* 0x000 */ u8 unk000[0x148];
    /* 0x148 */ u16 rewardId;
} QuestRecord1b;

void eventQueueAddUnique(u32 event);
void FUN_00275dec(void);
void frameTexApplyMode(s32 arg);
u32 FUN_002903f0(void);
s32 FUN_00287894(void);
void qcMainSetMode(s32 mode);
QuestRecord1b *dataTable1bOr1cGetRecord(u32 id);
void FUN_0026f960(u16 rewardId);
void buttonHelpRelease(void);

/* Steps the quest clear scene: queue its event on frame 7, start the effect, then hand out the reward. */
void FUN_0038358c(QuestClearScene *scene)
{
    switch (scene->step) {
    case 0:
        if (++scene->frame == 7) {
            eventQueueAddUnique(0x1000184);
            FUN_00275dec();
        }
        if (scene->frame == 8) {
            scene->step++;
            scene->frame = 0;
        }
        break;
    case 1:
        if (scene->frame == 0) {
            frameTexApplyMode(1);
        }
        if (++scene->frame > 3) {
            scene->frame++;
            scene->step++;
        }
        break;
    case 2: {
        u32 quest = FUN_002903f0();

        if (quest != 0 && FUN_00287894() == 6) {
            qcMainSetMode(1);
            FUN_0026f960(dataTable1bOr1cGetRecord(quest)->rewardId);
            buttonHelpRelease();
        }
        break;
    }
    }
}

} /* extern "C" */
