/* NON_MATCHING: code, calls and constants match retail; only the register assignment of the five parameters and the result differs (armcc ranks them r6/r7/r5/r9/r8 where retail has r5/r6/r4/r8/r7 and keeps the result in r9). */
#include "AsdSDK/Source/Net/Cec/AsdCec.h"
#include "nn/Result.h"

extern "C" {
extern AsdCecGlobals g_asdCec;

s32 asdCecMessageBoxOpen(AsdCecMessageBox *box, u32 unk00, u32 unk04);
void asdCecMessageBoxClose(AsdCecMessageBox *box, u32 result);
void nn_cec_CTR_Message_Message_sub_object(AsdCecMessage *message);
void nn_cec_CTR_Message_NewMessage(AsdCecMessage *message, u32 id, s32 kind, u32 param0, u32 param1, u32 param2, u32 param3);
u32 nn_cec_CTR_Message_SetExHeader(AsdCecMessage *message, u32 type, u32 size, const void *data);
u32 nn_cec_CTR_Message_SetMessageBody(AsdCecMessage *message, const void *body, u32 size);
s32 FUN_00357a24(AsdCecMessageBox *box, AsdCecMessage *message, s32 mode, void *work);
s32 wstrlenU16(const u16 *text);
void FUN_0024ee68(s32 arg);

/* Builds a StreetPass message from the caller's text, extra header and body, writes it to the
 * message box and closes the box. */
s32 FUN_0021f57c(const u16 *text, const void *header, u32 headerSize, const void *body, u32 bodySize)
{
    AsdCecMessage message;
    nn_cec_CTR_Message_Message_sub_object(&message);

    s32 result = asdCecMessageBoxOpen(g_asdCec.cec->box, g_asdCec.cec->unk00, g_asdCec.cec->unk04);
    if (nnResultIsSuccess(result)) {
        nn_cec_CTR_Message_NewMessage(&message, g_asdCec.cec->unk00, 0, g_asdCec.cec->messageParams[0],
                                      g_asdCec.cec->messageParams[1], g_asdCec.cec->messageParams[2],
                                      g_asdCec.cec->messageParams[3]);
        nn_cec_CTR_Message_SetExHeader(&message, 2, headerSize, header);
        nn_cec_CTR_Message_SetExHeader(&message, 4, wstrlenU16(text) << 1, text);
        nn_cec_CTR_Message_SetMessageBody(&message, body, bodySize);
        result = FUN_00357a24(g_asdCec.cec->box, &message, 1, g_asdCec.cec->work);
        u32 code = result & 0x80000000;
        if ((s32)code < 0) {
            code = 0xE0A1086C;
            if (result != 0xE0A1086C) {
                code = 0xE0A1086D;
            }
            if (result != 0xE0A1086C && result != code) {
                if (result != 0xC8810BEA) {
                    code = 0xC8E10865;
                }
                if (result != 0xC8810BEA && result != code) {
                    code = 0xC8E10866;
                    if (result != 0xC8E10866) {
                        code = 0xC8E10869;
                    }
                }
            }
        }
        asdCecMessageBoxClose(g_asdCec.cec->box, code);
        FUN_0024ee68(0);
    }
    return result;
}

} /* extern "C" */
