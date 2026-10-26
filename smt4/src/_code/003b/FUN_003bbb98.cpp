/* NON_MATCHING: control flow, status local and result test now match retail; remaining: retail derives the box-name word from the card-name string literal (DAT_0043ddb8 = string - 132, same-file data) where the build loads two separate literals. */
#include "addon/CecCard.h"
#include "nn/Result.h"

extern "C" {
extern u32 DAT_0043ddb8;
extern char s_Master__I_got_a_card_0043ddf2[37];
extern char s_Shin_Megami_Tensei_I_0043de3c[22];
void cecSettingsSet(s32, s32, s32, s32);
u32 FUN_00357818(u32);
s32 cecWriteMessageBoxNameAndData(u32, u32, const char *, const void *, u32);
s32 FUN_0021f57c(const char *, const void *, u32, u32, u32);
void FUN_002d55f0(void *);

// Write a communication card and translate platform errors into menu status bits.
u32 FUN_003bbb98(CecCardOwner *owner, u32 argument)
{
    u32 status = 0;
    cecSettingsSet(2, 3, 255, 0);
    u32 box = FUN_00357818(0xe5c);
    cecWriteMessageBoxNameAndData(box, DAT_0043ddb8, s_Shin_Megami_Tensei_I_0043de3c, owner->data, 0x1200);
    s32 result = FUN_0021f57c(s_Master__I_got_a_card_0043ddf2, owner->metadata, 0xc80, argument, 0x4c);
    if (!nnResultIsSuccess(result)) {
        if (result == static_cast<s32>(0xe0a1086c)) {
            status = 5;
        } else if (result == static_cast<s32>(0xe0a1086d)) {
            status = 9;
        } else if (result == static_cast<s32>(0xc8e10865) || result == static_cast<s32>(0xc8e10866)) {
            status = 0x41;
        } else if (result == static_cast<s32>(0xc8a10bf0)) {
            status = 0x21;
        } else {
            status = 0x11;
        }
    } else {
        FUN_002d55f0(owner->state);
    }
    return status;
}
}
