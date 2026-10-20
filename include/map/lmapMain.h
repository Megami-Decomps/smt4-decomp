/* map/lmapMain.c: the field map's main loop. */
#ifndef MAP_LMAPMAIN_H
#define MAP_LMAPMAIN_H

#include "common.h"

/* The field map's global state (Apocalypse). Only the fields the readable code touches are named. */
typedef struct LmapMain {
    /* 0x00 */ u8 unk00[0x74];
    /* 0x74 */ s8 unk74;
} LmapMain;

/* An object embedded in the map state; known only through the functions that take it. */
typedef struct LmapObj {
    /* 0x00 */ u8 unk00[1];
} LmapObj;

/* The field map's state block (Shin Megami Tensei IV layout), kept by a module global. */
typedef struct LmapMainState {
    /* 0x00 */ u32 job;           /* job that runs the map */
    /* 0x04 */ u8 unk04[4];
    /* 0x08 */ u8 freeOnEnd;      /* 0 = keep the block after the job ends */
    /* 0x09 */ u8 unk09[0x37];
    /* 0x40 */ s32 unk40;
    /* 0x44 */ u8 unk44[4];
    /* 0x48 */ u32 unk48;
    /* 0x4C */ u8 unk4C[0x7C];
    /* 0xC8 */ s32 unkC8;         /* float bits */
    /* 0xCC */ u32 unkCC;
    /* 0xD0 */ u8 unkD0[0x1C];
    /* 0xEC */ LmapObj obj;
} LmapMainState;

/* A polymorphic object: slot 1 of its vtable destroys it. */
typedef struct LmapScript {
    /* 0x00 */ void (**vtable)(struct LmapScript *self);
} LmapScript;

/* The map scene's block (Shin Megami Tensei IV layout), kept by a module global. */
typedef struct LmapScene {
    /* 0x000 */ u32 unk000;
    /* 0x004 */ u8 unk004[0x18];
    /* 0x01C */ LmapObj obj;
    /* 0x01D */ u8 unk01D[0x117];
    /* 0x134 */ u8 unk134;
    /* 0x135 */ u8 unk135[0x2F];
    /* 0x164 */ u32 handleA;
    /* 0x168 */ u8 unk168[0x0C];
    /* 0x174 */ u32 handleB;
    /* 0x178 */ u32 handleC;
    /* 0x17C */ u32 handleD;
    /* 0x180 */ u8 unk180[0x14];
    /* 0x194 */ LmapScript *script;
} LmapScene;

/* The map state block in Apocalypse. */
typedef struct LmapMainStateA {
    /* 0x00 */ u32 job;
    /* 0x04 */ u8 unk04[4];
    /* 0x08 */ u8 freeOnEnd;
    /* 0x09 */ u8 unk09[0xBF];
    /* 0xC8 */ s32 unkC8;         /* float bits */
    /* 0xCC */ u32 unkCC;
    /* 0xD0 */ u8 unkD0[0x24];
    /* 0xF4 */ LmapObj obj;
} LmapMainStateA;

/* Another map block (Apocalypse), reached through the word after DAT_005806a0. */
typedef struct LmapExtraA {
    /* 0x000 */ u8 unk000[0x2A8];
    /* 0x2A8 */ u32 unk2A8;
    /* 0x2AC */ u8 unk2AC[0x0C];
    /* 0x2B8 */ u8 unk2B8;
    /* 0x2B9 */ u8 unk2B9[3];
    /* 0x2BC */ u32 unk2BC;
    /* 0x2C0 */ u8 unk2C0[0x44];
    /* 0x304 */ u8 unk304;
} LmapExtraA;

typedef struct LmapExtraGlobalsA {
    /* 0x00 */ u32 unk00;
    /* 0x04 */ LmapExtraA *extra;
} LmapExtraGlobalsA;

/* The map's event state machine block (Apocalypse layout), kept by a module global. */
typedef struct LmapEventA {
    /* 0x00 */ s32 state;
    /* 0x04 */ s32 unk04;
    /* 0x08 */ s32 unk08;
    /* 0x0C */ s32 unk0C;
    /* 0x10 */ u8 unk10[4];
    /* 0x14 */ s32 unk14;
} LmapEventA;

/* The map scene's block in Apocalypse (only the fields read so far are named). */
typedef struct LmapSceneA {
    /* 0x000 */ u32 unk000;
    /* 0x004 */ u8 unk004[0x18];
    /* 0x01C */ LmapObj obj;
    /* 0x01D */ u8 unk01D[0x18B];
    /* 0x1A8 */ LmapScript *script;
    /* 0x1AC */ u8 unk1AC[0x24];
    /* 0x1D0 */ u32 unk1D0;
    /* 0x1D4 */ u32 unk1D4;
    /* 0x1D8 */ u8 unk1D8[0x50];
    /* 0x228 */ u32 unk228;
    /* 0x22C */ u8 unk22C;
    /* 0x22D */ u8 unk22D[0x0B];
    /* 0x238 */ u32 unk238;
    /* 0x23C */ u8 unk23C;
} LmapSceneA;

#endif
