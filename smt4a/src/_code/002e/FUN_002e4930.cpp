/* NON_MATCHING: the 21-to-5 kind comes through scrMessageKindGetValue like retail; remaining: retail pushes r4-r7 with the constant 1 materialised separately for the flag stores (r1) and the enabled argument (r4), the build shares one hoisted constant in r7. */
#include "ui/MessageMainA.h"

extern "C" {

s32 scrCommMessageSetMode(s32 mode);
s32 scrMessageKindGetValue(void);

static __inline s32 messageKind(s32 kind)
{
    return kind == 21 ? 5 : kind;
}
s32 scrGetCommandFrame(void);
u32 scrGetCommandOwner(void);
u32 scrGetArg(u32 index);
s32 messageWindowShowOrPoll(u32 context, u32 argument, s32 frame, s32 mode,
                 s32 enabled, s32 flags);

// Set the initial message flags and dispatch the script message in mode 5.
void FUN_002e4930(void)
{
    scrCommMessageSetMode(0);
    if (scrGetCommandFrame() == 0) {
        MessageWindowA *banner = g_messageMain.banner;
        if (banner != 0) {
            banner->unk0030 = 1;
        }
        banner->unk0031 = 1;
    }

    s32 kind = messageKind(scrMessageKindGetValue());
    s32 enabled = 1;
    u32 context = scrGetCommandOwner();
    u32 argument = scrGetArg(0);
    s32 frame = scrGetCommandFrame();
    messageWindowShowOrPoll(context, argument, frame, kind, enabled, 0);
}
}
