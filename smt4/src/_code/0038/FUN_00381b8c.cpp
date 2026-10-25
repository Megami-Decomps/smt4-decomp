/* NON_MATCHING: final selected-quest reset scheduling differs; native draw defaults now reproduce the retail table relocation. */
#include "shard/W6_W6Match8_UiResourceParameters.h"
#include "quest_center/QuestRuntime.h"

struct QuestCenterScreenStateIV {
    u32 flags;
    u8 unk004[8];
    u32 frame;
    u32 unk010;
    u32 state;
    u32 unk018;
    s32 selectedQuest;
    u32 tableControl;
    UiResourceParameters parameters;
    u8 unk044[0x248];
    u32 texts[4];
    u8 unk29c[0x300];
    u32 counter;
    u32 messageFile;
    u32 modelFile;
    u32 resources[7];
    u8 unk5c4[0x108];
    u8 entries[0x640];
    u8 unkd0c[0x34];
    u8 active;
    u8 unkd41[0x4b];
    u32 selection;
    u8 unkd90[0x14];
    u32 pending;
    u8 unkda8[0x208];
    u32 first;
    u32 second;
};
struct QuestCenterDrawDefaultsIV {
    f32 first[6];
    s32 second[42];
};
extern "C" {
const QuestCenterDrawDefaultsIV DAT_004057a8 = {
    {0.0f, 1.0f, 4.0f, 1.0f, 0.0f, 4.0f},
    {-3, 0, -3, 0, 0, -3, 0, -3, 0, -3, -3, 0, -3, 0,
     -1, 0, -1, -1, 0, -1, 0, -3, 0, -3, 1, 0, -3, 0,
     -3, 0, -3, -3, 0, -3, 0, -1, 0, -1, -1, 0, -1, 0}
};
void FUN_003852c8(void);
void memClear(void *buffer, u32 size);
void asdLoadFileAsyncSimple(const char *path, u32 *result, u32 options);
void drawParameterBlockClear(UiResourceParameters *parameters);

void dataTable27Load(u32 *control);
void FUN_00385aec(u32 *control);
void FUN_00385af4(u32 *control);
void asdTMTexTableLoadSprites(u32 table);
void asdTMTexTableLoadEntryAsync(u32 table, s32 entry);
u32 asdTextCreate(u32 options);
void FUN_002637c8(void);
void messageStatesSetFirst(s32 state);
void qcMainSetMode(s32 mode);
const QuestRuntimeDefinition *dataTable1bOr1cGetRecord(u32 id);
s32 questReadRuntimeFlag(u32 id, u32 flag);
void FUN_0028eeb8(u32 id);

// Initialize the quest-center screen resources and enable eligible late quest entries.
void FUN_00381b8c(QuestCenterScreenStateIV *work)
{
    FUN_003852c8();
    work->flags = 0;
    work->frame = 0;
    work->state = 0;
    work->messageFile = 0;
    work->resources[0] = 0;
    work->resources[1] = 0;
    work->resources[2] = 0;
    work->resources[3] = 0;
    work->resources[4] = 0;
    work->resources[5] = 0;
    work->resources[6] = 0;
    work->modelFile = 0;
    memClear(work->entries, sizeof(work->entries));
    asdLoadFileAsyncSimple("quest_center/common/qc_common.bf", &work->messageFile, 0);
    asdLoadFileAsyncSimple("quest_center/common/qc_common.mbm", &work->modelFile, 0);
    drawParameterBlockClear(&work->parameters);
    paramsInit(&work->parameters, 0, 0, DAT_004057a8.first, sizeof(DAT_004057a8.first),
               0, 0, 0, 0, DAT_004057a8.second, sizeof(DAT_004057a8.second));
    dataTable27Load(&work->tableControl);
    FUN_00385aec(&work->tableControl);
    FUN_00385af4(&work->tableControl);
    work->pending = 0;
    work->second = 0;
    work->first = 0;
    work->selection = 0;
    work->selectedQuest = -1;
    work->counter = 0;
    work->active = 0;
    asdTMTexTableLoadSprites(0x31);
    asdTMTexTableLoadEntryAsync(0x31, 0);
    for (u32 index = 0; index < 4; ++index) {
        work->texts[index] = 0;
        work->texts[index] = asdTextCreate(0);
    }
    FUN_002637c8();
    messageStatesSetFirst(0);
    qcMainSetMode(0);
    for (u16 id = 350; id < 400; ++id) {
        const QuestRuntimeDefinition *record = dataTable1bOr1cGetRecord(id);
        if (record != NULL && record->kind == 0 && !questReadRuntimeFlag(id, 1))
            FUN_0028eeb8(id);
    }
}
}
