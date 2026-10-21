#include "common.h"

extern "C" {

s32 scrWorkGetValue(s32 index);
void scrWorkSetValue(s32 index, s32 value);
s32 messageForwardDefaultMode(s32 buffer, s32 size, u32 value, s32 kind, s32 flag);
void FUN_003dea6c(u32 arg, s32 a, s32 b);
void FUN_001695a0(void);
s32 FUN_00417c24(u32 arg);
s32 scrGetCommandFrame(void);
u32 scrGetArg(u32 index);
s32 dataTableValueOrZero(u32 slot);

/* Shows the confirm message; on the first frame resets work value 0 and starts the message, then
 * counts work value 0 up. Returns 1 (after passing the script argument to FUN_00417c24) when the answer is 1. */
u8 scrComm_Message_ShowConfirmAndApply(void)
{
    u16 arg = scrGetArg(0);
    s32 buffer;
    u32 frame;
    s32 answer;

    if (scrGetCommandFrame() == 0) {
        scrWorkSetValue(0, 0);
        FUN_003dea6c(arg, 0, 1);
        FUN_001695a0();
    }
    buffer = dataTableValueOrZero(0x1e);
    frame = scrWorkGetValue(0);
    answer = messageForwardDefaultMode(buffer, 0x10, frame, 6, 0);
    scrWorkSetValue(0, scrWorkGetValue(0) + 1);
    if (answer == 1) {
        FUN_00417c24(arg);
        return 1;
    }
    return 0;
}

} /* extern "C" */
