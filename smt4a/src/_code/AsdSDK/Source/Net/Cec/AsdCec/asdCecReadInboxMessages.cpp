/* NON_MATCHING: the stripped debug trace before the message buffer allocation is written; retail 388-byte frame (message/id/out-slot layout), the zero return through the read counter and the end clamp compare order still differ. */
#include "nn/Result.h"
#include "AsdSDK/Source/Net/Cec/AsdCec.h"
#include "AsdSDK/AsdDebug.h"
#include "network/CecControl_AsdCec.h"

extern "C" {
extern AsdCecGlobals g_asdCec;

s32 asdCecMessageBoxOpen(AsdCecMessageBox *box, u32 unk00, u32 unk04);
void FUN_0042f318(AsdCecMessageBox *box, s32 unk);
void FUN_0042e388(AsdCecMessageBox *box, s32 kind, AsdCecMessageId *id);
void _ZN12CecMessageIdC1Ev(AsdCecMessageId *id);
void asdCecMessageGetBody(AsdCecMessage *message, void **body, u32 *bodySize);
void FUN_002e59f8(const void *src, void *dst, u32 size);
u32 asdCecMessageBoxGetMessageSize(AsdCecMessageBox *box, s32 kind, u32 index);
void *asdMemoryAlloc(int heap, int alignClass, int unk08, u32 size, int fromFront);
void asdMemFree(void *block);
s32 nn_cec_CTR_MessageBox_GetMessageId(AsdCecMessageBox *box, AsdCecMessageId *id, s32 kind, u32 index);
s32 nn_cec_CTR_MessageBox_ReadMessage_3579D4(AsdCecMessageBox *box, AsdCecMessage *message, void *buffer, u32 bufferSize, s32 unk, AsdCecMessageId *id);
void nn_cec_CTR_Message_Message_sub_object(AsdCecMessage *message);

/* Reads inbox messages [first, first + count) (clamped to the box) into `out`, one
 * body-sized slot each; optionally deletes them afterwards. Returns how many were read. */
s32 asdCecReadInboxMessages(u32 first, s32 count, u8 *out, s32 deleteRead)
{
    AsdCecMessageBox *box;
    AsdCecMessage message;
    AsdCecMessageId id;
    s32 read = 0;
    s32 result;
    u32 index;
    u32 end;
    u32 size;
    u8 failed;
    void *buffer;
    void *body;
    u32 bodySize;

    box = g_asdCec.cec->box;
    if ((s32)(asdCecMessageBoxOpen(box, g_asdCec.cec->unk00, g_asdCec.cec->unk04) & 0x80000000) < 0) {
        return 0;
    }

    failed = 0;
    end = first + count;
    if (end > box->inboxCount) {
        end = box->inboxCount;
    }
    for (index = first; index < end; index++) {
        _ZN12CecMessageIdC1Ev(&id);
        nn_cec_CTR_MessageBox_GetMessageId(box, &id, ASD_CEC_INBOX, index);
        size = asdCecMessageBoxGetMessageSize(box, ASD_CEC_INBOX, index);
        nn_cec_CTR_Message_Message_sub_object(&message);
        asdDebugTrace("c:\\SMT4F\\SMT4F\\AsdSDK\\Source\\Net\\Cec\\AsdCec.cpp", 1240);
        buffer = asdMemoryAlloc(0x100, 0x100, 0, size, 1);
        result = nn_cec_CTR_MessageBox_ReadMessage_3579D4(box, &message, buffer, size, 0, &id);
        if (nnResultIsFailure(result)) {
            if (result == 0xc8810bea) {
                failed = 1;
            } else if (result != 0xc8a10bf0) {
                failed = 1;
            }
        } else {
            asdCecMessageGetBody(&message, &body, &bodySize);
            FUN_002e59f8(body, out + read * bodySize, bodySize);
            read++;
        }
        asdMemFree(buffer);
    }

    if (failed) {
        FUN_0042f318(box, 0);
    } else if (deleteRead != 0) {
        for (index = end - 1; (s32)first <= (s32)index; index--) {
            _ZN12CecMessageIdC1Ev(&id);
            nn_cec_CTR_MessageBox_GetMessageId(box, &id, ASD_CEC_INBOX, index);
            FUN_0042e388(box, 0, &id);
        }
    }
    asdCecMessageBoxClose(box);
    return read;
}

} /* extern "C" */
