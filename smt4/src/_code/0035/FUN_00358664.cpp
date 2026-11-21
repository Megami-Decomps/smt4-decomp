/* NON_MATCHING: the build hoists &info into an extra saved register (r8), shifting the frame by a word, and
 * its info[0] store keeps view->id from being reused for the reset call (retail loads id and the vtable
 * slot once before choosing the box). */
#include "shard/W6_W6Match6_CecMessageBox.h"
#include "nn/Result.h"
#include "shard/W6_W6Match1_CriticalSection.h"

extern "C" {
extern CriticalSection g_asdCecMessageBoxCriticalSection;
s32 nn_cec_CTR_MessageBox_ReadOutBoxIndex(AsdCecMessageBox *box);
s32 nn_cec_CTR_MessageBox_WriteBoxInfo(AsdCecMessageBox *box, s32 kind, CecMessageIndexHeader *header, AsdCecMessageIndexEntry *ids); // declcheck: local (protos__code.h has only the decompiler's untyped prototype)

// Reset inbox/outbox storage and refresh the corresponding message index under the CEC lock.
nn::Result FUN_00358664(AsdCecMessageBox *box, s32 kind)
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
    if (kind == 1) {
        result = reinterpret_cast<MutationCallbacks *>(box->vtable)->reset(box, view->id, 13, 1, 0);
        if ((s32)(result & 0x80000000) >= 0) {
            reinterpret_cast<MutationCallbacks *>(box->vtable)->read(box, view->id, 13, 8, info);
            nn_cec_CTR_MessageBox_WriteBoxInfo(box, 1, &view->outbox.header, view->outbox.ids);
            s32 refreshResult = reinterpret_cast<MutationCallbacks *>(box->vtable)->refresh(box, view->id, 0, 0, 0);
            if (nnResultIsSuccess(refreshResult))
                nn_cec_CTR_MessageBox_ReadOutBoxIndex(box);
        }
    } else {
        result = reinterpret_cast<MutationCallbacks *>(box->vtable)->reset(box, view->id, 12, kind, 0);
        if ((s32)(result & 0x80000000) >= 0) {
            reinterpret_cast<MutationCallbacks *>(box->vtable)->read(box, view->id, 12, 8, info);
            nn_cec_CTR_MessageBox_WriteBoxInfo(box, 0, &view->inbox.header, view->inbox.ids);
        }
    }
    return result;
}
}
