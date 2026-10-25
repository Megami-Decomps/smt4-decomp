/* title/titleConfig.c: the title screen's config menu. */
#ifndef TITLE_TITLECONFIG_H
#define TITLE_TITLECONFIG_H

#include "common.h"
#include "shard/W6_W6Match8_UiResourceParameters.h"

/* The menu's block, kept by a module global (Shin Megami Tensei IV layout). */
typedef struct TitleConfig {
    /* 0x000 */ u32 job;          /* job that runs the menu */
    /* 0x004 */ u8 closing;       /* set once the menu is being torn down */
    /* 0x005 */ u8 unk05[0x15];
    /* 0x01A */ s16 countA;       /* entries released on teardown */
    /* 0x01C */ u8 unk1C[8];
    /* 0x024 */ s16 countB;       /* entries released on teardown */
    /* 0x026 */ u8 unk26[0x126];
    /* 0x14C */ void *dataA;      /* heap blocks */
    /* 0x150 */ void *dataB;
    /* 0x154 */ void *process;    /* script process object */
} TitleConfig;

/* The same block in Apocalypse: the trailing pointers sit eight bytes further on. */
typedef struct TitleConfigA {
    /* 0x000 */ u32 job;
    /* 0x004 */ u8 closing;
    /* 0x005 */ u8 unk05[3];
    /* 0x008 */ u32 state;
    /* 0x00C */ u8 unk0C[0xE];
    /* 0x01A */ s16 countA;
    union {
        /* 0x01C */ u8 unk1C[8];
        /* 0x01C */ s16 touchRegions[4];
    };
    /* 0x024 */ s16 countB;
    /* 0x026 */ u8 unk26[2];
    /* 0x028 */ u32 settingIndex[3]; /* list positions of the music, sound and voice settings */
    /* 0x034 */ u8 saved[8];         /* the settings the menu opened with */
    /* 0x03C */ UiResourceParameters params;
    /* 0x05C */ u8 window[0x8C];     /* sprite of the menu window */
    /* 0x0E8 */ f32 cursorScale;
    /* 0x0EC */ s32 cursorFrames;
    /* 0x0F0 */ u8 cursor[0x64];
    /* 0x154 */ void *dataA;
    /* 0x158 */ void *dataB;
    /* 0x15C */ void *process;
} TitleConfigA;
typedef char TitleConfigATouchRegionsOffsetCheck[
    __INTADDR__(&((TitleConfigA *)0)->touchRegions) == 0x1C &&
    sizeof(TitleConfigA) == 0x160 ? 1 : -1];

struct TitleConfigCallbackView {
    /* 0x000 */ u32 job;
    /* 0x004 */ u8 closing;
    /* 0x005 */ u8 unk005[3];
    /* 0x008 */ u32 state;
    /* 0x00C */ u8 unk00c[8];
    /* 0x014 */ s16 buttons[3];
    /* 0x01A */ s16 countA;
    /* 0x01C */ s16 resetButton;
    /* 0x01E */ s16 leftButton;
    /* 0x020 */ s16 rightButton;
    /* 0x022 */ s16 slider;
    /* 0x024 */ s16 countB;
    /* 0x026 */ u8 unk026[2];
    /* 0x028 */ s32 settings[3];
    /* 0x034 */ u8 saved[0x28];
    /* 0x05C */ u8 window[0x8C];
    /* 0x0E8 */ u8 cursor[0x64];
    /* 0x14C */ void *dataA;
    /* 0x150 */ void *dataB;
    /* 0x154 */ void *process;
};
struct TitleConfigValues {
    /* 0x00 */ u8 music;
    /* 0x01 */ u8 sound;
    /* 0x02 */ u8 voice;
    /* 0x03 */ u8 auxiliary;
    /* 0x04 */ u8 changed;
};
struct TitleConfigHelpEntry {
    /* 0x00 */ u8 unk00[0x16];
    /* 0x16 */ char text[0x80];
};
typedef char TitleConfigCallbackViewSizeCheck[sizeof(TitleConfigCallbackView) == 0x158 ? 1 : -1];
typedef char TitleConfigHelpEntrySizeCheck[sizeof(TitleConfigHelpEntry) == 0x96 ? 1 : -1];

#endif
