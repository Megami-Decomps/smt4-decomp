/* NON_MATCHING: Entry-reset loop counters and global-base registers differ. */
#include "common.h"
#include "map/mapDepart.h"
#include "shard/W9_W9Match8_WorkRecords.h"

extern "C" {
extern EntryPoolCountersA DAT_00580c90;
extern EntryPoolRecordA DAT_005f32a0[160];
extern GameStateA g_gameState;

void FUN_00244acc(void)
{
    DAT_00580c90.first = 0;
    for (s32 i = 0; i < 160; ++i) {
        EntryPoolRecordA &entry = DAT_005f32a0[i];
        for (s32 j = 0; j < 8; ++j) {
            entry.primaryVectors[j][0] = 0.0f;
            entry.primaryVectors[j][1] = 0.0f;
            entry.primaryVectors[j][2] = 0.0f;
        }
        entry.vector6C[0] = 0.0f;
        entry.vector6C[1] = 0.0f;
        entry.vector6C[2] = 0.0f;
        for (s32 j = 0; j < 6; ++j) {
            entry.secondaryVectors[j][0] = 0.0f;
            entry.secondaryVectors[j][1] = 0.0f;
            entry.secondaryVectors[j][2] = 0.0f;
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
    g_gameState.entryPoolReset.value3C = 0xFFFFFFFFU;
}
}
