#include "map/mapDepart.h"

/* The departure state machine's block. */
struct MapDepartState {
    /* 0x00 */ u8 unk00[0x18];
    /* 0x18 */ u32 unk18;
    /* 0x1C */ u32 unk1C;
    /* 0x20 */ u8 unk20;
    /* 0x21 */ u8 unk21[0x3];
    /* 0x24 */ u32 unk24;
    /* 0x28 */ u32 unk28;
    /* 0x2C */ u8 unk2C;
    /* 0x2D */ u8 unk2D;
    /* 0x2E */ u8 unk2E[0x2];
    /* 0x30 */ u32 unk30;
    /* 0x34 */ u8 unk34;
    /* 0x35 */ u8 unk35[0x3];
    /* 0x38 */ u32 unk38;
    /* 0x3C */ u8 unk3C;
    /* 0x3D */ u8 unk3D[0x3];
    /* 0x40 */ u32 unk40;
    /* 0x44 */ u32 unk44;
};

/* Where the map block keeps the departure point (Shin Megami Tensei IV). */
struct MapDepartSavePoint {
    /* 0x000 */ u8 unk000[0x28];
    /* 0x028 */ s16 unk28;
    /* 0x02A */ s16 unk2A;
    /* 0x02C */ s16 scale;
    /* 0x02E */ s16 mapId;
    /* 0x030 */ s16 areaId;
    /* 0x032 */ s16 x;
    /* 0x034 */ s16 y;
    /* 0x036 */ s16 z;
    /* 0x038 */ s16 unk38;
    /* 0x03A */ u8 unk03A[0xDA2];
    /* 0xDDC */ u32 objectId;
};

struct MapDepartGlobals {
    /* 0x00 */ u8 unk00[0x50];
    /* 0x50 */ u32 unk50;
    /* 0x54 */ u8 unk54[0x50];
    /* 0xA4 */ u16 unkA4;
    /* 0xA6 */ u16 unkA6;
};

extern "C" {

extern GameState g_gameState;
extern MapDepartGlobals DAT_0049fd38;
MapDepartSavePoint *gameGetMapBlock(void);
void FUN_00270f70(MapVector *position);
void mapBlockLoadTableRecord(void);

// Reset the departure state; when `save` is set, record the current position in the map block.
void MapDepart_InitState(MapDepartState *state, s32 save)
{
    MapDepartSavePoint *point = gameGetMapBlock();
    state->unk18 = 0;
    state->unk1C = 0;
    state->unk20 = 0;
    state->unk24 = 0;
    state->unk28 = 0;
    state->unk2C = 0;
    state->unk2D = 0;
    state->unk30 = 0;
    state->unk34 = 0;
    state->unk38 = 0;
    state->unk3C = 0;
    state->unk40 = 0;
    state->unk44 = 0;
    FUN_00270f70(&g_gameState.position);
    if (save) {
        point->scale = (s16)g_gameState.unk90Scalar;
        point->mapId = g_gameState.unk000;
        point->areaId = g_gameState.unk004Value;
        point->objectId = g_gameState.currentObjectId;
        point->x = (s16)g_gameState.position.x;
        point->y = (s16)g_gameState.position.y;
        point->z = (s16)g_gameState.position.z;
        point->unk38 = (s16)g_gameState.unkA0;
        point->unk28 = g_gameState.unkA4;
        point->unk2A = g_gameState.unkA8;
    }
    mapBlockLoadTableRecord();
    DAT_0049fd38.unk50 = 0;
    DAT_0049fd38.unkA4 = 0;
    DAT_0049fd38.unkA6 = 0;
}

} /* extern "C" */
