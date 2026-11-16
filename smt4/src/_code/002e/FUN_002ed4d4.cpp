#include "common.h"

extern "C" {

typedef struct MessageBox {
    /* 0x000 */ u8 unk000[4];
    /* 0x004 */ u32 message;
    /* 0x008 */ u8 unk008[4];
    /* 0x00C */ u32 flags;
    /* 0x010 */ u8 unk010[0xA00];
    /* 0xA10 */ u8 unkA10;
} MessageBox;

typedef struct ScriptOwner {
    /* 0x00 */ u8 unk00[4];
    /* 0x04 */ MessageBox *box;
} ScriptOwner;

extern u32 scrGetCommandOwner(void);
extern s32 btlTalkGetPortraitCode(void);
extern u32 messageWindowShowOrPoll(u32 a, u32 b, u32 c, s32 style, s32 d, s32 e);
extern s32 scrGetCommandFrame(void);
extern u32 scrGetArg(s32 index);
extern void msgBoxFlagsSetBit7(u32 message);

extern ScriptOwner g_messageMain;
u32 FUN_002ed4d4(void)
{
    MessageBox *box = g_messageMain.box;
    s32 raw = btlTalkGetPortraitCode();
    s32 style = raw == 0x14 ? 5 : raw;
    u32 first;
    u32 second;
    u32 third;
    u32 result;

    first = scrGetCommandOwner();
    second = scrGetArg(0);
    third = scrGetCommandFrame();
    result = messageWindowShowOrPoll(first, second, third, style, 0, 0);
    if (scrGetCommandFrame() == 0) {
        msgBoxFlagsSetBit7(box->message);
        box->unkA10 = 0;
        box->flags |= 0x20;
    }
    return result;
}

} /* extern "C" */
