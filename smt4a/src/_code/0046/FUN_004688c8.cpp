/* NON_MATCHING: armcc keeps an extra address of the selected quest in r8 during reward
 * processing. The resulting stack frame and literal-pool positions differ from retail. */
#include "camp/RenderCtx.h"
#include "classes/Obj5333c0.h"
#include "code/Code001b.h"
#include "gamedata/GameDataAccess.h"
#include "gamedata/GameFlags.h"
#include "result/ResultSpoils.h"
#include "script/scrScriptProcess.h"
#include "shard/W5_W5Match7_UiQuest.h"
#include "shard/W6_W6Match3_BtlCombatantEntryA.h"
#include "shard/W6_W6Match6_ItemIcon.h"
#include "sys/FlagWord.h"
#include "test/BustupViewer.h"
#include "ui/UiControl.h"

extern "C" {
void sysPlaySe(u32 id);
void buttonHelpSetText(const s8 *text, u32 color);
u8 idIsAtLeast350(u32 id);
s32 goalConditionsSatisfied(s32 id);
void resultCreate(s32 mode);
void uiQuestCreate(void);
void uiQuestClose(void);
void uniteReleaseExit(void);
u8 stateHolder4IsD(void);
u8 FUN_002a746c(void);
u16 FUN_0031f8cc(void);
void FUN_003dec50(void);
u8 FUN_00417a60(u32 id);
u32 FUN_00417e08(u16 id);
void flagValueSub(s32 id, u32 amount);
u32 FUN_004d0d70(u32 slot);
u32 screenFadeIsBusy(void);
}

// Look for a ready delivery quest, prompt for it, apply the requirements and rewards, then reopen the list.
extern "C" void FUN_004688c8(Obj5333c0 *scene)
{
    typedef char DeliveryFieldsCheck[offsetof(Obj5333c0, location) == 0x18 &&
        offsetof(Obj5333c0, script) == 0x2B4 && offsetof(Obj5333c0, deliveryQuest) == 0xA0C ? 1 : -1];
    switch (scene->substate) {
    case 0:
    case 11: {
        bool found = false;
        for (u16 id = 0; id < 400; ++id) {
            const QuestRecordA *record = questDataGetRecord(id);
            if (record == NULL || record->kind != 0 || !gameFlagEntryGetBit(id, 1))
                continue;
            u16 kind = record->filterKind;
            if (idIsAtLeast350(id) == 0 && kind != 0) {
                switch (kind) {
                case 1:
                    if (scene->location != 0)
                        continue;
                    break;
                case 2:
                case 3:
                case 4:
                case 5:
                case 6:
                case 7:
                case 8:
                case 14:
                    if (scene->location != 1)
                        continue;
                    break;
                case 9:
                    if (scene->location != 2)
                        continue;
                    break;
                case 10:
                case 11:
                case 12:
                case 13:
                    if (scene->location != 3)
                        continue;
                    break;
                default:
                    continue;
                }
            }
            if (goalConditionsSatisfied(id)) {
                found = true;
                break;
            }
        }
        if (found) {
            if (scene->substate == 11) {
                uiQuestCreate();
                stateHolder4Request(scene->kind);
                scene->substate = 3;
            } else {
                sysPlaySe(0xA5);
                buttonHelpSetText(NULL, 0xF4F4F4FF);
                messageSetMode(1);
                pickObjStart(scene, "qc_DeliveryStart");
                ++scene->substate;
            }
            return;
        }
        if (scene->substate == 11) {
            scene->startState(5);
            return;
        }
        sysPlaySe(0xA5);
        pickObjStart(scene, "qc_DeliveryNG");
        scene->substate = 10;
        break;
    }
    case 1:
        if (scrRunOpcodesStub(*scene->script) != 2)
            break;
        ++scene->substate;
        // The opening script has finished; open the quest menu now.
    case 2:
        uiQuestCreate();
        stateHolder4Request(scene->kind);
        ++scene->substate;
        break;
    case 3:
        if (stateHolder4IsD()) {
            scene->deliveryQuest = FUN_0031f8cc();
            scene->substate = 4;
            stateHolder4Request(scene->kind);
            sysPlaySe(0xA5);
        }
        if (FUN_002a746c()) {
            uiQuestClose();
            scene->substate = 5;
        }
        break;
    case 4:
        if (FUN_002a746c()) {
            uiQuestClose();
            flagWordClear(&scene->flags, 0x20);
            pickObjStart(scene, "qc_DeliveryItem");
            scene->substate = 6;
        }
        break;
    case 5:
        flagWordClear(&scene->flags, 0x20);
        scene->startState(5);
        messageSetMode(0);
        break;
    case 6:
        if (scrRunOpcodesStub(*scene->script) != 2)
            break;
        if (scene->flags & 0x10000) {
            const QuestRecordA *record = questDataGetRecord(scene->deliveryQuestId());
            for (s32 i = 0; i < 4; ++i) {
                const u16 kind = record->requirements[i].kind;
                if (kind == 1)
                    flagValueSub(record->requirements[i].id, record->requirements[i].count);
                else if (kind == 2)
                    FUN_004d0d70(partyFindSlotById(record->requirements[i].id));
            }
            for (s32 i = 0; i < 3; ++i) {
                if (u16 flag = record->setFlags[i])
                    gameFlagSetValue(flag, 1, 1);
                if (u16 flag = record->clearFlags[i])
                    gameFlagSetValue(flag, 0, 1);
            }
            resultCreate(1);
            ResultSpoilsA spoils;
            FUN_003df168(&spoils, scene->deliveryQuestId());
            FUN_00331714(&spoils);
            if (table1bOr1cGetRecordValue(scene->deliveryQuestId()) == 0)
                FUN_00417e08(scene->deliveryQuestId());
            scene->substate = 7;
        } else {
            scene->substate = 11;
        }
        return;
    case 7:
        if (engineCleanupIsDone()) {
            uniteReleaseExit();
            messageSetScriptDisplayMode();
            FUN_00417a60(scene->deliveryQuestId());
            FUN_003dec50();
            sysPlaySe(0xA5);
            pickObjStart(scene, "qc_QuestClear");
            scene->substate = 8;
        }
        break;
    case 8:
        if (scrRunOpcodesStub(*scene->script) == 2) {
            scene->substate = 11;
            messageSetMode(0);
        }
        break;
    case 9:
        if (!screenFadeIsBusy() && buttonHelpStateIsNot3())
            scene->startState(18);
        break;
    case 10:
        if (scrRunOpcodesStub(*scene->script) == 2)
            scene->substate = 5;
        break;
    }
}
