#include "shard/W6_W6Match1_EnemyPosition.h"

struct MapEnemyEntryA {
    u8 active;
    u8 unk01[0x1f];
    EnemyPosition position;
    u8 unk2C[0x58];
    s32 state;
    u8 unk88[0x100];
};

struct MapEnemyStateA {
    u8 unk00[0x34];
    MapEnemyEntryA entries[40];
};

extern "C" {
extern MapEnemyStateA* g_mapEnemy;

EnemyPosition mapEnemyGetEncounterTargetPosition(void)
{
    EnemyPosition position;
    for (s32 index = 0; index < 40; ++index) {
        const MapEnemyEntryA* enemy = &g_mapEnemy->entries[index];
        if (enemy->active != 0 && (enemy->state == 31 || enemy->state == 30)) {
            return enemy->position;
        }
    }
    return position;
}
}
