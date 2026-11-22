#include "common.h"
#include "game/GameStateA.h"
#include "map/mapDepart.h"
#include "shard/W9_W9Match8_WorkRecords.h"

extern "C" {
extern EntryPoolCountersA DAT_00580c90;
extern EntryPoolRecordA g_recordTable[160];

/* Clears every entry of the entry pool and its counters, and deselects the active group. */
void cullVolumeTableClear(void)
{
    DAT_00580c90.first = 0;
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
        g_recordTable[i].value178 = 0;
        g_recordTable[i].value17A = 0;
        g_recordTable[i].value15C = 0;
        g_recordTable[i].value166 = 0;
        g_recordTable[i].value168 = 0;
        g_recordTable[i].value16A = 0;
        g_recordTable[i].value16C = 0;
        g_recordTable[i].value16D = 0;
        g_recordTable[i].value174 = 0;
    }
    DAT_00580c90.second = 0;
    g_gameState.activeGroupId = 0xFFFFFFFFU;
}
}
