/* NON_MATCHING: scheduling: retail finishes the version sum (in r1, digits loaded into r6/r4) before the header loads and
 * snapshot clears; this build interleaves its tail with the float stores and uses other registers. */
#include "battle/btlMain.h"

struct BattleCameraSnapshot;
extern "C" {
void __aeabi_memcpy4(void* destination, const void* source, u32 size);
void FUN_003f0c78(BtlMainStateA* battle);
void battleRestoreCameraVectors(const BattleCameraSnapshot* snapshot);

// Load the camera snapshot and the bounded combatant cache from a versioned file.
void FUN_004f5144(const BattleRosterCacheConfig* config, BtlMainStateA* battle,
                  const BattleRosterCacheFileHeader* file)
{
    s32 version = (file->version[0] - '0') * 1000;
    version += (file->version[1] - '0') * 100;
    version += (file->version[2] - '0') * 10;
    version += file->version[3] - '0';
    u32 dataSize = file->dataSize;
    const u8* payload = reinterpret_cast<const u8*>(file) + file->dataOffset;
    BattleRosterCacheSnapshotA& saved = battle->rosterSnapshot.saved;
    saved.first.x = 0.0f;
    saved.first.y = 0.0f;
    saved.first.z = 0.0f;
    saved.second.x = 0.0f;
    saved.second.y = 0.0f;
    saved.second.z = 0.0f;
    saved.value = 0;
    if (version == 1100) {
        __aeabi_memcpy4(&saved, payload, sizeof(BattleRosterCacheSnapshotA));
        payload += sizeof(BattleRosterCacheSnapshotA);
    }
    u32 count = (dataSize - sizeof(BattleRosterCacheSnapshotA)) / sizeof(BattleRosterCacheEntry);
    if (config->capacity < count) {
        count = config->capacity;
    }
    __aeabi_memcpy4(battle->rosterCache.entries, payload, count * sizeof(BattleRosterCacheEntry));
    FUN_003f0c78(battle);
    battleRestoreCameraVectors(reinterpret_cast<const BattleCameraSnapshot*>(battle));
}
}
