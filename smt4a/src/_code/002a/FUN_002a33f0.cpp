/* NON_MATCHING: retail loads the constants 6 and 1 into callee-saved registers before the calls (build materializes them at the last call) and uses a wider register set. */
#include "common.h"

extern "C" {

void scrCommMessageSetMode(s32 arg0);
u32 FUN_002ba85c(void);
s32 scrGetArg(s32 index);
u32 scrGetCommandFrame(void);
void FUN_0021bdac(u32 arg0, s32 arg1, u32 frame, s32 arg3, s32 arg4, s32 arg5);

typedef struct MessageMain {
    /* 0x0000 */ u8 unk0000[4];
    /* 0x0004 */ u8 *window;
} MessageMain;

#define MESSAGE_WINDOW_MODE 0x19C5  /* byte of the window object set to 0x15 */

extern MessageMain g_messageMain;

/* Script command body: resets message state scrCommMessageSetMode(0), sets the window mode byte to 0x15
 * if a window exists, then queues the command. */
void FUN_002a33f0(void)
{
    scrCommMessageSetMode(0);
    if (g_messageMain.window != NULL) {
        g_messageMain.window[MESSAGE_WINDOW_MODE] = 0x15;
    }
    u32 owner = FUN_002ba85c();
    s32 arg = scrGetArg(0);
    u32 frame = scrGetCommandFrame();

    FUN_0021bdac(owner, arg, frame, 6, 1, 0);
}

} /* extern "C" */
