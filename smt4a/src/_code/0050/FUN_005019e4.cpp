/* NON_MATCHING: retail preserves the construction address and copies message-key words with LDM/STM; source uses LDRD/STRD. */
#include "AsdSDK/Source/Net/Cec/AsdCec.h"
#include "nn/cec/MessageKey.h"

extern "C" {
CecMessageKey *releaseOrCopyHandle(CecMessageKey *destination, const CecMessageKey *source);
CecMessageKey *releaseOrCopyHandle2(CecMessageKey *destination, const char *source);
s32 FUN_00501f78(const CecMessageKey *key, const CecMessageKey *candidate);
CecMessageKeyHeader *nn_cec_CTR_MessageBox_GetMessHeader(AsdCecMessageBox *box, s32 kind, u32 index);
extern const char DAT_005b4499[];

/* Find a message by its eight-byte key in the selected inbox or outbox. */
u32 FUN_005019e4(AsdCecMessageBox *box, s32 kind, const CecMessageKey *key)
{
    u32 count = kind == 0 ? box->inboxCount : box->outboxCount;
    for (u32 index = 0; index < count; ++index) {
        CecMessageKey candidate;
        CecMessageKeyHeader *header = nn_cec_CTR_MessageBox_GetMessHeader(box, kind, index);
        if (header != NULL && (u32)header != 0xffffffe0) {
            releaseOrCopyHandle(&candidate, &header->key);
        } else {
            releaseOrCopyHandle2(&candidate, DAT_005b4499);
        }
        CecMessageKey copy = candidate;
        if (FUN_00501f78(key, &copy) != 0) {
            return index;
        }
    }
    return 0xffffffff;
}
}
