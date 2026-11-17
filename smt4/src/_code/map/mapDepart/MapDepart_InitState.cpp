#include "gamedata/MapSaveBlock.h"
#include "map/mapDepart.h"
#include "game/GameState.h"

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

extern "C" {

void mapAdjustPositionToGround(MapVector *position);
void mapBlockLoadTableRecord(void);

// Reset the departure state; when `save` is set, record the current position in the map block.
void MapDepart_InitState(MapDepartState *state, s32 save)
{
    MapSaveBlock *point = gameGetMapBlock();
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
    mapAdjustPositionToGround(&g_gameState.position);
    if (save) {
        point->savePoint.scale = (s16)g_gameState.overviewHeading;
        point->savePoint.mapId = g_gameState.mapId;
        point->savePoint.areaId = g_gameState.areaId;
        point->savePointObjectId = g_gameState.currentObjectId;
        point->savePoint.x = (s16)g_gameState.position.x;
        point->savePoint.y = (s16)g_gameState.position.y;
        point->savePoint.z = (s16)g_gameState.position.z;
        point->savePoint.heading = (s16)g_gameState.heading;
        point->savePoint.tableType = g_gameState.tableKind;
        point->savePoint.tableId = g_gameState.recordId;
    }
    mapBlockLoadTableRecord();
    GameStateDepartBlock *block = &g_gameState.depart;
    block->value = 0;
    block->counterA = 0;
    block->counterB = 0;
}

} /* extern "C" */
