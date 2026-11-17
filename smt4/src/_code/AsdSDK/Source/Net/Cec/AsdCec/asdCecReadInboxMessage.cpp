/* NON_MATCHING: only the frame size differs (retail 376, here 384): the local message id is 8 bytes in retail (id at sp+368 ends the frame),
 * while AsdCecMessageId is declared 12 bytes to fit the message box's index entries. */
#include "nn/Result.h"
#include "AsdSDK/AsdDebug.h"
#include "AsdSDK/Source/Net/Cec/AsdCec.h"
#include "network/CecControl_AsdCec.h"

extern "C" {
extern AsdCecGlobals g_asdCec;

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

/* Reads message `index` of the inbox into `out`; returns nonzero when the message was read. */
u8 asdCecReadInboxMessage(u32 index, void *out)
{
    AsdCecMessage message;
    AsdCecMessageId id;
    AsdCecMessageBox *box;
    s32 result;
    u8 ok = 0;
    void *buffer;
    u32 bufferSize;

    nn_cec_CTR_Message_Message_sub_object(&message);
    _ZN12CecMessageIdC1Ev(&id);
    result = asdCecMessageBoxOpen(g_asdCec.cec->box, g_asdCec.cec->unk00, g_asdCec.cec->unk04);
    u8 opened = 1;
    if ((s32)(result & 0x80000000) < 0) {
        opened = 0;
    }
    if (!(g_asdCec.cec->box->inboxCount != 0)) {
        asdCecMessageBoxClose(g_asdCec.cec->box);
    } else {
        if (opened) {
            box = g_asdCec.cec->box;
            nn_cec_CTR_MessageBox_GetMessageId(box, &id, ASD_CEC_INBOX, index);
            bufferSize = asdCecMessageBoxGetMessageSize(g_asdCec.cec->box, ASD_CEC_INBOX, index);
            asdDebugTrace("c:\\SMT4\\XRD686\\sdds4\\Patch\\AsdSDK\\Source\\Net\\Cec\\AsdCec.cpp", 1166);
            buffer = asdMemoryAlloc(0x100, 0x100, 0, bufferSize, 1);
            result = nn_cec_CTR_MessageBox_ReadMessage_3579D4(g_asdCec.cec->box, &message, buffer, bufferSize, 0, &id);
            if ((s32)(result & 0x80000000) >= 0) {
                void *body;
                u32 bodySize;
                asdCecMessageGetBody(&message, &body, &bodySize);
                rt_memcpy(out, body, bodySize);
                ok = 1;
            }
            asdMemFree(buffer);
            asdCecMessageBoxClose(g_asdCec.cec->box);
        }
    }
    return ok;
}

} /* extern "C" */
