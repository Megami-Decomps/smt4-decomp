/* NON_MATCHING: scoped lock matches retail; the build hoists &info into an extra saved register (r8) and tests Result with a masked compare (retail: ands/bmi), shifting registers and the frame by a word. */
#include "shard/W6_W6Match6_CecMessageBox.h"
#include "nn/Result.h"
#include "shard/W6_W6Match1_CriticalSection.h"

extern "C" {
extern CriticalSection g_asdCecMessageBoxCriticalSection;
s32 nn_cec_CTR_MessageBox_ReadOutBoxIndex(AsdCecMessageBox *box);
s32 nn_cec_CTR_MessageBox_WriteBoxInfo(AsdCecMessageBox *box, s32 kind, CecMessageIndexHeader *header, AsdCecMessageId *ids);

// Reset inbox/outbox storage and refresh the corresponding message index under the CEC lock.
s32 FUN_00358664(AsdCecMessageBox *box, s32 kind)
{
    struct MutationCallbacks {
        void *unk00[2];
        s32 (*read)(AsdCecMessageBox *, u32 id, u32 key, u32 size, void *output);
        void *unk0c[6];
        s32 (*reset)(AsdCecMessageBox *, u32 id, u32 key, s32 kind, u32 value);
        s32 (*refresh)(AsdCecMessageBox *, u32 id, u32 first, u32 second, u32 third);
    };
    CecMessageBoxOpenView *view = reinterpret_cast<CecMessageBoxOpenView *>(box);
    ScopedCriticalLock lock(&g_asdCecMessageBoxCriticalSection);
    if (view->id == 0) {
        return static_cast<s32>(0xc8810bea);
    }
    u32 info[2];
    info[0] = 0;
    s32 result;
    if (kind != 1) {
        result = reinterpret_cast<MutationCallbacks *>(box->vtable)->reset(box, view->id, 12, kind, 0);
        if (nnResultIsSuccess(result)) {
            reinterpret_cast<MutationCallbacks *>(box->vtable)->read(box, view->id, 12, 8, info);
            nn_cec_CTR_MessageBox_WriteBoxInfo(box, 0, &view->inbox.header, view->inbox.ids);
        }
    } else {
        result = reinterpret_cast<MutationCallbacks *>(box->vtable)->reset(box, view->id, 13, 1, 0);
        if (nnResultIsSuccess(result)) {
            reinterpret_cast<MutationCallbacks *>(box->vtable)->read(box, view->id, 13, 8, info);
            nn_cec_CTR_MessageBox_WriteBoxInfo(box, 1, &view->outbox.header, view->outbox.ids);
            s32 refreshResult = reinterpret_cast<MutationCallbacks *>(box->vtable)->refresh(box, view->id, 0, 0, 0);
            if (nnResultIsSuccess(refreshResult))
                nn_cec_CTR_MessageBox_ReadOutBoxIndex(box);
        }
    }
    return result;
}
}
