/* title/titleConfig.c: the title screen's config menu. */
#ifndef TITLE_TITLECONFIG_H
#define TITLE_TITLECONFIG_H

#include "common.h"

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
    /* 0x005 */ u8 unk05[0x15];
    /* 0x01A */ s16 countA;
    /* 0x01C */ u8 unk1C[8];
    /* 0x024 */ s16 countB;
    /* 0x026 */ u8 unk26[0x12E];
    /* 0x154 */ void *dataA;
    /* 0x158 */ void *dataB;
    /* 0x15C */ void *process;
} TitleConfigA;

#endif
