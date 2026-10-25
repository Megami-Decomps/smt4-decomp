/* NON_MATCHING: retail's extra clock-value copy is not reproduced by the known output-pointer APIs; failure tails also merge and registers differ. */
#include "shard/W6_W6Match6_CecMessageBox.h"
#include "shard/W6_W6Match1_CriticalSection.h"

extern "C" {
extern CecModuleFlags g_asdCecModuleFlags;
extern CriticalSection g_asdCecMessageBoxCriticalSection;
void moduleStartOnce(void);
s32 nn_cec_CTR_MessageBox_ReadMessageBoxInfo(AsdCecMessageBox* box, CecMessageBoxInfo* info, u32 id);
void FUN_00238f4c(AsdCecMessageBox* box, s32 release);
void FUN_0024ee68(s32 enabled);
void __aeabi_memcpy4(void* destination, const void* source, u32 bytes);
s32 FUN_0023959c(AsdCecMessageBox* box, CecMessageIndexHeader* header,
                  AsdCecMessageId* ids, u32 capacity, s32 kind);
u32 nn_cec_CTR_MessageBox_ReadOutBoxIndex(AsdCecMessageBox* box);
void FUN_002c567c(u64* clock);
void FUN_002ad66c(CecCalendarDate* date, const u64* clock);

s32 asdCecMessageBoxOpen(AsdCecMessageBox* box, u32 id, u32 expectedTag)
{
    CecMessageBoxOpenView* state = (CecMessageBoxOpenView*)box;
    ScopedCriticalLock lock(g_asdCecMessageBoxCriticalSection);
    moduleStartOnce();
    g_asdCecModuleFlags.started = 1;
    state->id = id;

    CecMessageBoxInfo info;
    const s32 infoResult = nn_cec_CTR_MessageBox_ReadMessageBoxInfo(box, &info, id);
    if ((s32)(infoResult & 0x80000000) < 0) {
        state->id = 0;
        FUN_00238f4c(box, 1);
        if (g_asdCecModuleFlags.started != 0) {
            FUN_0024ee68(0);
        }
        return infoResult;
    }
    if (info.tag != expectedTag) {
        state->id = 0;
        FUN_00238f4c(box, 1);
        if (g_asdCecModuleFlags.started != 0) {
            FUN_0024ee68(0);
        }
        return -0x377ef416;
    }

    state->flags0a = 0;
    state->flags0b = 0;
    __aeabi_memcpy4(&state->info, &info, sizeof(info));
    s32 result = FUN_0023959c(box, &state->inbox.header, state->inbox.ids,
                          state->inbox.capacity, ASD_CEC_INBOX);
    if ((s32)(result & 0x80000000) < 0) {
        state->id = 0;
        FUN_00238f4c(box, 1);
        if (g_asdCecModuleFlags.started != 0) {
            FUN_0024ee68(0);
        }
        return result;
    }
    result = FUN_0023959c(box, &state->outbox.header, state->outbox.ids,
                          state->outbox.capacity, ASD_CEC_OUTBOX);
    if ((s32)(result & 0x80000000) < 0) {
        state->id = 0;
        FUN_00238f4c(box, 1);
        if (g_asdCecModuleFlags.started != 0) {
            FUN_0024ee68(0);
        }
        return result;
    }

    nn_cec_CTR_MessageBox_ReadOutBoxIndex(box);
    state->info.infoA = 0;
    state->info.infoB = 0;
    u64 clock;
    FUN_002c567c(&clock);
    CecCalendarDate date;
    FUN_002ad66c(&date, &clock);
    state->info.openedAt = date;
    g_asdCecModuleFlags.open = 1;
    return 0;
}
}
