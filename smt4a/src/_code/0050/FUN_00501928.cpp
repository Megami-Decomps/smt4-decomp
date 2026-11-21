/* NON_MATCHING: the branch layout now matches; retail keeps &key in r8 (one more saved register, a 20-byte frame) and copies the key with ldm/stm, this build uses ldrd/strd. */
#include "AsdSDK/Source/Net/Cec/AsdCec.h"
#include "nn/cec/MessageKey.h"

extern "C" {
extern const char DAT_005b4499[];
const CecMessageKeyHeader *nn_cec_CTR_MessageBox_GetMessHeader(AsdCecMessageBox *box, s32 kind, u32 index);
CecMessageKey *releaseOrCopyHandle(CecMessageKey *key, const CecMessageKey *source);
CecMessageKey *releaseOrCopyHandle2(CecMessageKey *key, const char *source);
s32 rt_memcmp(const void *first, const void *second, u32 size);

static bool cecMessageIdEquals(const u8 *expected, CecMessageKey key)
{
    return rt_memcmp(expected, &key, sizeof(key)) == 0;
}

/* Return the index of the message carrying the requested identifier, or -1. */
s32 FUN_00501928(AsdCecMessageBox *box, s32 kind, const u8 *messageId)
{
    u32 count = kind == ASD_CEC_INBOX ? box->inboxCount : box->outboxCount;
    for (u32 index = 0; index < count; ++index) {
        const CecMessageKeyHeader *header = nn_cec_CTR_MessageBox_GetMessHeader(box, kind, index);
        const CecMessageKey *source = header != NULL ? &header->key : NULL;
        CecMessageKey key;
        if (source == NULL) {
            releaseOrCopyHandle2(&key, DAT_005b4499);
        } else {
            releaseOrCopyHandle(&key, source);
        }
        if (cecMessageIdEquals(messageId, key)) {
            return index;
        }
    }
    return -1;
}
}
