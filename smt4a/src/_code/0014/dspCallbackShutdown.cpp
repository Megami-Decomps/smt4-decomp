#include "nn/svc.h"

extern "C" {

struct CallbackState {
    /* 0x00 */ u8 unk00[8];
    /* 0x08 */ s32 active;
    /* 0x0c */ s32 busy;
    /* 0x10 */ u32 unk10;
    /* 0x14 */ u32 value;
};

struct ResetValues {
    /* 0x00 */ u32 unk00;
    /* 0x04 */ u32 value;
};

extern CallbackState g_callbackState;
extern u32 g_dspCallbackSlots[8];
extern u8 DAT_0061a6a4;
extern u32 DAT_00589298;
extern ResetValues DAT_00536c80;

void sysFatalBreak(void);
void FUN_0015a450(u8 *buffer);

/* Shuts the callback state down: asserts nothing is pending, closes its handle and restores the default value. */
void dspCallbackShutdown(void)
{
    s32 i;

    if (g_callbackState.active != 0) {
        if (g_callbackState.busy != 0) {
            sysFatalBreak();
        }
        for (i = 0; i < 8; i++) {
            if (g_dspCallbackSlots[i] != 0) {
                sysFatalBreak();
            }
        }
        FUN_0015a450(&DAT_0061a6a4);
        svcCloseHandle(DAT_00589298);
        g_callbackState.value = DAT_00536c80.value;
        g_callbackState.active = 0;
    }
}

} /* extern "C" */
