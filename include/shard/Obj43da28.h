/* The object held in g_buttonHelp (state at 0x10, settings near 0x4C5 and 0x550-0x560). */
#ifndef SHARD_OBJ43DA28_H
#define SHARD_OBJ43DA28_H

#include "common.h"

typedef struct Obj43da28 {
    /* 0x0000 */ u8 unk0000[0x10];
    /* 0x0010 */ s32 state;
    /* 0x0014 */ u8 unk0014[0x4B0];
    /* 0x04C4 */ u8 unk4C4;
    /* 0x04C5 */ u8 unk4C5;
    /* 0x04C6 */ u8 unk04C6[0x3];
    /* 0x04C9 */ u8 unk4C9;
    /* 0x04CA */ u8 unk04CA[0x1];
    /* 0x04CB */ u8 unk4CB;
    /* 0x04CC */ u8 unk04CC[0x84];
    /* 0x0550 */ u32 unk550;
    /* 0x0554 */ u8 unk554;
    /* 0x0555 */ u8 unk555;
    /* 0x0556 */ u8 unk556;
    /* 0x0557 */ u8 unk0557[0x1];
    /* 0x0558 */ u32 unk558;
    /* 0x055C */ u8 unk55C;
    /* 0x055D */ u8 unk055D[0x3];
    /* 0x0560 */ u32 unk560;
} Obj43da28;

/* Apocalypse's six button-help kinds and their active component flags. */
typedef struct ButtonHelpKind {
    /* 0x00 */ u8 kind;
    /* 0x01 */ u8 unk01[3];
} ButtonHelpKind;

typedef struct ButtonHelpCompatibility {
    /* 0x000 */ u8 unk000[0x5AC];
    /* 0x5AC */ ButtonHelpKind entries[6];
    /* 0x5C4 */ u8 unk5c4[0x10];
    /* 0x5D4 */ u8 active[7];
} ButtonHelpCompatibility;

typedef struct Holder43da28 {
    /* 0x0 */ u8 unk0[4];
    /* 0x4 */ Obj43da28 *obj;
} Holder43da28;

extern Holder43da28 g_buttonHelp;

#endif
