#include "common.h"

extern "C" {

typedef struct PopupState {
    /* 0x00 */ s32 state;       /* 0: idle, 3: opening */
    /* 0x04 */ s32 unk04;
    /* 0x08 */ s32 unk08[3];
    /* 0x14 */ s32 handle;
    /* 0x18 */ s32 arg;
} PopupState;

extern PopupState *g_popupState;

extern void FUN_00152f44(void);
extern s32 FUN_002d8b58(s32 kind, s32 arg);

/* Starts the popup with `arg` unless one is already running. */
void popupStart(s32 arg)
{
    PopupState *popup;

    FUN_00152f44();
    popup = g_popupState;
    if (popup->state == 0) {
        popup->state = 3;
        popup->unk04 = 0;
        popup->arg = arg;
        g_popupState->handle = FUN_002d8b58(11, arg);
    }
}

}
