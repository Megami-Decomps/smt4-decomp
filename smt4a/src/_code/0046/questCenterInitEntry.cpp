#include "shard/W6_W6Match7_QuestInteraction.h"
#include "shard/W6_W6Match8_UiResourceParameters.h"

namespace {
struct QuestParameterData {
    u8 first[0x18];
    u8 second[0xa8];
};
struct QuestInitializationWork {
    union {
        QuestInteraction interaction;
        struct {
            u8 unk00[0xc];
            u32 word0c;
            u8 unk10[4];
            u32 word14;
        } initial;
    };
    UiResourceParameters parameters; // 0x1c
    u8 unk03c[0x248];
    u32 resources[12]; // 0x284
    u8 unk2b4[0x118];
    u8 scratch[0x640]; // 0x3cc
    u8 unka0c[0xac];
    u32 wordab8;
    u8 unkabc[0x18];
    u32 wordad4;
    u8 unkad8[0x208];
    u32 wordce0;
    u32 wordce4;
    u8 unkce8[0xc];
    u16 wordcf4;
    u8 statecf6[0x150];
    u8 statee46[0x28];
};
struct QuestDefinitionPrefix {
    u8 unk00[6];
    u8 state;
};
}

extern "C" {
extern const QuestParameterData g_questCenterParameterData;
void FUN_0046ba10(void* context);
void sysMemClear(void* data, u32 size);
u32 asdLoadFileAsyncSimple(const char* path, u32* destination, u32 flags);
void paramsClearPacket(UiResourceParameters*);

void dataTable27Load(u8* state);
void dataTable28Load(u8* state);
void FUN_0031e198();
void messageSetMode(s32 mode);
void qcMainSetMode(s32 mode);
QuestDefinitionPrefix* FUN_001ad9b4(u16 id);
s32 gameFlagEntryGetBit(u32 id, u32 bit);
void FUN_00417e08(u32 id);
void rt_memclr(void* data, u32 size);

void questCenterInitEntry(void* context)
{
    QuestInitializationWork* work = static_cast<QuestInitializationWork*>(context);
    FUN_0046ba10(work);
    work->interaction.flags = 0;
    work->initial.word0c = 0;
    work->initial.word14 = 0;
    for (s32 i = 0; i < 12; ++i) {
        work->resources[i] = 0;
    }
    sysMemClear(work->scratch, sizeof(work->scratch));
    asdLoadFileAsyncSimple("quest_center/common/qc_common.bf", &work->resources[0], 0);
    asdLoadFileAsyncSimple("quest_center/common/qc_common.mbm", &work->resources[1], 0);
    paramsClearPacket(&work->parameters);
    paramsInit(&work->parameters, 0, 0, g_questCenterParameterData.first, 0x18,
               0, 0, 0, 0, g_questCenterParameterData.second, 0xa8);
    dataTable27Load(&work->interaction.entryToken);
    dataTable28Load(&work->interaction.entryToken);
    work->wordad4 = 0;
    work->wordce4 = 0;
    work->wordce0 = 0;
    work->wordab8 = 0;
    work->interaction.scriptActive = 0;
    FUN_0031e198();
    messageSetMode(0);
    qcMainSetMode(0);
    u16 id = 0x15e;
    do {
        const QuestDefinitionPrefix* record = FUN_001ad9b4(id);
        if (record && !record->state && !gameFlagEntryGetBit(id, 1)) {
            FUN_00417e08(id);
        }
    } while (++id < 400);
    rt_memclr(work->statecf6, sizeof(work->statecf6));
    rt_memclr(work->statee46, sizeof(work->statee46));
    work->wordcf4 = 0;
}
} // extern "C"
