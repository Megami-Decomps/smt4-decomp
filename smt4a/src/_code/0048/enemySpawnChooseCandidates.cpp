/* NON_MATCHING: 72 lines (191 vs 191 rows): retail hoists the g_lmapScene load into the switch dispatch before case 1/2 and swaps a few scratch registers; all loops, callee-saved registers, and VFP arithmetic match. */
#include "map/EnemySpawnState.h"
#include "map/LmapGlobals.h"
#include <math.h>
#include "gamedata/DataTable.h"

extern "C" {
const EnemySpawnRecord *fieldFindAreaPlacementRecord(u32 index);
const EnemySpawnCondition *dataTable29GetEntry(u16 id);
s32 gameFlagIsSet(u32 flag);
s32 randRange(u32 maximum);
void FUN_00483304(EnemySpawnOwner *owner, u32 sourceIndex);
}

static __inline bool enemySpawnStoryAllowed(const EnemySpawnRecord *record)
{
    return record->kind != 1 || (gameFlagIsSet(0x137) != 0 && gameFlagIsSet(0x147) == 0);
}

/* Exclude existing spawn objects, then choose by distance or spawn every unlocked special entry. */
extern "C" void enemySpawnChooseCandidates(EnemySpawnOwner *owner, s32 mode)
{
    u16 count = owner->candidateCount;
    if (count == 0) {
        return;
    }
    u16 available[512];
    u16 availableCount = 0;
    for (s32 index = 0; index < count; ++index) {
        bool exists = false;
        for (s32 slot = 0; slot < 32; ++slot) {
            const EnemySpawnObject *object = owner->objects[slot];
            if (object != NULL && owner->candidates[index] == object->sourceIndex) {
                exists = true;
                break;
            }
        }
        if (!exists) {
            available[availableCount++] = owner->candidates[index];
        }
    }
    if (availableCount == 0) {
        return;
    }

    u16 selected = 0;
    switch (mode) {
    case 0:
        selected = available[randRange((u16)(availableCount - 1))];
        break;
    case 3: {
        for (s32 index = 0; index < availableCount; ++index) {
            const EnemySpawnRecord *record = fieldFindAreaPlacementRecord(available[index]);
            if (!enemySpawnStoryAllowed(record)) {
                continue;
            }
            const EnemySpawnCondition *condition = dataTable29GetEntry(record->id);
            if (condition->type == 3 && gameFlagIsSet(condition->flag) == 0) {
                FUN_00483304(owner, available[index]);
            }
        }
        return;
    }
    case 1:
    case 2: {
        MapVector position;
        position.x = g_lmapScene->pose.position.x;
        position.y = g_lmapScene->pose.position.y;
        position.z = g_lmapScene->pose.position.z;
        u16 filtered[512];
        u16 filteredCount = 0;
        for (s32 index = 0; index < availableCount; ++index) {
            const EnemySpawnRecord *record = fieldFindAreaPlacementRecord(available[index]);
            if (!enemySpawnStoryAllowed(record)) {
                continue;
            }
            const EnemySpawnCondition *condition = dataTable29GetEntry(record->id);
            if (condition->type == 3 && gameFlagIsSet(condition->flag) != 0) {
                continue;
            }
            MapVector offset;
            offset.x = position.x - (f32)record->x;
            offset.y = position.y - (f32)record->y;
            offset.z = position.z - (f32)record->z;
            union { f32 value; u32 bits; } distance;
            distance.value = sqrtf(offset.x * offset.x + offset.y * offset.y + offset.z * offset.z);
            /* Retail tests strict positive-distance ranges using their IEEE word ordering. */
            if (mode == 1) {
                if (distance.bits - 0x44610001u < 0x00da7fffu) {
                    filtered[filteredCount++] = available[index];
                }
            } else if (mode == 2 && distance.bits - 0x43960001u < 0x01e3ffffu) {
                filtered[filteredCount++] = available[index];
            }
        }
        if (filteredCount == 0) {
            return;
        }
        selected = filtered[randRange((u16)(filteredCount - 1))];
        break;
    }
    default:
        break;
    }
    FUN_00483304(owner, selected);
}
