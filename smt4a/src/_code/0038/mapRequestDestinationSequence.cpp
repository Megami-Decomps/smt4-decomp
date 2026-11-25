/* NON_MATCHING: retail takes the saved-return copy from a shared sub-block of the game state;
 * the copy address computation still differs. */
#include "map/mapDepart.h"
#include "map/MapSelection.h"
#include "shard/W6_W6Match2_EntrySequence.h"
#include "game/GameStateA.h"

enum {
    MAP_GROUP_MIDDLE = 100,
    MAP_GROUP_HIGH = 200,
    MAP_SEQUENCE_LOW = 6,
    MAP_SEQUENCE_MIDDLE = 8,
    MAP_SEQUENCE_HIGH = 14
};

extern "C" {

/* Selects the destination sequence, preserving map return data when needed. */
void mapRequestDestinationSequence(void)
{
    if (g_gameState.savedLocationSet != 0) {
        if ((s32)g_gameState.targetMapId >= MAP_GROUP_HIGH) {
            /* The high-group index belongs to this request only; the other sequences take no packet. */
            s32 sequenceArgument = g_gameState.targetMapId - MAP_GROUP_HIGH;
            g_gameState.savedAreaId = 0;
            asdSequenceRequest(MAP_SEQUENCE_HIGH, &sequenceArgument, sizeof(sequenceArgument));
            return;
        }
        if ((s32)g_gameState.targetMapId >= MAP_GROUP_MIDDLE) {
            if ((s32)g_gameState.savedMapId < MAP_GROUP_MIDDLE) {
                g_gameState.savedMapId = g_gameState.targetMapId;
                g_gameState.savedAreaId = g_gameState.targetAreaId;
                g_gameState.savedPosition = g_gameState.targetPosition;
                g_gameState.savedHeading = g_gameState.targetHeading;
            }
            asdSequenceRequest(MAP_SEQUENCE_MIDDLE, NULL, 0);
        } else {
            asdSequenceRequest(MAP_SEQUENCE_LOW, NULL, 0);
        }
    } else {
        s32 requestedMap = g_mapSelection.id;
        if (requestedMap != -1) {
            if (requestedMap >= MAP_GROUP_HIGH) {
                s32 sequenceArgument = requestedMap - MAP_GROUP_HIGH;
                asdSequenceRequest(MAP_SEQUENCE_HIGH, &sequenceArgument, sizeof(sequenceArgument));
            } else if (requestedMap >= MAP_GROUP_MIDDLE) {
                asdSequenceRequest(MAP_SEQUENCE_MIDDLE, NULL, 0);
            } else {
                asdSequenceRequest(MAP_SEQUENCE_LOW, NULL, 0);
            }
        } else {
            /* An absent map selection requests entry 3 of the high group. */
            s32 sequenceArgument = 3;
            asdSequenceRequest(MAP_SEQUENCE_HIGH, &sequenceArgument, sizeof(sequenceArgument));
        }
    }
}
} /* extern "C" */
