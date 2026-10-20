/* title/titleMain.c: the title screen. */
#ifndef TITLE_TITLEMAIN_H
#define TITLE_TITLEMAIN_H

#include "common.h"
#include "AsdSDK/Source/Gfx/Model/AsdMdlManager.h"

/* The title screen's block, kept by a module global. */
typedef struct TitleMain {
    /* 0x00 */ u32 job;          /* job that runs the title screen */
    /* 0x04 */ u8 freeOnEnd;     /* 0 = keep the block after the job ends */
    /* 0x05 */ u8 unk05[0x80];
    /* 0x85 */ u8 unk85;
    /* 0x86 */ u8 unk86[2];
    /* 0x88 */ u32 unk88;
    /* 0x8C */ AsdMdlObject *modelA;   /* destroyed with the title screen */
    /* 0x90 */ AsdMdlObject *modelB;   /* destroyed with the title screen */
} TitleMain;

/* Apocalypse keeps another word in front of the title screen's pointer. */
typedef struct TitleMainGlobals {
    /* 0x00 */ u32 unk00;
    /* 0x04 */ TitleMain *title;
} TitleMainGlobals;

/* The scene block most title/event/map modules share through DAT_0044ea00 (Shin Megami Tensei IV). */
typedef struct TitleScene {
    /* 0x000 */ u8 unk000[0x528];
    /* 0x528 */ s32 unk528;
} TitleScene;

/* The title's debug background object. */
typedef struct TitleDbgBgObj {
    /* 0x00 */ u8 unk00[4];
    /* 0x04 */ s32 unk04;
} TitleDbgBgObj;

#endif
