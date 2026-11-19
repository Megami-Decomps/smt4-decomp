/* NON_MATCHING: only the map-block and player pointers occupy opposite callee-saved registers (r7/r6 here, r6/r7 in retail). */
#include "gamedata/MapSaveBlock.h"
#include "map/mapDepart.h"
#include "map/LmapGlobals.h"
#include "map/mapEnemy.h"
#include "AsdSDK/Source/Snd/SoundActorQueue.h"
#include "util/TrigF32.h"
#include "game/GameState.h"
#include "gamedata/GamePlayerData.h"

extern "C" {
f32 mathDistanceBetweenPoints(MapVector from, MapVector to);
f32 mathPositionHeadingDegrees(MapVector from, MapVector to);
f32 mathAbsHeadingErrorToPoint(MapVector from, f32 heading, MapVector to);

/* True when the encounter source is within range and facing `position`. */
static __inline bool isSourceApproaching(const MapVector &position)
{
    return mathDistanceBetweenPoints(g_gameState.event.encounterSourcePosition, position) < 250.0f &&
           mathAbsHeadingErrorToPoint(g_gameState.event.encounterSourcePosition, g_gameState.event.encounterSourceHeading, position) < 70.0f;
}

/* Checks whether an encounter source is close enough to the enemy and starts the approach marker. */
u32 FUN_00253968(MapEnemyEntry *enemy)
{
    MapSaveBlock *mapBlock = gameGetMapBlock();
    PlayerDataIV *player = gameGetPlayerData();
    if (g_gameState.event.encounterSourceActive != 0 && g_gameState.event.encounterSourceKind != 0) {
        bool approaching = isSourceApproaching(enemy->position);
        if (!approaching && (enemy->kind == 6 || enemy->kind == 16) && enemy->behavior == 4) {
            MapVector shifted = enemy->position;
            shifted.x += mathRemPio2f(enemy->heading * 0.0174532924f) * 100.0f;
            shifted.z += libm_cosf(enemy->heading * 0.0174532924f) * 100.0f;
            approaching = isSourceApproaching(shifted);
        }
        if (approaching) {
        if (g_gameState.event.encounterDelay == 0) {
            g_gameState.event.encounterDelay = 8;
            g_gameState.event.encounterEnemyIndex = enemy->index;
            f32 heading = mathPositionHeadingDegrees(enemy->position, g_gameState.event.encounterSourcePosition);
            g_gameState.event.encounterMarkerPosition.x = enemy->position.x;
            g_gameState.event.encounterMarkerPosition.y = enemy->position.y + 110.0f;
            g_gameState.event.encounterMarkerPosition.z = enemy->position.z;
            g_gameState.event.encounterMarkerHeading = heading;
            g_gameState.event.encounterApproach = 0;
            enemy->heading = mathPositionHeadingDegrees(enemy->position, g_lmapScene->pose.position);
            if (enemy->eventEnabled == 0 && mapBlock->eventEnabled != 0) {
                if (enemy->kind != 0 && enemy->kind < 11 && enemy->level < player->level)
                    g_gameState.event.encounterApproach = 1;
                else
                    g_gameState.event.encounterApproach = 0;
            }
            SoundActorQueuePosition soundPosition = { enemy->position.x, enemy->position.y + 110.0f, enemy->position.z };
            soundActorStartOnFreeChannel(g_gameState.event.encounterApproach != 0 ? 0x1000187 : 0x1000185, soundPosition);
        }
            return 1;
        }
    }
    return 0;
}
}
