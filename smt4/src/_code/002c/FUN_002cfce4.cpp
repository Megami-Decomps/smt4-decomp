#include "common.h"

struct BtlTalkMessage {
    /* 0x00 */ u8 unk00[0x14];
    /* 0x14 */ u32 message;
};

extern "C" {

extern BtlTalkMessage *g_btlTalk;

u32 btlGetActiveShareRating(void);
u32 messageAuxDispatch(u32 message, u32 name);

/* Dispatches the talk's message together with the name btlGetActiveShareRating yields. */
u32 FUN_002cfce4(void)
{
    u32 message = g_btlTalk->message;
    return messageAuxDispatch(message, btlGetActiveShareRating());
}

} /* extern "C" */
