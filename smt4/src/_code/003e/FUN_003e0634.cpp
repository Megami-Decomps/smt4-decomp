/* NON_MATCHING: retail retains the key-construction address in r8, lays out the two key temporaries in reverse order, and copies with ldm/stm rather than ldrd/strd. */
#include "AsdSDK/Source/Net/Cec/AsdCec.h"
#include "nn/cec/MessageKey.h"

extern "C" {
CecMessageKey *FUN_00238c80(CecMessageKey *destination, const CecMessageKey *source);
CecMessageKey *FUN_002393a4(CecMessageKey *destination, const char *source);
s32 FUN_003e0b90(const CecMessageKey *key, const CecMessageKey *candidate);
CecMessageKeyHeader *nn_cec_CTR_MessageBox_GetMessHeader(AsdCecMessageBox *box, s32 kind, u32 index);
extern const char DAT_004656f1[];

/* Find a message by its eight-byte key in the selected inbox or outbox. */
u32 FUN_003e0634(AsdCecMessageBox *box, s32 kind, const CecMessageKey *key)
{
    u32 count = kind == 0 ? box->inboxCount : box->outboxCount;
    for (u32 index = 0; index < count; ++index) {
        CecMessageKey candidate;
        CecMessageKeyHeader *header = nn_cec_CTR_MessageBox_GetMessHeader(box, kind, index);
        if (header != NULL && (u32)header != 0xffffffe0) {
            FUN_00238c80(&candidate, &header->key);
        } else {
            FUN_002393a4(&candidate, DAT_004656f1);
        }
        CecMessageKey copy = candidate;
        if (FUN_003e0b90(key, &copy) != 0) {
            return index;
        }
    }
    return 0xffffffff;
}
}
