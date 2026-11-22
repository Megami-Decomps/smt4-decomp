/* NON_MATCHING: rewritten from the raw draft; same tests, calls and switches as retail. Retail lays the stage
 * switches out differently (the last case of the first one as `bne; b`, the last two cases of the second and third
 * after the following dispatch and the enemy search), takes the marker base in r1/r0 the other way round and loads
 * the stack arguments of the marker-value calls in the other register order (one stm). */
#include "gamedata/MapSaveBlock.h"
#include "map/MapEnemyGlobal.h"
#include "gamedata/GameDataAccess_Smt4.h"

/* unit-local: a content entry of table 0x32 (contentEntryGetE) as this function reads it; its four stages follow the
 * id (mapUpdateLocationAvailability reads the first). */
struct ContentStage {
    /* 0x0 */ s8 first;
    /* 0x1 */ s8 second;
    /* 0x2 */ s16 values[4];
    /* 0xA */ s16 minutes;
    /* 0xC */ u8 x;
    /* 0xD */ u8 y;
};
struct ContentEntry {
    /* 0x00 */ s32 id;          /* -1: unused */
    /* 0x04 */ ContentStage stages[4];
};

extern "C" {
void naviSetActiveMapSlot(u32 kind, u32 argument, u32 first, u32 second, u32 third, u32 fourth, u32 fifth);
void naviSetMapSlotDefault(u32 kind);

/* Refreshes the navigator's sixteen map slots from the location markers: a pending content marker whose stage ran out
 * moves to its next stage (back to the first after the last or an empty one); a shown marker on the current area goes
 * to the position of the enemy that carries it, else to its own values. */
void mapNaviUpdateSlots(void)
{
    MapEnemy *enemy = g_mapEnemy;
    MapSaveBlock *block = gameGetMapBlock();

    for (s32 slot = 0; slot < 16; slot++) {
        if (!(block->markers[slot].flags & 1)) {
            continue;
        }
        if (block->markers[slot].flags & 4) {
            if (block->markers[slot].flags & 2) {
                /* Read before the flag byte is stored, which may alias it (retail loads it here). */
                s16 content = block->markers[slot].contentIndex;
                if (block->markers[slot].flags & 8) {
                    block->markers[slot].flags = (block->markers[slot].flags & ~8) | 0x20;
                    ContentEntry *entry = (ContentEntry *)contentEntryGetE(content);
                    block->markers[slot].stage++;
                    switch (block->markers[slot].stage) {
                    case 1:
                        if (entry->stages[1].first <= 0) {
                            block->markers[slot].stage = 0;
                        }
                        break;
                    case 2:
                        if (entry->stages[2].first <= 0) {
                            block->markers[slot].stage = 0;
                        }
                        break;
                    case 3:
                        if (entry->stages[3].first <= 0) {
                            block->markers[slot].stage = 0;
                        }
                        break;
                    case 4:
                        block->markers[slot].stage = 0;
                        break;
                    }
                    switch (block->markers[slot].stage) {
                    case 0:
                        block->markers[slot].first = entry->stages[0].first;
                        block->markers[slot].second = entry->stages[0].second;
                        break;
                    case 1:
                        block->markers[slot].first = entry->stages[1].first;
                        block->markers[slot].second = entry->stages[1].second;
                        break;
                    case 2:
                        block->markers[slot].first = entry->stages[2].first;
                        block->markers[slot].second = entry->stages[2].second;
                        break;
                    case 3:
                        block->markers[slot].first = entry->stages[3].first;
                        block->markers[slot].second = entry->stages[3].second;
                        break;
                    }
                    switch (block->markers[slot].stage) {
                    case 0:
                        block->markers[slot].timer = entry->stages[0].minutes * 0x708;
                        block->markers[slot].values[0] = entry->stages[0].values[0];
                        block->markers[slot].values[1] = entry->stages[0].values[1];
                        block->markers[slot].values[2] = entry->stages[0].values[2];
                        block->markers[slot].values[3] = entry->stages[0].values[3];
                        block->markers[slot].x = entry->stages[0].x;
                        block->markers[slot].y = entry->stages[0].y;
                        break;
                    case 1:
                        block->markers[slot].timer = entry->stages[1].minutes * 0x708;
                        block->markers[slot].values[0] = entry->stages[1].values[0];
                        block->markers[slot].values[1] = entry->stages[1].values[1];
                        block->markers[slot].values[2] = entry->stages[1].values[2];
                        block->markers[slot].values[3] = entry->stages[1].values[3];
                        block->markers[slot].x = entry->stages[1].x;
                        block->markers[slot].y = entry->stages[1].y;
                        break;
                    case 2:
                        block->markers[slot].timer = entry->stages[2].minutes * 0x708;
                        block->markers[slot].values[0] = entry->stages[2].values[0];
                        block->markers[slot].values[1] = entry->stages[2].values[1];
                        block->markers[slot].values[2] = entry->stages[2].values[2];
                        block->markers[slot].values[3] = entry->stages[2].values[3];
                        block->markers[slot].x = entry->stages[2].x;
                        block->markers[slot].y = entry->stages[2].y;
                        break;
                    case 3:
                        block->markers[slot].timer = entry->stages[3].minutes * 0x708;
                        block->markers[slot].values[0] = entry->stages[3].values[0];
                        block->markers[slot].values[1] = entry->stages[3].values[1];
                        block->markers[slot].values[2] = entry->stages[3].values[2];
                        block->markers[slot].values[3] = entry->stages[3].values[3];
                        block->markers[slot].x = entry->stages[3].x;
                        block->markers[slot].y = entry->stages[3].y;
                        break;
                    }
                    if (!(block->markers[slot].flags & 4)) {
                        naviSetMapSlotDefault(slot);
                        continue;
                    }
                }
            }
            if (block->markers[slot].flags & 0x12) {
                if (block->markers[slot].first == enemy->requestArgs[0] &&
                    block->markers[slot].second == enemy->requestArgs[1]) {
                    bool found = false;
                    for (s32 i = 0; i < MAP_ENEMY_COUNT; i++) {
                        MapEnemyEntry *entry = &enemy->entries[i];
                        if (entry->active && entry->state != 19 && entry->markerIndex == slot) {
                            if (entry->state == 3 && entry->elapsed < 2) {
                                naviSetActiveMapSlot(slot, block->markers[slot].first, block->markers[slot].second,
                                                     (s32)entry->position.x, (s32)entry->position.y,
                                                     (s32)entry->position.z, 0);
                            } else {
                                naviSetActiveMapSlot(slot, block->markers[slot].first, block->markers[slot].second,
                                                     (s32)entry->position.x, (s32)entry->position.y,
                                                     (s32)entry->position.z, 1);
                            }
                            found = true;
                            break;
                        }
                    }
                    if (found) {
                        continue;
                    }
                }
                naviSetActiveMapSlot(slot, block->markers[slot].first, block->markers[slot].second,
                                     block->markers[slot].values[0], block->markers[slot].values[1],
                                     block->markers[slot].values[2], 1);
            } else {
                naviSetActiveMapSlot(slot, block->markers[slot].first, block->markers[slot].second,
                                     block->markers[slot].values[0], block->markers[slot].values[1],
                                     block->markers[slot].values[2], 0);
            }
        } else {
            naviSetMapSlotDefault(slot);
        }
    }
}

} /* extern "C" */
