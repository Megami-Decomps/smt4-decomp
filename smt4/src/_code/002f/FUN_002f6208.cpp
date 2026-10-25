#include "common.h"

/* A message window as closed here. */
struct MessageWindow2f {
    /* 0x00 */ u8 unk00[8];
    /* 0x08 */ s8 state;
    /* 0x09 */ u8 mode;
    /* 0x0A */ u8 unk0A[0xe];
    /* 0x18 */ u32 value;
    /* 0x1C */ u32 choiceResult;
    /* 0x20 */ s32 touchRegionCount;
    /* 0x24 */ u8 unk24[0xb];
    /* 0x2F */ u8 unk2F;
    /* 0x30 */ u8 unk30;
    /* 0x31 */ u8 unk31;
    /* 0x32 */ u8 unk32[3];
    /* 0x35 */ u8 closeRequested;
};

struct MessageGlobals2f {
    /* 0x00 */ u8 enabled;
    /* 0x01 */ u8 unk01[3];
    /* 0x04 */ MessageWindow2f *state;
    /* 0x08 */ MessageWindow2f *banner;
};

extern "C" {
extern MessageGlobals2f g_messageMain;
void ifTouchRegionRemove(void);
s32 querySlotHasHandle(void);
void workCommandRefreshActiveSlots(void);
void titleOverlaySetModeAnimation(MessageWindow2f *window, u32 mode);

/* Starts closing a shown message window. */
static __inline void messageWindowClose(MessageWindow2f *window)
{
    if (window != NULL && window->state != 0) {
        titleOverlaySetModeAnimation(window, window->mode);
        window->state = 3;
        window->closeRequested = 0;
    }
}

/* Dismisses the shown banner: removes its touch regions, takes its value as the choice and closes
 * the banner and message windows. */
void FUN_002f6208(void)
{

    if (g_messageMain.banner == NULL || g_messageMain.banner->state == 0) {
        return;
    }
    g_messageMain.banner->unk30 = 0;
    g_messageMain.banner->unk31 = 0;
    for (s32 i = 0; i < g_messageMain.banner->touchRegionCount; i++) {
        ifTouchRegionRemove();
    }
    g_messageMain.banner->unk2F = 0;
    g_messageMain.banner->choiceResult = g_messageMain.banner->value;
    if (querySlotHasHandle() != 0) {
        workCommandRefreshActiveSlots();
    }
    messageWindowClose(g_messageMain.banner);
    messageWindowClose(g_messageMain.state);
}

} /* extern "C" */
