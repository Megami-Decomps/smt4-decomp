/* Command-window state and optional inline label. */
#ifndef UI_COMMANDWINDOW_H
#define UI_COMMANDWINDOW_H
#include "common.h"
#include "ui/UiSpriteState.h"
typedef struct CommandWindow {
    union {
        /* 0x000 */ u8 unk000[8];
        /* 0x000 */ u32 process;
    };
    /* 0x008 */ u32 unk08;
    /* 0x00C */ u8 unk00C[4];
    /* 0x010 */ u8 textEnabled;
    /* 0x011 */ u8 unk11;
    /* 0x012 */ u8 unk12[2];
    /* 0x014 */ u32 state;
    /* 0x018 */ u16 value;
    /* 0x01A */ u8 unk01A[0x22];
    union {
        /* 0x03C */ u8 unk3C[0x118];
        /* 0x03C */ UiSpriteState sprites[2];
    };
    /* 0x154 */ char text[0x31];
} CommandWindow;
extern "C" CommandWindow *g_comWin;

/* Retail 32-bit layout invariants. */
typedef char CommandWindowSizeCheck[sizeof(CommandWindow) == 0x188 ? 1 : -1];
typedef char CommandWindowSpriteOffsets[
    __INTADDR__(&((CommandWindow *)0)->process) == 0 &&
    __INTADDR__(&((CommandWindow *)0)->sprites) == 0x3C &&
    sizeof(CommandWindow) == 0x188 ? 1 : -1];

#endif
