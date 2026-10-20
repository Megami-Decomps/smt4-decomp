/* NON_MATCHING: the message is assembled with different store grouping and register allocation (retail copies the session payload with ldrd/stm) */
#include "shard/S1NetMessage.h"

extern "C" {

/* The session state at DAT_005c14a8. */
struct NetState {
    /* 0x0 */ u8 flag;
    /* 0x1 */ u8 unk1[3];
    /* 0x4 */ NetSessionHeader *header;  /* shared session header */
};

extern NetState DAT_005c14a8;

void *FUN_001a2a4c(void);
s32 FUN_001b013c(void *session, const NetMessage *message);

/* Send a type-5 message with the session payload (when requested), then, if that succeeded, a type-1
 * message carrying the two parameters and `param3`. */
void FUN_001a2504(u32 param1, u32 param2, s32 withHeader, u32 param3)
{
    s32 result = 0;
    NetMessage message;

    if (withHeader != 0) {
        NetSessionHeader *session = DAT_005c14a8.header;

        *(u32 *)&message = session->header;
        message.type = 5;
        message.flag = 0;
        message.param1 = param1;
        message.param2 = param2;
        message.param3 = session->param3;
        message.payload[0] = session->payload[0];
        message.payload[1] = session->payload[1];
        message.payload[2] = session->payload[2];
        message.payload[3] = session->payload[3];
        result = FUN_001b013c((u8 *)FUN_001a2a4c() + 0x58, &message);
    }
    if ((s32)(result & 0x80000000) >= 0) {
        NetSessionHeader *session = DAT_005c14a8.header;

        *(u32 *)&message = session->header;
        message.type = 1;
        message.flag = DAT_005c14a8.flag;
        message.param1 = param1;
        message.param2 = param2;
        message.param3 = param3;
        message.payload[0] = session->payload[0];
        message.payload[1] = session->payload[1];
        message.payload[2] = session->payload[2];
        message.payload[3] = 0;
        FUN_001b013c((u8 *)FUN_001a2a4c() + 0x58, &message);
    }
}

} /* extern "C" */
