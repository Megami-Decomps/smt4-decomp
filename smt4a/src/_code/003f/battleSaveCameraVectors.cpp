#include "shard/W5_W5Match4_BattleVectorTransition.h"

struct BattleSnapshotSource {
    u8 unk00[0x1c];  // 0x00
    BattleVector3 first; // 0x1c
    BattleVector3 second; // 0x28
    u32 value;            // 0x34
};
struct BattleSnapshotOwner {
    u8 unk0000[0x1ee0]; // 0x0000
    BattleVector3 first;  // 0x1ee0
    BattleVector3 second; // 0x1eec
    u32 value;             // 0x1ef8
};

extern "C" {
extern BattleSnapshotSource* g_btlCamera;

// Saves the battle's current pair of vectors and accompanying value.
void battleSaveCameraVectors(BattleSnapshotOwner* owner)
{
    if (g_btlCamera != NULL) {
        battleVectorCopy(&owner->first, &g_btlCamera->first);
        battleVectorCopy(&owner->second, &g_btlCamera->second);
        owner->value = g_btlCamera->value;
    }
}
}
