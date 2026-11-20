/* NON_MATCHING: the entry pool's base and the counters' address swap registers (r5/r6), and the secondary vectors' address is formed with a separate add of 124. */
#include "common.h"
#include "game/GameStateA.h"
#include "map/mapDepart.h"
#include "shard/W9_W9Match8_WorkRecords.h"

extern "C" {
extern EntryPoolCountersA DAT_00580c90;
extern EntryPoolRecordA g_recordTable[160];

/* Clears a three-float vector. */
static __inline void vec3Clear(f32 *vector)
{
    vector[0] = 0.0f;
    vector[1] = 0.0f;
    vector[2] = 0.0f;
}

/* Clears every entry of the entry pool and its counters, and deselects the active group. */
void FUN_00244acc(void)
{
    DAT_00580c90.first = 0;
    for (s32 i = 0; i < 160; ++i) {
        EntryPoolRecordA &entry = g_recordTable[i];
        for (s32 j = 0; j < 8; ++j) {
            vec3Clear(entry.primaryVectors[j]);
        }
        vec3Clear(entry.vector6C);
        for (s32 j = 0; j < 6; ++j) {
            vec3Clear(entry.secondaryVectors[j]);
            entry.scalars[j] = 0.0f;
        }
        entry.value178 = 0;
        entry.value17A = 0;
        entry.value15C = 0;
        entry.value166 = 0;
        entry.value168 = 0;
        entry.value16A = 0;
        entry.value16C = 0;
        entry.value16D = 0;
        entry.value174 = 0;
    }
    DAT_00580c90.second = 0;
    g_gameState.activeGroupId = 0xFFFFFFFFU;
}
}
