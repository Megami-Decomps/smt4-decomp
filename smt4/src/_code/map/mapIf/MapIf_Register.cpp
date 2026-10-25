/* NON_MATCHING: readable rewrite of the map-interface registration (allocate and clear the state, create its four tasks, set up the three marker quads); retail also loads two debug arguments (a source-path string and a line number) that asdMemAlloc discards, and schedules the quad stores in a different order with the state fields interleaved. */
#include "common.h"
#include "bible/bibleAnalyze.h"

// A map-interface marker quad: four corners of (x, y, z).
struct MapIfQuad {
    f32 corner[4][3];
};

// One marker slot (0x630 bytes): its quad followed by data this function does not touch.
struct MapIfMarkerSlot {
    MapIfQuad quad;
    u8 unk30[0x600];
};

// The map interface's state block, as far as registration initialises it.
struct MapIfRegisterView {
    /* 0x0000 */ u32 updateTask;
    /* 0x0004 */ u32 drawUpTask;
    /* 0x0008 */ u32 meshTask;
    /* 0x000C */ u8 unk0c[8];
    /* 0x0014 */ u8 unk14;
    /* 0x0015 */ u8 variant;
    /* 0x0016 */ u8 unk16;
    /* 0x0017 */ u8 unk17;
    /* 0x0018 */ u8 unk18;
    /* 0x0019 */ u8 unk19[3];
    /* 0x001C */ s32 unk1c;
    /* 0x0020 */ u8 unk20;
    /* 0x0021 */ u8 unk21[0xf];
    /* 0x0030 */ s32 unk30;
    /* 0x0034 */ s32 unk34;
    /* 0x0038 */ s32 unk38;
    /* 0x003C */ u8 unk3c[0xcb94];
    /* 0xCBD0 */ u8 unkcbd0;
    /* 0xCBD1 */ u8 unkcbd1[0xe7];
    /* 0xCCB8 */ s16 unkccb8;
    /* 0xCCBA */ s16 unkccba;
    /* 0xCCBC */ u8 unkccbc[4];
    /* 0xCCC0 */ u8 unkccc0;
    /* 0xCCC1 */ u8 unkccc1[0xb];
    /* 0xCCCC */ f32 unkcccc;
    /* 0xCCD0 */ f32 unkccd0;
    /* 0xCCD4 */ f32 unkccd4;
    /* 0xCCD8 */ u8 unkccd8;
    /* 0xCCD9 */ u8 unkccd9[7];
    /* 0xCCE0 */ u8 unkcce0;
    /* 0xCCE1 */ u8 unkcce1[3];
    /* 0xCCE4 */ s32 unkcce4;
};

extern "C" {
extern MapIfRegisterView *g_mapIf;
extern MapIfMarkerSlot DAT_004b5d30[3];

u32 taskCreateDraw(const char *name, s32 priority, s32 workSize, s32 flags, void (*update)(void), void (*draw)(void),
                   void *owner, u32 parent);
void mapRegisterDefaultInterface(void);
void mapIfFreeWork(void);
void MAPIF_DrawUp(void);
void FUN_0021ef10(void);
void FUN_001e84f0(void);
void FUN_00297a00(void);

// Registers the map interface: allocates its state, clears it, creates the update, draw-up, fade and mesh tasks and
// fills the three marker quads (one facing the camera, two lying on the ground plane).
void MapIf_Register(u32 parent, u8 variant)
{
    MapIfRegisterView *state = (MapIfRegisterView *)asdMemAlloc(0x100, 0x100, 0, 0xcce8, 1);
    g_mapIf = state;
    state->unk14 = 0;
    state->unk16 = 0;
    state->unk18 = 0;
    state->unk1c = 0;
    state->unk20 = 0;
    state->unk30 = 0;
    state->unk34 = 0;
    state->unk38 = 0;
    state->unkcbd0 = 0;
    state->unkccb8 = 0;
    state->unkccba = 0;
    state->unkccc0 = 0;
    state->unkcccc = 0.0f;
    state->unkccd0 = 0.0f;
    state->unkccd4 = 0.0f;
    state->unkccd8 = 0;
    state->unkcce0 = 0;
    state->unkcce4 = 0;
    state->updateTask = taskCreateDraw("MAPIF C", 2, 0, 0, mapRegisterDefaultInterface, mapIfFreeWork, 0, parent);
    state->drawUpTask = taskCreateDraw("MAPIF U", 0x73, 0, 0, MAPIF_DrawUp, 0, 0, state->updateTask);
    taskCreateDraw("MAP FADE", 0x85, 0, 0, FUN_0021ef10, 0, 0, state->updateTask);
    state->meshTask = taskCreateDraw("MIF3DL", 0x6f, 0, 0, FUN_001e84f0, 0, 0, state->updateTask);
    // The facing quad spans x -64..64, y -16..16; the two ground quads span x -64..64, z -16..16.
    DAT_004b5d30[0].quad.corner[0][0] = -64.0f;
    DAT_004b5d30[0].quad.corner[0][1] = 16.0f;
    DAT_004b5d30[0].quad.corner[0][2] = 0.0f;
    DAT_004b5d30[0].quad.corner[1][0] = -64.0f;
    DAT_004b5d30[0].quad.corner[1][1] = -16.0f;
    DAT_004b5d30[0].quad.corner[1][2] = 0.0f;
    DAT_004b5d30[0].quad.corner[2][0] = 64.0f;
    DAT_004b5d30[0].quad.corner[2][1] = 16.0f;
    DAT_004b5d30[0].quad.corner[2][2] = 0.0f;
    DAT_004b5d30[0].quad.corner[3][0] = 64.0f;
    DAT_004b5d30[0].quad.corner[3][1] = -16.0f;
    DAT_004b5d30[0].quad.corner[3][2] = 0.0f;
    DAT_004b5d30[1].quad.corner[0][0] = -64.0f;
    DAT_004b5d30[1].quad.corner[0][1] = 0.0f;
    DAT_004b5d30[1].quad.corner[0][2] = 16.0f;
    DAT_004b5d30[1].quad.corner[1][0] = -64.0f;
    DAT_004b5d30[1].quad.corner[1][1] = 0.0f;
    DAT_004b5d30[1].quad.corner[1][2] = -16.0f;
    DAT_004b5d30[1].quad.corner[2][0] = 64.0f;
    DAT_004b5d30[1].quad.corner[2][1] = 0.0f;
    DAT_004b5d30[1].quad.corner[2][2] = 16.0f;
    DAT_004b5d30[1].quad.corner[3][0] = 64.0f;
    DAT_004b5d30[1].quad.corner[3][1] = 0.0f;
    DAT_004b5d30[1].quad.corner[3][2] = -16.0f;
    DAT_004b5d30[2].quad.corner[0][0] = -64.0f;
    DAT_004b5d30[2].quad.corner[0][1] = 0.0f;
    DAT_004b5d30[2].quad.corner[0][2] = -16.0f;
    DAT_004b5d30[2].quad.corner[1][0] = -64.0f;
    DAT_004b5d30[2].quad.corner[1][1] = 0.0f;
    DAT_004b5d30[2].quad.corner[1][2] = 16.0f;
    DAT_004b5d30[2].quad.corner[2][0] = 64.0f;
    DAT_004b5d30[2].quad.corner[2][1] = 0.0f;
    DAT_004b5d30[2].quad.corner[2][2] = -16.0f;
    DAT_004b5d30[2].quad.corner[3][0] = 64.0f;
    DAT_004b5d30[2].quad.corner[3][1] = 0.0f;
    DAT_004b5d30[2].quad.corner[3][2] = 16.0f;
    state->variant = variant;
    FUN_00297a00();
}
}
