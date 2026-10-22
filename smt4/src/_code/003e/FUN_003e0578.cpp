/* NON_MATCHING: retail tests the id pointer with cmn and keeps the id slot in r8, copies the id with
 * ldm/stm and places the placeholder-id arm last; armcc here uses adds, ldrd/strd and inline arms */
#include "AsdSDK/Source/Net/Cec/AsdCec.h"

/* The leading part of a CEC message header: the message id at 0x20. */
struct CecMessageIdHeader {
    /* 0x00 */ u8 unk00[0x20];
    /* 0x20 */ u8 messageId[8];
};

/* An 8-byte CEC message id. */
struct CecMessageId {
    /* 0x00 */ u8 bytes[8];
};

extern "C" {

extern const char DAT_004656f1[]; /* placeholder id text used when a message has no header */

const CecMessageIdHeader *nn_cec_CTR_MessageBox_GetMessHeader(AsdCecMessageBox *box, s32 kind,
                                                              u32 index);
void FUN_00238c80(CecMessageId *id, const u8 *bytes);
void FUN_002393a4(CecMessageId *id, const char *text);
s32 rt_memcmp(const void *a, const void *b, u32 size);

/* Reports whether the id equals the expected bytes. */
static bool cecMessageIdEquals(const u8 *expected, CecMessageId id)
{
    return rt_memcmp(expected, &id, sizeof(id)) == 0;
}

/* Returns the index of the message with the given id in the inbox or outbox, or -1. */
s32 FUN_003e0578(AsdCecMessageBox *box, s32 kind, const u8 *messageId)
{
    u32 count = kind == ASD_CEC_INBOX ? box->inboxCount : box->outboxCount;
    u32 i;

    for (i = 0; i < count; i++) {
        const CecMessageIdHeader *header = nn_cec_CTR_MessageBox_GetMessHeader(box, kind, i);
        const u8 *idBytes = header != NULL ? header->messageId : NULL;
        CecMessageId id;

        if (idBytes != NULL) {
            FUN_00238c80(&id, idBytes);
        } else {
            FUN_002393a4(&id, DAT_004656f1);
        }
        if (cecMessageIdEquals(messageId, id)) {
            return i;
        }
    }
    return -1;
}

} /* extern "C" */
