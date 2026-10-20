#include "map/mapEnemy.h"

extern "C" {

extern MapEnemy *g_mapEnemy;

/* Moves enemies that are mid-pursuit into the matching state. */
void mapEnemyAdvancePursuit(void)
{
    MapEnemy *enemies = g_mapEnemy;
    MapEnemyEntry *entry;
    s32 i;

    enemies->unk3044 = 0;
    for (i = 0; i < MAP_ENEMY_COUNT; i++) {
        entry = &enemies->entries[i];
        if (entry->active != 0 && entry->unk174 != 0 && entry->unk174 < 0xB && entry->unk7D == 0) {
            switch (entry->state) {
            case 0:
            case 4:
            case 5:
                entry->state = 0x14;
                entry->unk88 = 0;
                break;
            case 2:
                entry->state = 0x16;
                entry->unk88 = 0;
                break;
            }
        }
    }
}

} /* extern "C" */
