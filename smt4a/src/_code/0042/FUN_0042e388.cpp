/* NON_MATCHING: 161 lines. The scoped lock, the failure-first arms and the outbox kind tested first give retail's blocks; retail still tests the remove result with `ands #0x80000000; bpl`, keeps 1 (the update flags) in fp and the message bytes in sl, rematerialises the key size per call, and leaves the failed commit write its own epilogue. */
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
    ScopedCriticalLock lock(g_asdCecMessageBoxCriticalSection);
    if (box->id == 0) {
        return 0xc8810bea;
    }
    if (kind == 1) {
        u32 messageBytes = cecMessageBoxGetMessageBytes(box, kind, key);
        s32 result = box->vtbl->remove(box, box->id, 7, kind, key, sizeof(*key));
        if (nnResultIsFailure(result)) {
            if (commit != 0) {
                nn_cec_CTR_MessageBox_WriteBoxInfo(box, 1, &work->outbox.header, work->outbox.ids);
            } else {
                work->beginOutboxUpdate();
            }
        } else {
            if (commit != 0) {
                result = nn_cec_CTR_MessageBox_WriteBoxInfo(box, 1, &work->outbox.header, work->outbox.ids);
                if (nnResultIsFailure(result)) {
                    return result;
                }
            } else {
                work->beginOutboxUpdate();
                work->pendingOutbox.storage.totalBytes -= messageBytes;
                --work->pendingOutbox.count;
            }
            nn::Result closed = box->vtbl->closeBox(box, box->id, key, sizeof(*key), 3);
            if (nnResultIsSuccess(closed)) {
                nn_cec_CTR_MessageBox_ReadOutBoxIndex(box);
            }
        }
        return result;
    }
    u32 messageBytes = cecMessageBoxGetMessageBytes(box, kind, key);
    s32 result = box->vtbl->remove(box, box->id, 6, kind, key, sizeof(*key));
    if (nnResultIsFailure(result)) {
        if (commit != 0) {
            nn_cec_CTR_MessageBox_WriteBoxInfo(box, 0, &work->inbox.header, work->inbox.ids);
        } else {
            work->beginInboxUpdate();
        }
    } else {
        if (commit != 0) {
            result = nn_cec_CTR_MessageBox_WriteBoxInfo(box, 0, &work->inbox.header, work->inbox.ids);
            if (nnResultIsFailure(result)) {
                return result;
            }
        } else {
            work->beginInboxUpdate();
            work->pendingInbox.storage.totalBytes -= messageBytes;
            --work->pendingInbox.count;
        }
    }
    return result;
}
