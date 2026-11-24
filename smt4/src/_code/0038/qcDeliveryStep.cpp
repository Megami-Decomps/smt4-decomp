/* NON_MATCHING: 8 lines, one schedule: when step 8 queues the delivery event, retail holds the flag
 * word in r1 and loads slotSetRequest's first and third arguments around the update
 * (ldr r1; mov r2,#255; mov r0,#0; orr; str; mov r1,#10); this build updates it in r0 with the second
 * and third arguments loaded first (ldr r0; mov r2,#255; mov r1,#10; orr; str; mov r0,#0).
 * A static __inline helper shared with qcBoardStep that takes 0xff and 0 as single-use by-value
 * parameters (and hard-codes the second fade) reproduces it; the parameters exist only for the
 * schedule, so that form is not used. */
#include "ui/DummyAttachmentWork.h"
#include "sys/FlagWord.h"
#include "script/scrScriptProcess.h"
#include "quest_center/QuestRecord.h"
#include "quest_center/QuestDelivery.h"
#include "quest_center/QuestRuntime.h"
#include "quest_center/qcMain.h"
#include "result/ResultSpoils.h"
#include "gamedata/GameFlags.h"
#include "gamedata/Table1bOr1c.h"
#include "sys/RuntimeObjects.h"
#include "code/Code0024.h"
#include "ui/ButtonHelp.h"
#include "shard/W6_W6Match5_DevilSort.h"
#include "code/Code001b.h"
#include "quest_center/QuestStatus_Smt4.h"

extern "C" {

extern const QcDeliveryEvent DAT_0044db24[2];

s32 scrScriptProcessStartMappedEntry(DummyAttachmentWork *work, const char *name);
void buttonHelpSetText(const s8 *text, u32 style);
void buttonHelpResetSlots(void);
u32 screenFadeIsBusy(void);
s32 gameFlagIsSet(u32 flag); // declcheck: local (its headers belong to the battle and camp menus)
u32 questIsCompleted(int index);
u32 questReadRuntimeFlag(u32 questId, u32 selector);
u8 idIsAtLeast350(u32 value);
void uiQuestCreate(void);
void uiQuestAnswerConfirm(s8 choice);
u8 stateHolder4IsD(void);
u16 uiQuestGetCurrentEntryId(void);
void uiQuestClose(void);
void resultCreate(u8 kind);
void scrResultStopJobAndReleaseUi(void);
void messageSetConfirmDisplayMode(void);
u32 gameFlagEntryActivate(u32 id);
u8 questDeactivate(u32 id);

/* The id of the quest chosen for delivery (qcGetDeliveryQuestId's body). */
static u16 deliveryQuestId(DummyAttachmentWork *work)
{
    return questDataGetRecord((u16)work->questId)->id;
}

/* The quest center's delivery state. Steps 0 and 11 look for an active delivery quest of this
 * location whose goals are met: step 0 announces it (or that there is none) and opens the quest
 * list, step 11 reopens the list after a delivery. Once a quest is chosen its requirements are
 * taken, the result screen pays the rewards, the quest is closed, and the first delivery event
 * whose conditions fit is started. */
void qcDeliveryStep(DummyAttachmentWork *work)
{
    switch (work->step) {
    case 0:
    case 11: {
        bool found = false;

        for (u16 id = 0; id < 400; id++) {
            QuestRecord *record = questDataGetRecord(id);

            if (record == NULL || record->kind != 0 || questReadRuntimeFlag(id, 1) == 0) {
                continue;
            }
            u16 area = record->area;

            if (idIsAtLeast350(id) == 0) {
                switch (area) {
                case 1:
                    if (work->location != 0) {
                        continue;
                    }
                    break;
                case 2:
                case 3:
                case 4:
                case 5:
                case 6:
                case 7:
                case 8:
                    if (work->location != 1) {
                        continue;
                    }
                    break;
                case 9:
                    if (work->location != 2) {
                        continue;
                    }
                    break;
                case 10:
                case 11:
                case 12:
                case 13:
                    if (work->location != 3) {
                        continue;
                    }
                    break;
                default:
                    continue;
                }
            }
            if (goalConditionsSatisfied(id) != 0) {
                found = true;
                break;
            }
        }
        if (found) {
            if (work->step == 11) {
                uiQuestCreate();
                uiQuestAnswerConfirm(work->kind);
                work->step = 3;
            } else {
                buttonHelpSetPreset(0xa3);
                buttonHelpSetText(NULL, 0x323232ff);
                scrScriptProcessStartMappedEntry(work, "qc_DeliveryStart");
                work->step++;
            }
            return;
        }
        if (work->step != 11) {
            buttonHelpSetPreset(0xa3);
            scrScriptProcessStartMappedEntry(work, "qc_DeliveryNG");
            work->step = 10;
        } else {
            work->state = 5;
            work->step = 0;
        }
        break;
    }
    case 1:
        if (scrRunOpcodesStub(*work->sceneScript) != 2) {
            break;
        }
        work->step++;
    case 2:
        uiQuestCreate();
        uiQuestAnswerConfirm(work->kind);
        work->step++;
        break;
    case 3:
        if (stateHolder4IsD() != 0) {
            work->questId = uiQuestGetCurrentEntryId();
            work->step = 4;
            uiQuestAnswerConfirm(work->kind);
            buttonHelpSetPreset(0xa3);
        }
        if (FUN_00241990() != 0) {
            uiQuestClose();
            work->step = 5;
        }
        break;
    case 4:
        if (FUN_00241990() != 0) {
            uiQuestClose();
            flagWordClear(&work->flags, 0x20);
            scrScriptProcessStartMappedEntry(work, "qc_DeliveryItem");
            work->step = 6;
        }
        break;
    case 5:
        flagWordClear(&work->flags, 0x20);
        work->state = 5;
        work->step = 0;
        break;
    case 6:
        if (scrRunOpcodesStub(*work->sceneScript) != 2) {
            break;
        }
        if ((work->flags & 0x10000) != 0) {
            QuestRecord *record = questDataGetRecord(deliveryQuestId(work));

            questTakeRequirements(record);
            resultCreate(1);

            ResultSpoils spoils;

            questBuildRewardSpoils(&spoils, deliveryQuestId(work));
            resultApplySpoils(&spoils);
            if (table1bOr1cGetRecordValue(deliveryQuestId(work)) == 0) {
                gameFlagEntryActivate(deliveryQuestId(work));
            }
            work->step = 7;
        } else {
            work->step = 11;
        }
        return;
    case 7:
        if (resultIsIdle() != 0) {
            scrResultStopJobAndReleaseUi();
            messageSetConfirmDisplayMode();
            questDeactivate(deliveryQuestId(work));
            buttonHelpSetPreset(0xa3);
            scrScriptProcessStartMappedEntry(work, "qc_QuestClear");
            work->step = 8;
        }
        break;
    case 8: {
        if (scrRunOpcodesStub(*work->sceneScript) != 2) {
            break;
        }
        if (questIsCompleted(0x6f) != 0 && questIsCompleted(0xd4) != 0 && questIsCompleted(0xd5) != 0) {
            gameFlagSetValue(0x669, 1, 1);
        }
        questCompletionSetTierFlags(NULL);
        const QcDeliveryEvent *events = DAT_0044db24;
        const QcDeliveryEvent *event;
        bool found = false;

        for (u32 i = 0; i < 2; i++) {
            event = &events[i];

            if (work->location != event->location) {
                continue;
            }
            if (event->requiredFlag != 0) {
                if (event->requiredFlag == 0xffff) {
                    if (questIsCompleted(0x65) == 0 || questIsCompleted(0x66) == 0 || questIsCompleted(0x67) == 0) {
                        continue;
                    }
                } else if (gameFlagIsSet(event->requiredFlag) == 0) {
                    continue;
                }
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
            work->step = 9;
        } else {
            work->step = 11;
        }
        break;
    }
    case 9:
        if (screenFadeIsBusy() == 0 && buttonHelpStateIsNot3() != 0) {
            work->state = 16;
            work->step = 0;
        }
        break;
    case 10:
        if (scrRunOpcodesStub(*work->sceneScript) == 2) {
            work->step = 5;
        }
        break;
    }
}

} /* extern "C" */
