/* NON_MATCHING: the control flow, calls and shared tails match. Retail also keeps the constant 1 it stores to
 * the notice flag in sl from the prologue, which moves 7, 6 and the event table to r7, r8 and r9 (most of the
 * 104 rows), tests that flag with a branch where this build predicates the load, copies the first panel
 * position with two word loads (built: ldm) and, as in qcDeliveryStep, holds the flag word in r1 while it
 * loads slotSetRequest's arguments. */
#include "ui/DummyAttachmentWork.h"
#include "ui/UiSpriteApi.h"
#include "ui/ButtonHelp.h"
#include "sys/FlagWord.h"
#include "sys/RuntimeObjects.h"
#include "script/scrScriptProcess.h"
#include "quest_center/qcMain.h"

struct SlotGroups;

extern "C" {

extern const QcDeliveryEvent DAT_0044daf0[2];

s32 scrScriptProcessStartMappedEntry(DummyAttachmentWork *work, const char *name);
void buttonHelpResetSlots(void);
u32 screenFadeIsBusy(void);
s32 gameFlagIsSet(u32 flag); // declcheck: local (its headers belong to the battle and camp menus)
s32 storyModeCanProceed(u32 mode);
void FUN_00382878(DummyAttachmentWork *work);
u32 FUN_002950e8(UiSpriteState *sprite, s32 fromBelow);
s32 FUN_00296284(UiSpriteState *sprite, s32 reverse, s32 vertical);
u8 *qcGetCenterSlotGroups(s32 index);
s32 slotGroupFindFree(const SlotGroups *groups, u32 group);
s32 FUN_0027ee9c(void);
s32 questResetEligibleEntriesMatchingValue(u32 matchingValue);

/* The first free quest slot of this center's rank (-1: none, 0: the rank is closed). */
static __inline s32 centerFindFreeSlot(DummyAttachmentWork *work)
{
    const u8 *center = qcGetCenterSlotGroups(work->location);

    return slotGroupFindFree(reinterpret_cast<const SlotGroups *>(qcGetCenterSlotGroups(work->location)), center[10]);
}

/* The quest center's board state. Step 0 starts a pending board event or the board's opening talk,
 * steps 1-3 open the board, wait for a choice and close it, 4-5 report whether a quest was taken,
 * 6 leaves for the event and 7 closes the board after a refusal. */
void qcBoardStep(DummyAttachmentWork *work)
{
    switch (work->step) {
    case 0: {
        const QcDeliveryEvent *events = DAT_0044daf0;
        const QcDeliveryEvent *event;
        bool found = false;

        for (u32 i = 0; i < 2; i++) {
            event = &events[i];

            if (work->location != event->location) {
                continue;
            }
            if (event->kind != -1 && work->kind != event->kind) {
                continue;
            }
            if (event->requiredFlag != 0 && gameFlagIsSet(event->requiredFlag) == 0) {
                continue;
            }
            if (event->forbiddenFlag != 0 && gameFlagIsSet(event->forbiddenFlag) != 0) {
                continue;
            }
            found = true;
            break;
        }
        if (found) {
            flagWordSet(&work->flags, 0x20000);
            work->deliveryEvent = event;
            slotSetRequest(0, 10, 0xff);
            slotSetRequest(1, 10, 0xff);
            buttonHelpResetSlots();
            work->step = 6;
            return;
        }
        buttonHelpSetPreset(0xa3);
        work->playback.requested = 7;
        if (storyModeCanProceed(work->location) != 0) {
            scrScriptProcessStartMappedEntry(work, "qc_N_Route");
        } else if (work->location == 2) {
            scrScriptProcessStartMappedEntry(work, "qc_L_Tokyo");
        } else if (work->location == 3) {
            scrScriptProcessStartMappedEntry(work, "qc_C_Tokyo");
        } else {
            scrScriptProcessStartMappedEntry(work, "qc_LookBoard");
        }
        work->step++;
        break;
    }
    case 1:
        if (scrRunOpcodesStub(*work->sceneScript) != 2) {
            return;
        }
        /* The Tokyo centers of the law and chaos routes have no board. */
        if (work->location != 2 && work->location != 3) {
            buttonHelpSetPreset(0xa4);
            work->step++;
            FUN_00382878(work);
            uiSpriteStateInitFromSource(&work->board.sprites[0], 0x31, -1, &work->board.resources, 11, 1.0f);
            uiSpriteStateInitFromSource(&work->board.sprites[1], 0x31, -1, &work->board.resources, 11, 1.0f);
            uiSpriteStateInitFromSource(&work->board.sprites[2], 0x31, -1, &work->board.resources, 11, 1.0f);
            uiSpriteStateInitFromSource(&work->board.sprites[3], 0x31, 0, &work->board.resources, 11, 1.0f);
            uiSpriteSetImageKeyframe(&work->board.sprites[3], 0, 0);
            work->boardState.inputWait = 6;
            work->board.positions[0].x = 400.0f;
            work->board.positions[0].y = 0.0f;
            for (s32 i = 1; i < 3; i++) {
                work->board.positions[i] = work->board.positions[0];
            }
            flagWordSet(&work->flags, 0x80);
            return;
        }
        work->step = 4;
        break;
    case 2:
        uiSpriteAdvanceAnimation(&work->board.sprites[3]);
        if (uiSpriteGetCompletionState(&work->board.sprites[3]) != 0) {
            flagWordSet(&work->flags, 0x10);
            u32 first = FUN_002950e8(&work->board.sprites[0], 0);
            s32 second = FUN_00296284(&work->board.sprites[1], 0, 0);
            s32 third = FUN_00296284(&work->board.sprites[2], 0, 1);

            if ((first & second & third) != 0) {
                if (storyModeCanProceed(work->location) == 0) {
                    if (centerFindFreeSlot(work) == 0) {
                        if (work->boardState.fullNoticePlayed == 0) {
                            eventQueueAddUnique(0x1000121);
                            work->boardState.fullNoticePlayed = 1;
                        }
                    }
                }
                /* Count the input wait down to zero. */
                --work->boardState.inputWait;
                if (work->boardState.inputWait <= 0) {
                    work->boardState.inputWait = 0;
                }
                if (FUN_0027ee9c() != 0) {
                    buttonHelpSetPreset(0xa3);
                    work->boardState.fullNoticePlayed = 0;
                    if (storyModeCanProceed(work->location) != 0) {
                        scrScriptProcessStartMappedEntry(work, "qc_N_RouteReAct");
                        work->step = 7;
                        return;
                    }
                    if (centerFindFreeSlot(work) == -1) {
                        if (work->location == 0) {
                            scrScriptProcessStartMappedEntry(work, "qc_RankOut_KBar");
                        } else {
                            scrScriptProcessStartMappedEntry(work, "qc_RankOut_Hunter");
                        }
                        work->step = 7;
                        return;
                    }
                    uiSpriteSetImageKeyframe(&work->board.sprites[3], 1, 0);
                    work->step++;
                    work->timer = 0;
                    return;
                }
            }
        }
        break;
    case 3:
        uiSpriteAdvanceAnimation(&work->board.sprites[3]);
        if (uiSpriteGetCompletionState(&work->board.sprites[3]) != 0) {
            flagWordClear(&work->flags, 0x90);
            work->step++;
            return;
        }
        break;
    case 4:
        if (questResetEligibleEntriesMatchingValue(work->kind) != 0) {
            scrScriptProcessStartMappedEntry(work, "qc_GetQuest");
        } else {
            scrScriptProcessStartMappedEntry(work, "qc_NoneQuest");
        }
        work->step++;
        break;
    case 5:
        if (scrRunOpcodesStub(*work->sceneScript) == 2) {
            work->state = 5;
            work->step = 0;
            work->playback.requested = 0;
            return;
        }
        break;
    case 6:
        if (screenFadeIsBusy() == 0 && buttonHelpStateIsNot3() != 0) {
            work->state = 16;
            work->step = 0;
            work->playback.requested = 0;
            return;
        }
        break;
    case 7:
        if (scrRunOpcodesStub(*work->sceneScript) != 2) {
            return;
        }
        uiSpriteSetImageKeyframe(&work->board.sprites[3], 1, 0);
        work->step = 3;
        break;
    }
}

} /* extern "C" */
