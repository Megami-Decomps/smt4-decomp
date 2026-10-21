/* NON_MATCHING: typed vector stores let the compiler retain g_btlCamera; retail reloads its global pointer after both vector assignments, with different address scheduling. */
#include "shard/W5_W5Match4_BattleVectorTransition.h"

struct BattleCameraTransform {
    u8 unk00[0x1c]; // 0x00
    BattleVector3 first; // 0x1c
    BattleVector3 second; // 0x28
    u32 value;            // 0x34
};
struct BattleCameraSnapshot {
    u8 unk0000[0x1ee0]; // 0x0000
    BattleVector3 first;  // 0x1ee0
    BattleVector3 second; // 0x1eec
    u32 value;             // 0x1ef8
};

extern "C" {
extern BattleCameraTransform* g_btlCamera;

// Restores the battle camera's saved pair of vectors and accompanying value.
void FUN_003f0b80(const BattleCameraSnapshot* snapshot)
{
    if (g_btlCamera != NULL) {
        g_btlCamera->first = snapshot->first;
        g_btlCamera->second = snapshot->second;
        g_btlCamera->value = snapshot->value;
    }
}
}
