/* NON_MATCHING: the early `return 1` is built as `moveq r0, #1; beq` to its own epilogue; retail branches straight to the shared `mov r0, #1; pop` at the end. */
#include "common.h"

extern "C" {

s32 scrGetCommandFrame(void);
s32 scrWorkGetValue(s32 index);
int scrWorkSetValue(s32 index, s32 value);
s32 FUN_0029022c(void);
void *fileSlotGetBuffer(u32 slot);
void *FUN_002903f0(void);
int FUN_0028ed3c(void *object, s32 arg0, s32 arg1);
int FUN_002bff50(void);
s32 messageForwardDefaultMode(void *buffer, s32 arg1, s32 step, s32 arg3, s32 arg4);
int FUN_0029016c(void *object, s32 arg);
int FUN_00290248(void *object);
int FUN_002900d0(void);

/* Script command: applies the confirmed message step by step through scrWork 1; finishes (returns 1) when done. */
u32 scrComm_Message_ConfirmAndApplySimple(void)
{
    void *buffer;
    void *object;
    s32 result;

    if (scrGetCommandFrame() == 0) {
        if (FUN_0029022c() == 0) {
            return 1;
        }
        scrWorkSetValue(0, 0);
        scrWorkSetValue(1, 0);
    }
    buffer = fileSlotGetBuffer(30);
    if (scrWorkGetValue(0) == 0) {
        object = FUN_002903f0();
        FUN_0028ed3c(object, 0, 1);
        FUN_002bff50();
        result = messageForwardDefaultMode(buffer, 2, scrWorkGetValue(1), 6, 0);
        scrWorkSetValue(1, scrWorkGetValue(1) + 1);
        if (result == 1) {
            scrWorkSetValue(1, 0);
            FUN_0029016c(object, 0);
            FUN_00290248(object);
            FUN_002900d0();
            return 1;
        }
    }
    return 0;
}

} /* extern "C" */
