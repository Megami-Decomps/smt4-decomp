/* NON_MATCHING: retail has a stripped debug call (file/line setup + nop) before the message buffer allocation. */
#include "AsdSDK/Source/Net/Cec/AsdCec.h"

extern "C" {
extern AsdCecGlobals g_asdCec;

void asdCecMessageBoxClose(AsdCecMessageBox *box);
s32 asdCecMessageBoxOpen(AsdCecMessageBox *box, u32 unk00, u32 unk04);
void _ZN12CecMessageIdC1Ev(AsdCecMessageId *id);
void *asdMemFree(void *block);
void *asdMemoryAlloc(int heap, int alignClass, int unk08, u32 size, int fromFront);
void asdCecMessageGetBody(AsdCecMessage *message, void **body, u32 *bodySize);
u32 asdCecMessageBoxGetMessageSize(AsdCecMessageBox *box, s32 kind, u32 index);
s32 nn_cec_CTR_MessageBox_GetMessageId(AsdCecMessageBox *box, AsdCecMessageId *id, s32 kind, u32 index);
s32 nn_cec_CTR_MessageBox_ReadMessage_3579D4(AsdCecMessageBox *box, AsdCecMessage *message, void *buffer, u32 bufferSize, s32 unk, AsdCecMessageId *id);
void nn_cec_CTR_Message_Message_sub_object(AsdCecMessage *message);
void rt_memcpy(void *dst, const void *src, u32 size);

/* Reads message `index` of the outbox into `out`; returns nonzero when the message was read. */
u8 asdCecReadOutboxMessage(u32 index, void *out)
{
    AsdCecMessage message;
    AsdCecMessageId id;
    AsdCecMessageBox *box;
    s32 result;
    u8 ok = 0;
    void *buffer;
    u32 bufferSize;
    void *body;
    u32 bodySize;

    nn_cec_CTR_Message_Message_sub_object(&message);
    _ZN12CecMessageIdC1Ev(&id);
    box = g_asdCec.cec->box;
    result = asdCecMessageBoxOpen(box, g_asdCec.cec->unk00, g_asdCec.cec->unk04);
    if (g_asdCec.cec->box->outboxCount != 0) {
        if ((result & 0x80000000) == 0) {
            box = g_asdCec.cec->box;
            nn_cec_CTR_MessageBox_GetMessageId(box, &id, ASD_CEC_OUTBOX, index);
            bufferSize = asdCecMessageBoxGetMessageSize(g_asdCec.cec->box, ASD_CEC_OUTBOX, index);
            buffer = asdMemoryAlloc(0x100, 0x100, 0, bufferSize, 1);
            result = nn_cec_CTR_MessageBox_ReadMessage_3579D4(g_asdCec.cec->box, &message, buffer, bufferSize, 0, &id);
            ok = result >= 0;
            if (ok) {
                asdCecMessageGetBody(&message, &body, &bodySize);
                rt_memcpy(out, body, bodySize);
            }
            asdMemFree(buffer);
            asdCecMessageBoxClose(g_asdCec.cec->box);
        }
    } else {
        asdCecMessageBoxClose(g_asdCec.cec->box);
    }
    return ok;
}

} /* extern "C" */
