/* NON_MATCHING: slot search/early-exit layout differs (retail keeps the not-found result in one register shared with the failure state store); register allocation of this/pair also differs. */
#include "common.h"

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

struct DevilBase {
    /* 0x00 */ u8 unk00[0x38];
    /* 0x38 */ u8 variant;
};

struct TalkScene {
    /* 0x00 */ u8 unk00[4];
    /* 0x04 */ u8 state;
    /* 0x05 */ u8 unk05[3];
    /* 0x08 */ u32 timer;
    /* 0x0C */ u8 unk0C[4];
    /* 0x10 */ void *sceneData;
    /* 0x14 */ u8 *scene;           /* created lazily */
    /* 0x18 */ void *modelData;
    /* 0x1C */ void *portraitData;
    /* 0x20 */ void *portrait;
    /* 0x24 */ void *portraitFile;
    /* 0x28 */ u8 unk28[4];
    /* 0x2C */ s32 pairIndex;
    /* 0x30 */ s32 slot;
};

extern "C" {
SavedPair *FUN_002613f0(s32 index);
SlotRecordId *gameGetSlotRecord(s32 slot);
s32 recordContainsPairedId(const void *record, u32 id);
s32 loadSlotIsLoaded(u32 index);
u8 *FUN_00275bc8(void *first, void *second);
DevilBase *FUN_00184310(u16 id);
s32 FUN_003316b4(s8 variant);
void textFormatBuffer(char *buffer, const char *format, ...);
void *asdLoadFileSyncDefault(const char *path);
void btlTalkBustUpCreate(void);
void FUN_002c85b0(s32 arg);
void statusDisplayBindUnitRecord(SlotRecordId *record, u32 a, u32 b, u32 c);
void statusPanelSetOpen(s32 open);
s32 soundChannelRequestIfEnabled(s32 a, s32 b, s32 c);
void FUN_0022e774(void);
void buttonHelpSetText(u32 a, u32 color);
void sysPlaySe(u32 id);
extern const char DAT_0052c7c0[];

/* The slot holding the pair's record (and the pair's id or flag), or -1. */
static inline s32 findPairSlot(const SavedPair *pair)
{
    s32 i;
    for (i = 0; i < 24; i++) {
        SlotRecordId *record = gameGetSlotRecord(i);
        if (record != NULL && record->id == pair->recordId) {
            if (i >= 0 && (recordContainsPairedId(record, pair->pairedId) != 0 || pair->flag != 0)) {
                return i;
            }
            break;
        }
    }
    return -1;
}

// Pick the saved slot for the chosen pair; when found and its data is loaded, open the status display.
void FUN_004cbb38(TalkScene *scene)
{
    s32 found = -1;
    if (scene->pairIndex >= 0) {
        found = findPairSlot(FUN_002613f0(scene->pairIndex));
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
        scene->scene = FUN_00275bc8(scene->sceneData, scene->modelData);
        *(u32 *)(scene->scene + 0x108) = 0;
    }
    SavedPair *pair = FUN_002613f0(scene->pairIndex);
    SlotRecordId *record = gameGetSlotRecord(scene->slot);
    char path[64];
    textFormatBuffer(path, DAT_0052c7c0, FUN_003316b4(FUN_00184310(record->id)->variant) + 1);
    scene->portraitFile = asdLoadFileSyncDefault(path);
    scene->portrait = FUN_00275bc8(scene->portraitData, scene->portraitFile);
    btlTalkBustUpCreate();
    FUN_002c85b0(6);
    statusDisplayBindUnitRecord(record, 0, 0, 0);
    statusPanelSetOpen(1);
    soundChannelRequestIfEnabled(0x0100002D, 0, 60);
    FUN_0022e774();
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
