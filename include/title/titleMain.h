/* title/titleMain.c: the title screen. */
#ifndef TITLE_TITLEMAIN_H
#define TITLE_TITLEMAIN_H

#include "common.h"
#include "AsdSDK/Source/Gfx/Model/AsdMdlManager.h"
#include "camp/RenderCtx.h"
#include "ui/ClippedSprite.h"
#include <stddef.h>

/* Where the title menu draws one of its entries (the cursor sprite and the entry's text). */
typedef struct TitleMenuEntryPosition {
    /* 0x00 */ f32 x;
    /* 0x04 */ f32 y;
} TitleMenuEntryPosition;

/* The title screen's block, kept by a module global. */
typedef struct TitleMain {
    /* 0x00 */ u32 job;          /* job that runs the title screen */
    /* 0x04 */ u8 freeOnEnd;     /* 0 = keep the block after the job ends */
    /* 0x05 */ u8 unk05[3];
    /* 0x08 */ s32 cursor;                        /* the highlighted menu entry */
    /* 0x0C */ u8 unk0C[4];
    union {
        /* 0x10 */ u8 unk10[0x30];
        /* 0x10 */ u8 menuHidden;                 /* non-zero: the lower screen's menu is not drawn */
        struct {
            /* 0x10 */ u8 usesSubobject;
            /* 0x11 */ u8 unk11[3];
            /* 0x14 */ u8 subobject[4];
        } trace;
    };
    /* 0x40 */ TitleMenuEntryPosition entries[4];
    /* 0x60 */ u8 menuEnabled;                    /* 0: the unselected entries are greyed out */
    /* 0x61 */ u8 unk61;
    /* 0x62 */ u8 unk62;
    /* 0x63 */ u8 unk63;
    /* 0x64 */ u8 unk64[4];
    /* 0x68 */ f32 cursorAlpha;                   /* the cursor's second layer, unless unk61 or unk62 is set */
    /* 0x6C */ f32 menuAlpha;                     /* the whole menu's */
    /* 0x70 */ u8 unk70[0x15];
    /* 0x85 */ u8 unk85;
    /* 0x86 */ u8 unk86[2];
    /* 0x88 */ u32 unk88;
    /* 0x8C */ AsdMdlObject *modelA;   /* destroyed with the title screen */
    /* 0x90 */ AsdMdlObject *modelB;   /* destroyed with the title screen */
} TitleMain;
typedef char TitleMainTraceLayoutCheck[
    offsetof(TitleMain, trace.usesSubobject) == 0x10 &&
    offsetof(TitleMain, trace.subobject) == 0x14 &&
    offsetof(TitleMain, cursor) == 0x08 &&
    offsetof(TitleMain, entries) == 0x40 &&
    offsetof(TitleMain, menuEnabled) == 0x60 &&
    offsetof(TitleMain, menuAlpha) == 0x6C &&
    offsetof(TitleMain, unk85) == 0x85 &&
    offsetof(TitleMain, modelA) == 0x8C &&
    sizeof(TitleMain) == 0x94 ? 1 : -1];

/* A sprite of Apocalypse's title screen (0x38 bytes): where it is drawn, how opaque, and which image
 * of which texture table it shows. */
typedef struct TitleSpriteA {
    /* 0x00 */ s32 x;
    /* 0x04 */ s32 y;
    /* 0x08 */ f32 alpha;      /* 0 or less: not drawn */
    /* 0x0C */ u8 unk0C[0x18];
    /* 0x24 */ u32 table;
    /* 0x28 */ u32 image;
    /* 0x2C */ u8 unk2C[0xC];
} TitleSpriteA;

/* Apocalypse's title screen block (0x260 bytes, g_titleMain.title): the title screen's state, then what it
 * draws: two clipped menu sprites and six plain ones. */
struct TitleMainA : TitleMain {
    /* 0x094 */ u8 unk094[8];
    /* 0x09C */ ClippedSprite menuSprites[2];  /* 0x38 apart */
    /* 0x10C */ TitleSpriteA sprites[6];       /* drawn in the order 3, 4, the menu sprites, 1, 0, 2, 5 */
    /* 0x25C */ u8 unk25C[4];
};
typedef char TitleMainALayoutCheck[sizeof(TitleSpriteA) == 0x38 && sizeof(ClippedSprite) == 0x38 &&
    offsetof(TitleMainA, menuSprites) == 0x9C && offsetof(TitleMainA, sprites) == 0x10C &&
    sizeof(TitleMainA) == 0x260 ? 1 : -1];

/* Apocalypse keeps another word in front of the title screen's pointer. */
typedef struct TitleMainGlobals {
    /* 0x00 */ u32 unk00;
    /* 0x04 */ TitleMainA *title;
} TitleMainGlobals;

/* The scene block most title/event/map modules share through DAT_0044ea00 (Shin Megami Tensei IV):
 * the draw context. */
typedef RenderCtx TitleScene;

/* The title's debug background object. */
typedef struct TitleDbgBgObj {
    /* 0x00 */ u8 unk00[4];
    /* 0x04 */ s32 unk04;
} TitleDbgBgObj;

extern "C" {
void FUN_0036b824(u32 value);
}

#endif
