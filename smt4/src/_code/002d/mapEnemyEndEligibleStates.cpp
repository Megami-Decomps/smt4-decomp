#include "map/mapEnemy.h"

namespace {
struct EnemyWorld {
    /* 0x0000 */ u8 unk0000[0x34];
    /* 0x0034 */ MapEnemyEntry entries[MAP_ENEMY_COUNT];
    /* 0x3034 */ u8 unk3034[8];
    /* 0x303c */ s32 activeCount;
};
}

extern "C" {
extern EnemyWorld *g_mapEnemy;

/* Ends eligible enemy states and updates the active enemy count. */
void mapEnemyEndEligibleStates(void)
{
    for (s32 index = 0; index < MAP_ENEMY_COUNT; index++) {
        MapEnemyEntry *enemy = &g_mapEnemy->entries[index];
        if (enemy->active != 0 && enemy->unk174 != 0 && enemy->unk174 < 11 &&
            enemy->unk7D == 0) {
            switch (enemy->state) {
            case 7:
            case 8:
            case 13:
            case 14:
            case 15:
                g_mapEnemy->activeCount--;
                enemy->state = 9;
                enemy->unk88 = 0;
                break;
            }
        }
    }
}
}
