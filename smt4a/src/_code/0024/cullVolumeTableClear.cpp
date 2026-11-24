#include "common.h"
#include "game/GameStateA.h"
#include "map/mapDepart.h"
#include "shard/RuntimeEntryTable.h"

extern "C" {

/* Clears every entry of the entry pool and its counters, and deselects the active group. */
void cullVolumeTableClear(void)
{
    DAT_00580c90.boundsCount = 0;
    for (s32 i = 0; i < 160; ++i) {
        for (s32 j = 0; j < 8; ++j) {
            g_recordTable[i].primaryVectors[j][0] = 0.0f;
            g_recordTable[i].primaryVectors[j][1] = 0.0f;
            g_recordTable[i].primaryVectors[j][2] = 0.0f;
        }
        g_recordTable[i].vector6C[0] = 0.0f;
        g_recordTable[i].vector6C[1] = 0.0f;
        g_recordTable[i].vector6C[2] = 0.0f;
        for (s32 j = 0; j < 6; ++j) {
            g_recordTable[i].secondaryVectors[j][0] = 0.0f;
            g_recordTable[i].secondaryVectors[j][1] = 0.0f;
            g_recordTable[i].secondaryVectors[j][2] = 0.0f;
            g_recordTable[i].scalars[j] = 0.0f;
        }
        g_recordTable[i].unk178 = 0;
        g_recordTable[i].unk17A = 0;
        g_recordTable[i].frame = 0;
        g_recordTable[i].first = 0;
        g_recordTable[i].second = 0;
        g_recordTable[i].unk16A = 0;
        g_recordTable[i].flags = 0;
        g_recordTable[i].mode = 0;
        g_recordTable[i].target = 0;
    }
    DAT_00580c90.count = 0;
    g_gameState.activeGroupId = 0xFFFFFFFFU;
}
}
