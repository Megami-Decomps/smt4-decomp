/* NON_MATCHING: only the pair search differs: retail keeps the not-found -1 in a saved register and the matching slot
   index in the loop counter's register (returned directly), the build keeps one result register (r7/r8 swap). */
#include "common.h"
#include "runtime/Stdio.h"
#include "gamedata/NkmBaseRecordA.h"
#include "script/scrScriptProcess.h"

struct SlotRecordId {
    /* 0x00 */ u8 unk00[0x62];
    /* 0x62 */ u16 id;
};

/* A save pair: a record id, an id looked up in the record, and two further values. */
struct SavedPair {
    /* 0x00 */ u16 recordId;
    /* 0x02 */ u16 pairedId;
    /* 0x04 */ u16 unk04;
    /* 0x06 */ u16 flag;
};

struct TalkScene {
    /* 0x00 */ u8 unk00[4];
    /* 0x04 */ u8 state;
    /* 0x05 */ u8 unk05[3];
    /* 0x08 */ u32 timer;
    /* 0x0C */ u8 unk0C[4];
    /* 0x10 */ void *sceneData;
    /* 0x14 */ ScriptProcess *scene;           /* created lazily */
    /* 0x18 */ void *modelData;
    /* 0x1C */ void *portraitData;
    /* 0x20 */ void *portrait;
    /* 0x24 */ void *portraitFile;
    /* 0x28 */ u8 unk28[4];
    /* 0x2C */ s32 pairIndex;
    /* 0x30 */ s32 slot;
};

extern "C" {
SavedPair *saveGetSelectedRecordSlot(s32 index);
SlotRecordId *gameGetSlotRecord(s32 slot);
s32 recordContainsPairedId(const void *record, u32 id);
s32 loadSlotIsLoaded(u32 index);
s32 dataTable25Section0FindById(s8 variant);
void *asdLoadFileSyncDefault(const char *path);
void btlTalkBustUpCreate(void);
void gameGlobalsSetSceneState(s32 arg);
void statusDisplayBindUnitRecord(SlotRecordId *record, u32 a, u32 b, u32 c);
void statusPanelSetOpen(s32 open);
s32 soundChannelRequestIfEnabled(s32 a, s32 b, s32 c);
void statusPanelClose(void);
void buttonHelpSetText(u32 a, u32 color);
void sysPlaySe(u32 id);
void scriptProcessSetMode(ScriptProcess *process, s32 mode); /* a one-instruction setter armlink inlines (inlined.txt) */
extern const char DAT_0052c7c0[];

/* devilGetVoiceCategory's body (inlined.txt: ldrb r0, [r0, #56]): the demon's talk tone. */
static __inline u8 devilGetTalkTone(const NkmBaseRecordA *record)
{
    return record->talkTone;
}

/* The slot holding the pair's record (and the pair's id or flag), or -1. */
static inline s32 findPairSlot(const SavedPair *pair)
{
    s32 result = -1;
    for (s32 i = 0; i < 24; i++) {
        SlotRecordId *record = gameGetSlotRecord(i);
        if (record != NULL && record->id == pair->recordId) {
            if (i >= 0 && (recordContainsPairedId(record, pair->pairedId) != 0 || pair->flag != 0))
                result = i;
            break;
        }
    }
    return result;
}

/* Picks the saved slot for the chosen pair; when found and its data is loaded, opens the status display. */
void FUN_004cbb38(TalkScene *scene)
{
    s32 found = -1;
    if (scene->pairIndex >= 0) {
        found = findPairSlot(saveGetSelectedRecordSlot(scene->pairIndex));
        scene->slot = found;
    }
    if (found < 0) {
        scene->timer = 0;
        scene->state = 7;
        return;
    }
    if (scene->sceneData == NULL || scene->modelData == NULL || scene->portraitData == NULL) {
        return;
    }
    if (loadSlotIsLoaded(20) == 0 || loadSlotIsLoaded(37) == 0 || loadSlotIsLoaded(62) == 0) {
        return;
    }
    if (scene->scene == NULL) {
        scene->scene = scrScriptProcessCreate(scene->sceneData, scene->modelData);
        scriptProcessSetMode(scene->scene, 0);
    }
    SavedPair *pair = saveGetSelectedRecordSlot(scene->pairIndex);
    SlotRecordId *record = gameGetSlotRecord(scene->slot);
    char path[64];
    __2sprintf(path, DAT_0052c7c0, dataTable25Section0FindById(devilGetTalkTone(nkmBaseGetRecord(record->id))) + 1);
    scene->portraitFile = asdLoadFileSyncDefault(path);
    scene->portrait = scrScriptProcessCreate(scene->portraitData, scene->portraitFile);
    btlTalkBustUpCreate();
    gameGlobalsSetSceneState(6);
    statusDisplayBindUnitRecord(record, 0, 0, 0);
    statusPanelSetOpen(1);
    soundChannelRequestIfEnabled(0x0100002D, 0, 60);
    statusPanelClose();
    buttonHelpSetText(0, 0xF4F4F4FF);
    if (pair->pairedId != 0 && pair->unk04 != 0) {
        sysPlaySe(106);
        scene->timer = 0;
        scene->state = 5;
    } else {
        sysPlaySe(108);
        scene->timer = 0;
        scene->state = 6;
    }
}

}
