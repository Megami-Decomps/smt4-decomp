#include "common.h"
#include "script/ScriptArgs.h"
#include "gamedata/MapSaveBlock.h"
#include "quest_center/QuestRecord.h"
#include "quest_center/QuestDelivery.h"
#include "quest_center/qcMain.h"
#include "result/ResultSpoils.h"
#include "shard/GameOptions.h"
#include "addon/LookupRecord.h"
#include "ui/MessageMain.h"
#include "code/Code0028_Smt4.h"
#include "camp/ButtonHelp/ButtonHelp.h"
#include "shard/W6_W6Match5_DevilSort.h"

extern "C" {

void scrWorkSetValue(s32 index, u32 value);
u32 scrWorkGetValue(s32 index);
void *fileSlotGetBuffer(u32 id);
u32 goalConditionsSatisfied(u32 id);
u32 btlTalkBustUpIsIdle(void);
void eventTexSetFlag(s32 flag);
void bustupCutAnimSetFlag(u8 value);
bool btlTalkBustUpExists(void);
u32 btlTalkBustUpGetId(void);
void btlTalkBustUpSetUnk2F4(u8 value);
void btlTalkBustUpCreate(void);
void btlTalkBustUpSetDemonTexture(s32 devilId, s32 asynchronous);
void messageSlotSet(s32 value);
void resultCreate(u8 kind);
void scrResultStopJobAndReleaseUi(void);
u16 rosterGetLeaderId(void); // declcheck: local (its headers belong to the sound and shard units)
int FUN_00333a38(u32 id, int checkFlag);
void FUN_00333af8(u32 area, u16 *out, s32 onlyActive);
u8 questDeactivate(u32 id);
u32 gameFlagEntryResetIfActive(u32 index);
GameOptions *gameGetSupportUnitData(void); // declcheck: local (GameDataAccess.h returns it as an int)
u8 *gameGetPlayerName(void); // declcheck: local (GameDataAccess.h comes with the int gameGetSupportUnitData)
u8 *dataFindKindRecordWithAocOverrides(u32 id, int payload);
char *libc_strcpy(char *dst, const char *src); // declcheck: local (the shared one takes unsigned int pointers)
void textEncodeFontSlot(s32 slot, const u8 *text); // declcheck: local (declared in the sound system's header)
void FUN_0029ede8(s32 index, u32 first, u32 second, u32 third); // declcheck: local (declared in the compendium's header)
void messageSetConfirmDisplayMode(void);
s32 messageForwardDefaultMode(const void *messages, s32 message, s32 frame, s32 mode, s32 option);
u32 messageMainGetChoiceResult(void);
void uiBindRecordRewardText(u32 id, s32 showRewards, s32 description);
void *asdOperatorNewC(u32 size);
void asdMemFreeIfNotNull(void *block);

/* Script command: hands in quest `arg 0`. The first frame checks the quest's goals (result 0 when
 * they are not met) and picks the first step; the following frames run it from work value 0:
 *   2-3  ask for each requirement in turn (work value 2), 4 answers "no" (result 2),
 *   5    thanks the player once everything was taken,
 *   0-1  pay the rewards on the result screen, restoring the portrait afterwards,
 *   7    announce each quest the delivery unlocked (work value 3 of work value 2).
 * Returns 1 when the command is over; the result is 1 once the quest is closed. */
u32 scrComm_Quest_UpdateObjective(void)
{
    u16 questId = scrGetArg(0);

    if (scrGetCommandFrame() == 0) {
        scrWorkSetValue(0, 0);

        QuestRecord *record = questDataGetRecord(questId);

        if (goalConditionsSatisfied(questId) != 0) {
            if (record->kind == 0) {
                scrWorkSetValue(0, 2);
                scrWorkSetValue(1, 0);
                scrWorkSetValue(2, 0);
                if (record->kind == 0) {
                    MapSaveBlock *map = gameGetMapBlock();

                    FUN_0028784c(questId, 0);
                    map->completedItem = 0;
                    map->progressedItem = 0;
                }
            } else if (record->kind == 4) {
                scrWorkSetValue(0, 2);
                scrWorkSetValue(1, 0);
                scrWorkSetValue(2, 0);
            } else {
                scrWorkSetValue(0, 0);
            }
            return 0;
        }
        scrSetResult(0);
        return 1;
    }

    void *messages = fileSlotGetBuffer(0x1e);
    QuestRecord *record = questDataGetRecord(questId);
    s32 finished = 1;

    switch (scrWorkGetValue(0)) {
    case 0:
        if (btlTalkBustUpIsIdle() == 0) {
            eventTexSetFlag(0);
            bustupCutAnimSetFlag(0);
            if (btlTalkBustUpExists()) {
                scrWorkSetValue(2, btlTalkBustUpGetId());
            } else {
                scrWorkSetValue(2, (u32)-1);
            }
            btlTalkBustUpSetUnk2F4(0);
            scrWorkSetValue(3, 0);
            scrCommMessageSetMode(1);
            resultCreate(1);

            ResultSpoils spoils;

            questBuildRewardSpoils(&spoils, questId);
            resultApplySpoils(&spoils);
            scrWorkSetValue(0, 1);
        }
        finished = 0;
        break;
    case 1: {
        if (resultIsIdle() == 0) {
            finished = 0;
            break;
        }
        scrResultStopJobAndReleaseUi();
        scrCommMessageSetMode(-1);
        messageSlotSet(0);
        buttonHelpSetPreset(0x90);
        scrWorkGetValue(3);
        eventTexSetFlag(1);
        bustupCutAnimSetFlag(1);

        s32 portrait = scrWorkGetValue(2);

        if (portrait >= 0) {
            if (!btlTalkBustUpExists()) {
                btlTalkBustUpCreate();
            }
            if (portrait != 0 && btlTalkBustUpGetId() != portrait) {
                btlTalkBustUpSetDemonTexture((u16)portrait, 0);
            }
            btlTalkBustUpSetUnk2F4(1);
        }
        if (rosterHasLeader() != 0 && rosterGetLeaderId() == questId) {
            FUN_002900d0();

            s32 unlocked = FUN_00333a38(questId, 1);

            if (unlocked != 0) {
                scrWorkSetValue(0, 7);
                scrWorkSetValue(2, unlocked);
                scrWorkSetValue(3, 0);
                finished = 0;
            }
        }
        break;
    }
    case 2: {
        s32 index = scrWorkGetValue(2);
        s32 message = 9;
        char name[64];

        if (record->kind == 4) {
            message = 8;
            libc_strcpy(name, (const char *)dataTable01FindByIdWithAoc(gameGetSupportUnitData()->unk46));
            textEncodeFontSlot(0, (const u8 *)name);
            FUN_0029ede8(0x18, record->requirements[index].count, (u32)-1, 0);
        } else {
            switch (record->requirements[index].kind) {
            case 1:
                if (record->requirements[index].count == 1) {
                    message = 8;
                }
                libc_strcpy(name, (const char *)dataFindKindRecordWithAocOverrides(record->requirements[index].id, 1));
                textEncodeFontSlot(0, (const u8 *)name);
                FUN_0029ede8(0x18, record->requirements[index].count, (u32)-1, 0);
                break;
            case 2:
                message = 10;
                libc_strcpy(name, (const char *)dataTable01FindByIdWithAoc(record->requirements[index].id));
                textEncodeFontSlot(8, (const u8 *)name);
                FUN_0029ede8(0x18, record->requirements[index].count, (u32)-1, 0);
                break;
            }
        }
        messageSetConfirmDisplayMode();
        messageForwardDefaultMode(messages, message, 0, 6, 1);
        scrWorkSetValue(1, 0);
        scrWorkSetValue(0, 3);
        finished = 0;
        break;
    }
    case 3: {
        messageSetConfirmDisplayMode();
        FUN_001a1648();

        s32 done = messageForwardDefaultMode(messages, 11, scrWorkGetValue(1), 11, 0);

        scrWorkSetValue(1, scrWorkGetValue(1) + 1);
        finished = 0;
        if (done != 1) {
            break;
        }
        if (messageMainGetChoiceResult() != 0) {
            scrWorkSetValue(1, 0);
            scrWorkSetValue(0, 4);
            break;
        }

        s32 next = scrWorkGetValue(2) + 1;

        scrWorkSetValue(2, next);
        if (record->kind == 4) {
            scrWorkSetValue(0, 0);
        } else if (record->kind == 0) {
            if (next < 6 && record->requirements[next].kind != 0) {
                scrWorkSetValue(0, 2);
                break;
            }
            questTakeRequirements(record);
            scrWorkSetValue(1, 0);
            scrWorkSetValue(0, 5);
        }
        break;
    }
    case 4: {
        messageSetConfirmDisplayMode();

        s32 done = messageForwardDefaultMode(messages, 12, scrWorkGetValue(1), 6, 0);

        scrWorkSetValue(1, scrWorkGetValue(1) + 1);
        if (done == 1) {
            scrSetResult(2);
            return 1;
        }
        finished = 0;
        break;
    }
    case 5: {
        s32 message = 0x3a;
        s32 taken = scrWorkGetValue(2);
        char name[64];

        libc_strcpy(name, (const char *)gameGetPlayerName());
        textEncodeFontSlot(0, (const u8 *)name);
        if (taken > 1) {
            message = 0x3b;
        }
        messageSetConfirmDisplayMode();

        s32 done = messageForwardDefaultMode(messages, message, scrWorkGetValue(1), 6, 0);

        scrWorkSetValue(1, scrWorkGetValue(1) + 1);
        if (done == 1) {
            scrWorkSetValue(1, 0);
            scrWorkSetValue(0, 0);
        }
        finished = 0;
        break;
    }
    case 7: {
        s32 index = scrWorkGetValue(3);
        s32 count = scrWorkGetValue(2);
        u16 *unlocked = (u16 *)asdOperatorNewC(count * sizeof(u16));

        FUN_00333af8(questId, unlocked, 1);
        uiBindRecordRewardText(unlocked[index], 0, 1);
        messageSetConfirmDisplayMode();

        s32 done = messageForwardDefaultMode(messages, 16, scrWorkGetValue(1), 6, 0);

        scrWorkSetValue(1, scrWorkGetValue(1) + 1);
        if (done == 1) {
            gameFlagEntryResetIfActive(unlocked[index]);
            index++;
            if (index < count) {
                scrWorkSetValue(1, 0);
                scrWorkSetValue(3, index);
            } else {
                scrWorkSetValue(1, 0);
                scrWorkSetValue(2, 0);
                scrWorkSetValue(3, 0);
                asdMemFreeIfNotNull(unlocked);
                break;
            }
        }
        asdMemFreeIfNotNull(unlocked);
        finished = 0;
        break;
    }
    }
    if (finished) {
        questDeactivate(questId);
        scrSetResult(1);
        return 1;
    }
    return 0;
}

} /* extern "C" */
