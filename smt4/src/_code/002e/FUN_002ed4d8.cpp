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

extern u32 FUN_002865f8(void);
extern s32 FUN_0028660c(void);
extern u32 FUN_002866b4(u32 a, u32 b, u32 c, s32 style, s32 d, s32 e);
extern s32 scrGetCommandFrame(void);
extern u32 scrGetArg(s32 index);
extern void msgBoxFlagsSetBit7(u32 message);

u32 FUN_002ed4d8(ScriptOwner *owner)
{
    MessageBox *box = owner->box;
    s32 raw = FUN_0028660c();
    s32 style = raw == 0x14 ? 5 : raw;
    u32 first;
    u32 second;
    u32 third;
    u32 result;

    first = FUN_002865f8();
    second = scrGetArg(0);
    third = scrGetCommandFrame();
    result = FUN_002866b4(first, second, third, style, 0, 0);
    if (scrGetCommandFrame() == 0) {
        msgBoxFlagsSetBit7(box->message);
        box->unkA10 = 0;
        box->flags |= 0x20;
    }
    return result;
}

} /* extern "C" */
