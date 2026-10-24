/* NON_MATCHING: control flow and instructions match retail; register assignment differs (retail keeps the 0x49FA1C block in r5, map block r6, player r7, game state r8). */
#include "map/mapDepart.h"
#include "map/mapEnemy.h"

/* The map block's flag at +0xDC0 gates the approach-marker check. */
struct MapBlockView {
    u8 unk0000[0xDC0];
    s32 unkDC0;
};

/* The player record: the level at +0x76. */
struct PlayerLevelView {
    u8 unk00[0x76];
    u8 level;
};

/* The encounter trigger state kept beside the game state block (0x49FA1C). */
struct EncounterTriggerState {
    u8 unk00[0x7C];
    u8 sourceActive;
    u8 unk7D[0x15];
    u16 sourceKind;
    u16 delay;
    u16 modelId;
    u8 unk98;
    u8 approach;
};

/* The map scene: the player position at +0x1C. */
struct MapSceneView {
    u8 unk00[0x1C];
    MapVector position;
};

extern "C" {
extern GameState g_gameState;
extern MapSceneView *g_lmapScene;
extern EncounterTriggerState DAT_0049fa1c;
MapBlockView *gameGetMapBlock(void);
PlayerLevelView *gameGetPlayerData(void);
f32 mathDistanceBetweenPoints(MapVector from, MapVector to);
f32 mathPositionHeadingDegrees(MapVector from, MapVector to);
f32 FUN_00287a78(MapVector from, f32 heading, MapVector to);
f32 FUN_0028250c(f32 value);
f32 FUN_00282390(f32 value);
void FUN_00291e40(u32 sound, MapVector position);

/* True when the encounter source is within range and facing `position`. */
static __inline bool isSourceApproaching(const MapVector &position)
{
    return mathDistanceBetweenPoints(g_gameState.encounterSourcePosition, position) < 250.0f &&
           FUN_00287a78(g_gameState.encounterSourcePosition, g_gameState.encounterSourceHeading, position) < 70.0f;
}

/* Checks whether an encounter source is close enough to the enemy and starts the approach marker. */
u32 FUN_00253968(MapEnemyEncounterView *enemy)
{
    MapBlockView *mapBlock = gameGetMapBlock();
    PlayerLevelView *player = gameGetPlayerData();
    if (DAT_0049fa1c.sourceActive != 0 && DAT_0049fa1c.sourceKind != 0) {
        bool approaching = isSourceApproaching(enemy->position);
        if (!approaching && (enemy->kind == 6 || enemy->kind == 16) && enemy->behavior == 4) {
            MapVector shifted = enemy->position;
            shifted.x += FUN_0028250c(enemy->heading * 0.0174532924f) * 100.0f;
            shifted.z += FUN_00282390(enemy->heading * 0.0174532924f) * 100.0f;
            approaching = isSourceApproaching(shifted);
        }
        if (approaching) {
        if (DAT_0049fa1c.delay == 0) {
            DAT_0049fa1c.delay = 8;
            DAT_0049fa1c.modelId = enemy->modelId;
            f32 heading = mathPositionHeadingDegrees(enemy->position, g_gameState.encounterSourcePosition);
            g_gameState.encounterMarkerPosition.x = enemy->position.x;
            g_gameState.encounterMarkerPosition.y = enemy->position.y + 110.0f;
            g_gameState.encounterMarkerPosition.z = enemy->position.z;
            g_gameState.encounterApproach = 0;
            g_gameState.encounterMarkerHeading = heading;
            enemy->heading = mathPositionHeadingDegrees(enemy->position, g_lmapScene->position);
            if (enemy->eventEnabled == 0 && mapBlock->unkDC0 != 0) {
                if (enemy->kind != 0 && enemy->kind < 11 && enemy->level < player->level)
                    g_gameState.encounterApproach = 1;
                else
                    g_gameState.encounterApproach = 0;
            }
            MapVector soundPosition = { enemy->position.x, enemy->position.y + 110.0f, enemy->position.z };
            FUN_00291e40(DAT_0049fa1c.approach != 0 ? 0x1000187 : 0x1000185, soundPosition);
        }
            return 1;
        }
    }
    return 0;
}
}
