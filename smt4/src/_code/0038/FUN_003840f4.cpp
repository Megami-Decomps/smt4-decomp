/* NON_MATCHING: sets up the quest counter scene (area models, talk work, message files); written from the decompilation and the retail disassembly, the string pool order and local table copy not compared with retail */
#include "shard/W6_W6Match3_NodeEnable.h"
#include "classes/FloatState.h"
#include <new>
struct Mover;

struct QuestModelState {
    /* 0x000 */ u8 unk000[0x1F6];
    /* 0x1F6 */ u8 visible;
};

struct QuestModelBody {
    /* 0x00 */ u8 unk00[0x2C];
    /* 0x2C */ QuestModelState *state;
};

struct QuestModel {
    /* 0x00 */ u32 flags;
    /* 0x04 */ u8 unk04[4];
    /* 0x08 */ QuestModelBody *body;
};

struct QuestTalkWork {
    /* 0x000 */ u8 unk000[0x4CC];
    /* 0x4CC */ FloatState state;
    /* 0x52C */ u8 unk52C[0x17F0 - 0x4CC - sizeof(FloatState)];
};

/* The quest counter scene. */
struct QuestCounterScene {
    /* 0x000 */ u8 unk000[0x10];
    /* 0x010 */ s8 questId;
    /* 0x011 */ u8 unk11;
    /* 0x012 */ u8 unk12[6];
    /* 0x018 */ u8 area;              /* 0 k2 pub, 1 hunter company, 2 law, 3 chaos */
    /* 0x019 */ u8 unk19[8];
    /* 0x021 */ u8 mode;
    /* 0x022 */ u8 unk22[0x58A];
    /* 0x5AC */ u32 messageFile;
    /* 0x5B0 */ u32 messageTable;
    /* 0x5B4 */ u8 unk5B4[0x75C];
    /* 0xD10 */ QuestModel *npcModels[6];
    /* 0xD28 */ QuestModel *npcModelsAdd[6];
    /* 0xD40 */ u8 unkD40[4];
    /* 0xD44 */ f32 unkD44;
    /* 0xD48 */ u8 unkD48[0x264];
    /* 0xFAC */ QuestTalkWork *talk;
    /* 0xFB0 */ u8 unkFB0[8];
    /* 0xFB8 */ QuestModel *background;
};

#define QUEST_AREA_K2 0
#define QUEST_AREA_HUNTER 1
#define QUEST_AREA_LAW 2
#define QUEST_AREA_CHAOS 3
#define QUEST_NPC_COUNT 6
#define QUEST_MODE_BACKGROUND 2

extern "C" {
void nodeOwnerSetEnabled(NodeEnableOwner *owner, s32 enabled);
void *asdOperatorNew(u32 size, u32 alignment);
void memClear(void *block, u32 size);
void textFormatBuffer(char *out, const char *format, ...);
QuestModel *asdMdlManagerCreateLoaded(const char *path, s32 flags);
void FUN_002a0428(QuestModel *model, s32 flag);
void FUN_002a09b4(const char *path, s32 flag);
void modelSetAnimationChannels(QuestModel *model, s32 channels);
void animOwnerSetScale(QuestModel *model, f32 scale);
void FUN_002e1230(QuestModel *model, s32 flag);
void FUN_00235250(Mover *mover);
void FUN_00234f5c(QuestTalkWork *talk, const char *name, s32 flag);
void asdLoadFileAsyncSimple(const char *path, u32 *handle, s32 flags);
void FUN_00287704(u32 area);
s32 timerStampIsExpired(void);
void sysResetTimestampState(void);
s32 storyModeCanProceed(u8 area);
void FUN_00287528(s32 flag);
void FUN_00282bfc(s32 slot, s32 value);
void gameCounterAddSaturating(s32 counter, s32 amount);

void FUN_003840f4(QuestCounterScene *scene, s32 questId, u8 unused, u8 mode)
{
    static const char *const areaNames[4] = {
        "quest_center/bg/k2_pub/k2_pub",
        "quest_center/bg/hunter_company/hunter_company",
        "quest_center/bg/hunter_company_law/hunter_company_law",
        "quest_center/bg/hunter_company_chaos/hunter_company_chaos",
    };

    scene->questId = (s8)questId;
    scene->unk11 = unused;
    scene->mode = mode;
    switch (scene->questId) {
    case 1:
        scene->area = QUEST_AREA_K2;
        break;
    case 9:
        scene->area = QUEST_AREA_LAW;
        break;
    case 10:
    case 11:
    case 12:
    case 13:
        scene->area = QUEST_AREA_CHAOS;
        break;
    default:
        scene->area = QUEST_AREA_HUNTER;
        break;
    }

    char path[144];
    for (u32 i = 0; i < QUEST_NPC_COUNT; i++) {
        textFormatBuffer(path, "%s_npc%d.bam", areaNames[scene->area], i + 1);
        scene->npcModels[i] = asdMdlManagerCreateLoaded(path, 7);
        FUN_002a0428(scene->npcModels[i], 1);
        modelSetAnimationChannels(scene->npcModels[i], 0);
        animOwnerSetScale(scene->npcModels[i], 0.0f);
        FUN_002e1230(scene->npcModels[i], 0);

        textFormatBuffer(path, "%s_npc%d_add1.bam", areaNames[scene->area], i + 1);
        scene->npcModelsAdd[i] = asdMdlManagerCreateLoaded(path, 7);
        FUN_002a0428(scene->npcModelsAdd[i], 1);
        modelSetAnimationChannels(scene->npcModelsAdd[i], 0);
        animOwnerSetScale(scene->npcModelsAdd[i], 1.0f);
        FUN_002e1230(scene->npcModels[i], 1);
        QuestModel *model = scene->npcModelsAdd[i];
        model->flags |= 2;
        model->body->state->visible = 0;
    }
    scene->unkD44 = 30.0f;

    if (scene->mode == QUEST_MODE_BACKGROUND) {
        textFormatBuffer(path, "%s.bam", areaNames[scene->area]);
        scene->background = asdMdlManagerCreateLoaded(path, 7);
        FUN_002a0428(scene->background, 1);
        textFormatBuffer(path, "%s.bcenv", areaNames[scene->area]);
        FUN_002a09b4(path, 0);
    }

    QuestTalkWork *talk = static_cast<QuestTalkWork *>(asdOperatorNew(0x17F0, 0));
    if (talk != NULL) {
        memClear(talk, 0x17F0);
        new (&talk->state) FloatState();
    }
    scene->talk = talk;
    FUN_00235250(reinterpret_cast<Mover *>(talk));
    FUN_00234f5c(scene->talk, areaNames[scene->area], 0);
    nodeOwnerSetEnabled(reinterpret_cast<NodeEnableOwner *>(scene->talk), 0);

    char fileName[64];
    char tableName[64];
    textFormatBuffer(fileName, "quest_center/center/center%02d.bf", scene->questId);
    textFormatBuffer(tableName, "quest_center/center/center%02d.mbm", scene->questId);
    asdLoadFileAsyncSimple(fileName, &scene->messageFile, 0);
    asdLoadFileAsyncSimple(tableName, &scene->messageTable, 0);

    if (scene->area != QUEST_AREA_LAW && scene->area != QUEST_AREA_CHAOS) {
        FUN_00287704(scene->area);
        if (timerStampIsExpired() != 0) {
            FUN_00287704(scene->area);
            sysResetTimestampState();
        }
    }
    if (storyModeCanProceed(scene->area) != 0)
        FUN_00287528(0);
    FUN_00282bfc(0, 0xFF);
    FUN_00282bfc(1, 0xFF);
    gameCounterAddSaturating(0x1C, 1);
}

} /* extern "C" */
