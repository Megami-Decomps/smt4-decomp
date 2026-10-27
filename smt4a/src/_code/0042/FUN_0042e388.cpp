/* NON_MATCHING: retail uses different result-bit tests, cached-header copy registers and lock-pointer scheduling. */
#include "nn/cec/MessageBoxCache.h"
#include "shard/W6_W6Match1_CriticalSection.h"
#include "nn/Result.h"

extern "C" {
extern CriticalSection g_asdCecMessageBoxCriticalSection;
nn::Result FUN_00501928(AsdCecMessageBox *box, s32 kind, const u8 *messageId);
CecMessageKeyHeader *nn_cec_CTR_MessageBox_GetMessHeader(AsdCecMessageBox *box, s32 kind, u32 index);
u32 nn_cec_CTR_MessageBox_WriteBoxInfo(MessageBox *box, s32 kind, const void *header, const void *data);
u32 nn_cec_CTR_MessageBox_ReadOutBoxIndex(MessageBox *box);
}

static __inline u32 cecMessageBoxGetMessageBytes(MessageBox *box, s32 kind, const CecMessageKey *key)
{
    nn::Result index = FUN_00501928(reinterpret_cast<AsdCecMessageBox *>(box), kind, key->data);
    if (index != -1) {
        const CecMessageKeyHeader *header = nn_cec_CTR_MessageBox_GetMessHeader(
            reinterpret_cast<AsdCecMessageBox *>(box), kind, index);
        if (header != NULL) {
            return header->messageBytes;
        }
    }
    return 0;
}

/* Remove a message, committing its index immediately or adjusting the deferred cached header. */
extern "C" u32 FUN_0042e388(MessageBox *box, s32 kind, const CecMessageKey *key, s32 commit)
{
    CecMessageBoxCacheView *work = reinterpret_cast<CecMessageBoxCacheView *>(box);
    nn_os_CriticalSection_Enter(&g_asdCecMessageBoxCriticalSection);
    if (box->id == 0) {
        nn_os_CriticalSection_Leave(&g_asdCecMessageBoxCriticalSection);
        return 0xc8810bea;
    }
    u32 result;
    if (kind != 1) {
        nn::Result messageBytes = cecMessageBoxGetMessageBytes(box, kind, key);
        result = box->vtbl->remove(box, box->id, 6, kind, key, sizeof(*key));
        if (nnResultIsSuccess(result)) {
            if (commit != 0) {
                result = nn_cec_CTR_MessageBox_WriteBoxInfo(box, 0, &work->inbox.header, work->inbox.ids);
                if (nnResultIsFailure(result)) {
                    nn_os_CriticalSection_Leave(&g_asdCecMessageBoxCriticalSection);
                    return result;
                }
            } else {
                work->beginInboxUpdate();
                work->pendingInbox.storage.totalBytes -= messageBytes;
                --work->pendingInbox.count;
            }
            nn_os_CriticalSection_Leave(&g_asdCecMessageBoxCriticalSection);
            return result;
        }
        if (commit == 0) {
            work->beginInboxUpdate();
            nn_os_CriticalSection_Leave(&g_asdCecMessageBoxCriticalSection);
            return result;
        }
        nn_cec_CTR_MessageBox_WriteBoxInfo(box, 0, &work->inbox.header, work->inbox.ids);
    } else {
        nn::Result messageBytes = cecMessageBoxGetMessageBytes(box, 1, key);
        result = box->vtbl->remove(box, box->id, 7, 1, key, sizeof(*key));
        if (nnResultIsSuccess(result)) {
            if (commit != 0) {
                result = nn_cec_CTR_MessageBox_WriteBoxInfo(box, 1, &work->outbox.header, work->outbox.ids);
                if (nnResultIsFailure(result)) {
                    nn_os_CriticalSection_Leave(&g_asdCecMessageBoxCriticalSection);
                    return result;
                }
            } else {
                work->beginOutboxUpdate();
                work->pendingOutbox.storage.totalBytes -= messageBytes;
                --work->pendingOutbox.count;
            }
            u32 removed = box->vtbl->closeBox(box, box->id, key, sizeof(*key), 3);
            if (nnResultIsSuccess(removed)) {
                nn_cec_CTR_MessageBox_ReadOutBoxIndex(box);
            }
            nn_os_CriticalSection_Leave(&g_asdCecMessageBoxCriticalSection);
            return result;
        }
        if (commit == 0) {
            work->beginOutboxUpdate();
            nn_os_CriticalSection_Leave(&g_asdCecMessageBoxCriticalSection);
            return result;
        }
        nn_cec_CTR_MessageBox_WriteBoxInfo(box, 1, &work->outbox.header, work->outbox.ids);
    }
    nn_os_CriticalSection_Leave(&g_asdCecMessageBoxCriticalSection);
    return result;
}
