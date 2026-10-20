#include "common.h"

extern "C" {

typedef struct MessageBox {
    /* 0x000 */ u8 unk000[0xa11];
    /* 0xa11 */ u8 mode;
} MessageBox;

typedef struct MessageMain {
    /* 0x00 */ u8 unk00[4];
    /* 0x04 */ MessageBox *box;
} MessageMain;

extern MessageMain g_messageMain;

void eventTexRequestStopAll(void);
void bustupCutAnimRequestStopSlots(void);
void FUN_002866b4(u32 unit, u32 arg, u32 value, s32 kind, s32 a, s32 b);
u32 FUN_002865f8(void);
u32 scrGetCommandFrame(void);
u32 scrGetArg(u32 index);

/* Sets the message box's mode (when there is one) and shows a message of the given kind for the
 * unit FUN_002865f8 names, using script argument 0 and the command frame. */
static void showMessage(s32 kind)
{
    if (g_messageMain.box != NULL) {
        g_messageMain.box->mode = 0x14;
    }
    u32 unit = FUN_002865f8();
    u32 arg = scrGetArg(0);
    u32 value = scrGetCommandFrame();

    FUN_002866b4(unit, arg, value, kind, 0, 0);
}

void scrComm_Message_ShowConfirm(void)
{
    bustupCutAnimRequestStopSlots();
    eventTexRequestStopAll();
    showMessage(6);
}

} /* extern "C" */
