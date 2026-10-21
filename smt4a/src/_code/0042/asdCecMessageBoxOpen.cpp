/* NON_MATCHING: retail's extra clock-value copy is not reproduced by the known output-pointer APIs; failure tails also merge and registers differ. */
#include "shard/W6_W6Match6_CecMessageBox.h"
#include "shard/W6_W6Match1_CriticalSection.h"

extern "C" {
extern CecModuleFlags g_asdCecModuleFlags;
extern CriticalSection g_asdCecMessageBoxCriticalSection;
void moduleStartOnce(void);
s32 FUN_00501b90(AsdCecMessageBox* box, CecMessageBoxInfo* info, u32 id);
void FUN_0042e870(AsdCecMessageBox* box, s32 release);
void FUN_0042d5b4(s32 enabled);
void rt_memcpy_w(void* destination, const void* source, u32 bytes);
s32 FUN_0042d798(AsdCecMessageBox* box, CecMessageIndexHeader* header,
                  AsdCecMessageId* ids, u32 capacity, s32 kind);
u32 nn_cec_CTR_MessageBox_ReadOutBoxIndex(AsdCecMessageBox* box);
void FUN_0030fc80(u64* clock);
void FUN_00193038(CecCalendarDate* date, const u64* clock);

s32 asdCecMessageBoxOpen(AsdCecMessageBox* box, u32 id, u32 expectedTag)
{
    CecMessageBoxOpenView* state = (CecMessageBoxOpenView*)box;
    ScopedCriticalLock lock(g_asdCecMessageBoxCriticalSection);
    moduleStartOnce();
    g_asdCecModuleFlags.started = 1;
    state->id = id;

    CecMessageBoxInfo info;
    const s32 infoResult = FUN_00501b90(box, &info, id);
    if ((s32)(infoResult & 0x80000000) < 0) {
        state->id = 0;
        FUN_0042e870(box, 1);
        if (g_asdCecModuleFlags.started != 0) {
            FUN_0042d5b4(0);
        }
        return infoResult;
    }
    if (info.tag != expectedTag) {
        state->id = 0;
        FUN_0042e870(box, 1);
        if (g_asdCecModuleFlags.started != 0) {
            FUN_0042d5b4(0);
        }
        return -0x377ef416;
    }

    state->flags0a = 0;
    state->flags0b = 0;
    rt_memcpy_w(&state->info, &info, sizeof(info));
    s32 result = FUN_0042d798(box, &state->inbox.header, state->inbox.ids,
                          state->inbox.capacity, ASD_CEC_INBOX);
    if ((s32)(result & 0x80000000) < 0) {
        state->id = 0;
        FUN_0042e870(box, 1);
        if (g_asdCecModuleFlags.started != 0) {
            FUN_0042d5b4(0);
        }
        return result;
    }
    result = FUN_0042d798(box, &state->outbox.header, state->outbox.ids,
                          state->outbox.capacity, ASD_CEC_OUTBOX);
    if ((s32)(result & 0x80000000) < 0) {
        state->id = 0;
        FUN_0042e870(box, 1);
        if (g_asdCecModuleFlags.started != 0) {
            FUN_0042d5b4(0);
        }
        return result;
    }

    nn_cec_CTR_MessageBox_ReadOutBoxIndex(box);
    state->info.infoA = 0;
    state->info.infoB = 0;
    u64 clock;
    FUN_0030fc80(&clock);
    CecCalendarDate date;
    FUN_00193038(&date, &clock);
    state->info.openedAt = date;
    g_asdCecModuleFlags.open = 1;
    return 0;
}
}
