#include <stdio.h>
#include "camp/CampTalkWork.h"
#include "gamedata/NkmBaseRecordA.h"
#include "gamedata/SaveSlotRecord.h"
#include "script/scrScriptProcess.h"
#include "shard/W6_W6Match8_BattleDebug.h"
#include "shard/W5_W5Match7_SelectedRecord.h"

enum {
    TALK_PAIR_RECORD_ID = 0,
    TALK_PAIR_SKILL_ID = 1,
    TALK_PAIR_SECOND_SKILL_ID = 2,
    TALK_PAIR_ALLOW_MISSING_SKILL = 3
};

extern "C" {
s32 loadSlotIsLoaded(u32 index);
s32 dataTable25Section0FindById(s8 variant);
void *asdLoadFileSyncDefault(const char *path);
void btlTalkBustUpCreate(void);
void gameGlobalsSetSceneState(s32 arg);
void statusDisplayBindUnitRecord(SlotRecordA *record, u32 a, u32 b, u32 c);
void statusPanelSetOpen(s32 open);
s32 soundChannelRequestIfEnabled(s32 a, s32 b, s32 c);
void statusPanelClose(void);
void buttonHelpSetText(u32 a, u32 color);
void sysPlaySe(u32 id);
static const char s_devilMessagePathFormat[] = "battle/DevilMsg/%s.mbm";

/* devilGetVoiceCategory's body (inlined.txt: ldrb r0, [r0, #56]): the demon's talk tone. */
static __inline u8 devilGetTalkTone(const NkmBaseRecordA *record)
{
    return record->talkTone;
}

/* The slot holding the pair's record (and the pair's id or flag), or -1. */
static __inline s32 findPairSlot(const SelectedRecord *pair)
{
    SlotRecordA *record = NULL;
    s32 slot = 0;
    bool found = false;
    for (; slot < 24; ++slot) {
        record = gameGetSlotRecord(slot);
        if (record != NULL && record->id == pair->values[TALK_PAIR_RECORD_ID]) {
            found = true;
            break;
        }
    }
    if (!found) {
        return -1;
    }
    if (slot < 0 || (recordContainsPairedId((const PairedIdList *)record, pair->values[TALK_PAIR_SKILL_ID]) == 0 &&
                    pair->values[TALK_PAIR_ALLOW_MISSING_SKILL] == 0)) {
        return -1;
    }
    return slot;
}

/* Picks the saved slot for the chosen pair; when found and its data is loaded, opens the status display. */
void campTalkOpenPairStatus(CampTalkWork *scene)
{
    s32 found = -1;
    if (scene->firstSelection >= 0) {
        found = scene->selectedSlot = findPairSlot(saveGetSelectedRecordSlot(scene->firstSelection));
    }
    if (found < 0) {
        scene->step = 0;
        scene->workflowState = 7;
        return;
    }
    if (scene->resultScript == NULL || scene->resultMessages == NULL || scene->levelUpScript == NULL) {
        return;
    }
    if (loadSlotIsLoaded(20) == 0 || loadSlotIsLoaded(37) == 0 || loadSlotIsLoaded(62) == 0) {
        return;
    }
    if (scene->scriptProcess == NULL) {
        scene->scriptProcess = scrScriptProcessCreate(scene->resultScript, scene->resultMessages);
        scriptProcessSetMode(scene->scriptProcess, 0);
    }
    const SelectedRecord *pair = saveGetSelectedRecordSlot(scene->firstSelection);
    SlotRecordA *record = gameGetSlotRecord(scene->selectedSlot);
    char path[64];
    sprintf(path, s_devilMessagePathFormat, dataTable25Section0FindById(devilGetTalkTone(nkmBaseGetRecord(record->id))) + 1);
    scene->portraitFile = asdLoadFileSyncDefault(path);
    scene->levelUpProcess = scrScriptProcessCreate(scene->levelUpScript, scene->portraitFile);
    btlTalkBustUpCreate();
    gameGlobalsSetSceneState(6);
    statusDisplayBindUnitRecord(record, 0, 0, 0);
    statusPanelSetOpen(1);
    soundChannelRequestIfEnabled(0x0100002D, 0, 60);
    statusPanelClose();
    buttonHelpSetText(0, 0xF4F4F4FF);
    if (pair->values[TALK_PAIR_SKILL_ID] != 0 && pair->values[TALK_PAIR_SECOND_SKILL_ID] != 0) {
        sysPlaySe(106);
        scene->step = 0;
        scene->workflowState = 5;
    } else {
        sysPlaySe(108);
        scene->step = 0;
        scene->workflowState = 6;
    }
}

} /* extern "C" */
