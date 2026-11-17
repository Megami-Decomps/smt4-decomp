#include "ui/MessageMainA.h"

extern "C" {

s32 padQueryLogicalKey(s32 kind, s32 mode);
s32 slotIsActive(s32 kind);

/* A state block whose byte at 0x0D marks it busy. */
typedef struct State5e2040 {
    /* 0x00 */ u8 unk00[0xD];
    /* 0x0D */ u8 busy;
} State5e2040;

extern State5e2040 DAT_005e2040;

/* Returns 1 while anything blocks: one of the pending checks, the busy flag, or message
 * `messageId` still being shown in state 1 with check (1, 1) pending. */
s32 FUN_001456fc(s32 messageId)
{
    MessageWindowA *window;

    if (padQueryLogicalKey(0, 1) != 0 || padQueryLogicalKey(9, 2) != 0 || slotIsActive(6) != 0 ||
        padQueryLogicalKey(10, 2) != 0 || DAT_005e2040.busy != 0) {
        return 1;
    }
    window = g_messageMain.window;
    if (window->box == (u32)messageId && window->unk19E8 == 1 && padQueryLogicalKey(1, 1) != 0) {
        return 1;
    }
    return 0;
}

} /* extern "C" */
