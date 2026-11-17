/* NON_MATCHING: readable rewrite of the map-interface registration (allocate and clear the state, create its four tasks, set up the three marker quads); retail also loads two debug arguments (a source-path string and a line number) that asdMemAlloc discards, and schedules the quad stores in a different order with the state fields interleaved. */
#include "map/MapIfGlobals.h"
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

extern "C" {
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
    MapIfState *state = (MapIfState *)asdMemAlloc(0x100, 0x100, 0, 0xcce8, 1);
    g_mapIf.state = state;
    state->unk14 = 0;
    state->mode = 0;
    state->unk18 = 0;
    state->unk1C = 0;
    state->unk20 = 0;
    state->unk30 = 0;
    state->unk34 = 0;
    state->unk38 = 0;
    state->slots[0].active = 0;
    state->notice.state = 0;
    state->notice.frame = 0;
    state->fade.active = 0;
    state->fade.offset[0] = 0.0f;
    state->fade.offset[1] = 0.0f;
    state->fade.offset[2] = 0.0f;
    state->unkCCD8 = 0;
    state->unkCCE0 = 0;
    state->unkCCE4 = 0;
    state->job = taskCreateDraw("MAPIF C", 2, 0, 0, mapRegisterDefaultInterface, mapIfFreeWork, 0, parent);
    state->drawUpTask = taskCreateDraw("MAPIF U", 0x73, 0, 0, MAPIF_DrawUp, 0, 0, state->job);
    taskCreateDraw("MAP FADE", 0x85, 0, 0, FUN_0021ef10, 0, 0, state->job);
    state->meshTask = taskCreateDraw("MIF3DL", 0x6f, 0, 0, FUN_001e84f0, 0, 0, state->job);
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
