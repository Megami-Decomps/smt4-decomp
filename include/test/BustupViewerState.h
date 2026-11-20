#ifndef TEST_BUSTUPVIEWERSTATE_H
#define TEST_BUSTUPVIEWERSTATE_H

#include "common.h"
#include <stddef.h>

struct BustupViewerState {
    /* 0x00 */ u32 process;       /* the viewer's update process handle */
    /* 0x04 */ u8 done;
    /* 0x05 */ u8 unk05[3];
    /* 0x08 */ u32 unk08;
    /* 0x0C */ u32 mode;          /* BUSTUP_VIEWER_MODE_* */
    /* 0x10 */ u32 menuRow;       /* the highlighted row of the menu, BUSTUP_VIEWER_ROW_* */
    /* 0x14 */ u32 backgroundId;  /* 0: none */
    /* 0x18 */ s32 characterId;   /* 0: none, from 200 a boss, above 300 the B set */
    /* 0x1C */ u32 characterVariant; /* the VARIANT row; 1 on reset */
    /* 0x20 */ u32 subWindowId;   /* the SUB_WINDOW row, shown in SWIN mode only */
    /* 0x24 */ u32 characterParamA; /* the PARAM_A row */
    /* 0x28 */ u32 characterParamB; /* the PARAM_B row */
    /* 0x2C */ s32 partnerId;     /* the second character (3D_2 mode): the same four values */
    /* 0x30 */ u32 partnerVariant;
    /* 0x34 */ u32 partnerParamA;
    /* 0x38 */ u32 partnerParamB;
    /* 0x3C */ u32 positionIndex; /* index into the mode's table of position ids */
    /* 0x40 */ u32 unk40;
    /* 0x44 */ u8 unk44;
    /* 0x45 */ u8 unk45[3];
    /* 0x48 */ u32 positionCount3d;  /* 26: the entries of the 3D mode's position table */
    /* 0x4C */ u32 positionCount3d2; /* 30: the entries of the 3D_2 mode's position table */
    /* 0x50 */ s32 selection;     /* which of the four portraits (DOT mode) the rows edit */
    /* 0x54 */ s32 portraitIds[4];
    /* 0x64 */ u8 isNpc[4];        /* the portrait is an NPC's (else an enemy's) */
    /* 0x68 */ u32 paramA[4];      /* the portrait's PARAM_A row */
    /* 0x78 */ u32 paramB[4];      /* the portrait's PARAM_B row */
    /* 0x88 */ f32 scale[4];       /* the portrait's scale; 1.0 on reset */
    /* 0x98 */ void *fileData;   /* loaded bust-up list file */
    /* 0x9C */ u32 unk9C;
    /* 0xa0 */ u32 text;
};
typedef char BustupViewerStateSizeCheck[sizeof(BustupViewerState) == 0xA4 ? 1 : -1];
typedef char BustupViewerStateOffsetsCheck[offsetof(BustupViewerState, selection) == 0x50 && offsetof(BustupViewerState, text) == 0xA0 ? 1 : -1];

/* BustupViewerState::mode. */
enum {
    BUSTUP_VIEWER_MODE_2D,
    BUSTUP_VIEWER_MODE_3D,
    BUSTUP_VIEWER_MODE_3D_2,
    BUSTUP_VIEWER_MODE_DOT,
    BUSTUP_VIEWER_MODE_SWIN
};

/* The rows of the viewer's menu (BustupViewerState::menuRow); each mode shows some of them. */
enum {
    BUSTUP_VIEWER_ROW_MODE,
    BUSTUP_VIEWER_ROW_BACKGROUND,
    BUSTUP_VIEWER_ROW_SELECTION,
    BUSTUP_VIEWER_ROW_KIND,
    BUSTUP_VIEWER_ROW_CHARACTER,
    BUSTUP_VIEWER_ROW_PORTRAIT,
    BUSTUP_VIEWER_ROW_VARIANT,
    BUSTUP_VIEWER_ROW_SUB_WINDOW,
    BUSTUP_VIEWER_ROW_PARAM_A,
    BUSTUP_VIEWER_ROW_PARAM_B,
    BUSTUP_VIEWER_ROW_PARTNER,
    BUSTUP_VIEWER_ROW_PARTNER_VARIANT,
    BUSTUP_VIEWER_ROW_PARTNER_PARAM_A,
    BUSTUP_VIEWER_ROW_PARTNER_PARAM_B,
    BUSTUP_VIEWER_ROW_POSITION,
    BUSTUP_VIEWER_ROW_SCALE,
    BUSTUP_VIEWER_ROW_COUNT
};

#endif
