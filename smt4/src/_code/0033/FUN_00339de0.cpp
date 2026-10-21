/* NON_MATCHING: typed vector stores let the compiler retain g_btlMain; retail reloads the global pointer after both aggregate copies, also changing address scheduling. */
#include "shard/W5_W5Match4_BattleVectorTransition.h"

struct BattleSnapshotSource {
    u8 unk00[0x0c];  // 0x00
    BattleVector3 first; // 0x0c
    BattleVector3 second; // 0x18
    u32 value;            // 0x24
};
struct BattleSnapshotOwner {
    u8 unk0000[0x1ea4]; // 0x0000
    BattleVector3 first;  // 0x1ea4
    BattleVector3 second; // 0x1eb0
    u32 value;             // 0x1ebc
};

extern "C" {
extern BattleSnapshotSource* g_btlMain;

// Saves the battle's current pair of vectors and accompanying value.
void FUN_00339de0(BattleSnapshotOwner* owner)
{
    if (g_btlMain != NULL) {
        owner->first = g_btlMain->first;
        owner->second = g_btlMain->second;
        owner->value = g_btlMain->value;
    }
}
}
