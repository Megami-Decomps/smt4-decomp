#include "map/MapEffectReservation.h"
#include "shard/S1Mover.h"
#include "game/GameState.h"

extern "C" {

/* Clears every culling volume and the volume counts. */
void cullVolumeTableClear(void)
{
    s32 i;
    s32 j;
    g_entryTableInfo.boundsCount = 0;
    for (i = 0; i < 160; i++) {
        for (j = 0; j < 8; j++) {
            g_namedEntryTable[i].corners[j].x = 0.0f;
            g_namedEntryTable[i].corners[j].y = 0.0f;
            g_namedEntryTable[i].corners[j].z = 0.0f;
        }
        g_namedEntryTable[i].direction.x = 0.0f;
        g_namedEntryTable[i].direction.y = 0.0f;
        g_namedEntryTable[i].direction.z = 0.0f;
        for (j = 0; j < 6; j++) {
            g_namedEntryTable[i].planeNormals[j].x = 0.0f;
            g_namedEntryTable[i].planeNormals[j].y = 0.0f;
            g_namedEntryTable[i].planeNormals[j].z = 0.0f;
            g_namedEntryTable[i].planeDistances[j] = 0.0f;
        }
        g_namedEntryTable[i].state.unk174 = 0;
        g_namedEntryTable[i].state.unk176 = 0;
        g_namedEntryTable[i].state.frame = 0;
        g_namedEntryTable[i].state.firstParameter = 0;
        g_namedEntryTable[i].state.secondParameter = 0;
        g_namedEntryTable[i].state.unk16A = 0;
        g_namedEntryTable[i].state.channel = 0;
        g_namedEntryTable[i].state.mode = 0;
    }
    g_entryTableInfo.count = 0;
    g_gameState.area = -1;
}
}
