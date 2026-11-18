/* title/titleConfig.c: the title screen's config menu. */
#ifndef TITLE_TITLECONFIG_H
#define TITLE_TITLECONFIG_H

#include "common.h"
#include "shard/W6_W6Match8_UiResourceParameters.h"
#include "ui/UiSpriteState.h"
#include "script/ScriptVm.h"

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
    /* 0x154 */ ScriptProcess *process;    /* script process object */
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
    /* 0x05C */ UiSpriteState window;  /* sprite of the menu window */
    /* 0x0E8 */ f32 cursorScale;
    /* 0x0EC */ s32 cursorFrames;
    /* 0x0F0 */ u8 cursor[0x64];
    /* 0x154 */ void *dataA;
    /* 0x158 */ void *dataB;
    /* 0x15C */ ScriptProcess *process;
} TitleConfigA;
typedef char TitleConfigATouchRegionsOffsetCheck[
    __INTADDR__(&((TitleConfigA *)0)->touchRegions) == 0x1C &&
    sizeof(TitleConfigA) == 0x160 ? 1 : -1];

/* The sound settings the menu edits (g_titleConfigValues); eight bytes copied as one record. */
struct TitleConfigValues {
    /* 0x00 */ u8 music;
    /* 0x01 */ u8 sound;
    /* 0x02 */ u8 voice;
    /* 0x03 */ u8 auxiliary;
    /* 0x04 */ u8 changed;
    /* 0x05 */ u8 unk05[3];
};
typedef char TitleConfigValuesSizeCheck[sizeof(TitleConfigValues) == 8 ? 1 : -1];

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
    /* 0x034 */ TitleConfigValues saved;   /* the settings the menu opened with */
    /* 0x03C */ UiResourceParameters params;
    /* 0x05C */ UiSpriteState window;
    /* 0x0E8 */ u8 cursor[0x64];
    /* 0x14C */ void *dataA;
    /* 0x150 */ void *dataB;
    /* 0x154 */ ScriptProcess *process;
};
struct TitleConfigHelpEntry {
    /* 0x00 */ u8 unk00[0x16];
    /* 0x16 */ char text[0x80];
};
#ifdef __cplusplus
extern "C" {
#endif
/* IV: the default volume getters (music 50, sound 80, voice 80, auxiliary 48). Each is `mov r0, #N; bx lr`,
 * which armlink inlined at every call and removed: retail's titleConfigUpdate keeps the calls' register
 * clobbers (it reloads the sound volume after the auxiliary default) around a lone `mov r0, #N`. */
u8 titleConfigDefaultMusic(void);
u8 titleConfigDefaultSound(void);
u8 titleConfigDefaultVoice(void);
u8 titleConfigDefaultAuxiliary(void);
#ifdef __cplusplus
}
#endif

typedef char TitleConfigCallbackViewSizeCheck[sizeof(TitleConfigCallbackView) == 0x158 ? 1 : -1];
typedef char TitleConfigHelpEntrySizeCheck[sizeof(TitleConfigHelpEntry) == 0x96 ? 1 : -1];

#endif
