/* NON_MATCHING: vector subtraction batching and conversion/copy saved-register allocation differ. */
#include "map/mapDepart.h"

// Apocalypse's 0x188-byte enemy entries are not the shared IV 0x180-byte records.
struct EnemyMotionEntryA {
    u8 active;
    u8 unk01[7];
    MapVector position;
    u8 unk14[0xc];
    MapVector previousPosition;
    f32 heading;
    u8 unk30[0x54];
    s32 state, elapsed;
    u8 unk8C[0x78];
    MapVector start;
    f32 startHeading;
    MapVector target;
    f32 targetHeading, duration;
    MapVector step;
    f32 holdTime;
    u8 unk138[0x44];
    s32 kind;
    u8 unk180[8];
};
struct EnemyMotionStateA { u8 prefix[0x34]; EnemyMotionEntryA entries[40]; };
struct EnemyMotionRecord {
    u8 prefix[0x1c];
    s16 start[3], startHeading, target[3], targetHeading, duration, holdTime;
};
struct EnemyMotionSelection { u8 prefix[0x84]; s16 id; };
typedef char EnemyMotionEntryAOffsetsCheck[sizeof(EnemyMotionEntryA) == 0x188 &&
    offsetof(EnemyMotionEntryA, state) == 0x84 &&
    offsetof(EnemyMotionEntryA, start) == 0x104 &&
    offsetof(EnemyMotionEntryA, step) == 0x128 &&
    offsetof(EnemyMotionEntryA, kind) == 0x17c ? 1 : -1];
extern "C" {
extern EnemyMotionStateA *g_mapEnemy;
extern EnemyMotionSelection DAT_005f17fc;
const EnemyMotionRecord *FUN_003a315c(s32 id);
void FUN_00377acc(EnemyMotionEntryA *entry, s32 id, s32 mode);

void FUN_002b621c()
{
    EnemyMotionStateA *state = g_mapEnemy;
    const EnemyMotionRecord *record = FUN_003a315c(DAT_005f17fc.id);
    for (s32 index = 0; index < 40; ++index) {
        EnemyMotionEntryA *entry = &state->entries[index];
        if (entry->active != 0 && entry->kind != 0 && entry->kind < 11 && entry->state == 2) {
            entry->start.x = static_cast<f32>(record->start[0]);
            entry->start.y = static_cast<f32>(record->start[1]);
            entry->start.z = static_cast<f32>(record->start[2]);
            entry->startHeading = static_cast<f32>(record->startHeading);
            entry->target.x = static_cast<f32>(record->target[0]);
            entry->target.y = static_cast<f32>(record->target[1]);
            entry->target.z = static_cast<f32>(record->target[2]);
            entry->targetHeading = static_cast<f32>(record->targetHeading);
            entry->duration = static_cast<f32>(record->duration);
            entry->step.x = entry->target.x - entry->start.x;
            entry->step.y = entry->target.y - entry->start.y;
            entry->step.z = entry->target.z - entry->start.z;
            f32 inverseDuration = 1.0f / entry->duration;
            entry->step.x *= inverseDuration;
            entry->step.y *= inverseDuration;
            entry->step.z *= inverseDuration;
            entry->holdTime = static_cast<f32>(record->holdTime);
            entry->position = entry->start;
            entry->previousPosition = entry->start;
            entry->heading = entry->startHeading;
            entry->state = 26;
            entry->elapsed = 0;
            FUN_00377acc(entry, DAT_005f17fc.id, 3);
            return;
        }
    }
}
}
