/* NON_MATCHING: debug trace, frame layout, ReadMessage's unk=1 argument and the result tests now match; retail evaluates the open result as and/cmp/movlt (the build uses lsrs) and arranges the else-close block and the message-box field loads differently. */
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

    nn_cec_CTR_Message_Message_sub_object(&message);
    _ZN12CecMessageIdC1Ev(&id);
    box = g_asdCec.cec->box;
    result = asdCecMessageBoxOpen(box, g_asdCec.cec->unk00, g_asdCec.cec->unk04);
    bool opened = !nnResultIsFailure(result);
    if (!(g_asdCec.cec->box->outboxCount != 0)) {
        asdCecMessageBoxClose(g_asdCec.cec->box);
    } else {
        if (opened) {
            box = g_asdCec.cec->box;
            nn_cec_CTR_MessageBox_GetMessageId(box, &id, ASD_CEC_OUTBOX, index);
            bufferSize = asdCecMessageBoxGetMessageSize(g_asdCec.cec->box, ASD_CEC_OUTBOX, index);
            asdDebugTrace("c:\\SMT4F\\SMT4F\\AsdSDK\\Source\\Net\\Cec\\AsdCec.cpp", 1631);
            buffer = asdMemoryAlloc(0x100, 0x100, 0, bufferSize, 1);
            result = nn_cec_CTR_MessageBox_ReadMessage_3579D4(g_asdCec.cec->box, &message, buffer, bufferSize, 1, &id);
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
