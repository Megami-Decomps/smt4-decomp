#include "gamedata/GameDataAccess_VariantG.h"
#include "gamedata/FlagBitTests.h"
#include "map/LmapDestinationListsA.h"
#include "map/InteractionFlags.h"
#include "map/mapDepart.h"
#include "game/GameStateA.h"
#include "shard/W6_W6Match3_UnitStatusRequest.h"
#include "shard/W5_W5Match7_SelectedRecord.h"

extern "C" {

u8 gameOwnedBitTest2(s32 id);

s32 gameFlagsGetWorkState(void);
s32 lmapDestinationHasAvailableRecord(u32 key);
u32 FUN_003bf5a8(s32 id);

/* Refresh the availability of every entry in the current map's destination lists. */
void lmapRefreshDestinationAvailability(LmapDestinationListsA *list)
{
    s32 i;

    for (i = 0; i < list->entryCount; i++) {
        LmapDestinationEntryA *entry = &list->entries[i];

        if (entry->mapId == list->mapId) {
            if (g_gameState.showAllEntries != 0) {
                entry->available = 1;
            } else if (entry->type == 0xff) {
                if (gameOwnedBitTest2(entry->checkId) != 0) {
                    entry->available = 1;
                } else {
                    entry->available = 0;
                }
            } else if (entry->type == 0xfe) {
                if (FUN_00384d34(entry->checkId) != 0) {
                    entry->available = 1;
                } else {
                    entry->available = 0;
                }
            } else if (entry->type == 0xfd) {
                if (gameFlagsBitTest(entry->checkId) != 0) {
                    entry->available = 1;
                } else {
                    entry->available = 0;
                }
                if (entry->requiredSubmode != 0 && entry->requiredSubmode != g_gameState.areaId) {
                    entry->available = 0;
                }
            } else if (entry->type == 0xfc) {
                if (FUN_003bf5a8(entry->checkId) != 0) {
                    entry->available = 1;
                } else {
                    entry->available = 0;
                }
            } else if (interactionVariantIsEnabled(entry->id, entry->type) == 0) {
                entry->available = 0;
            } else {
                s32 blocked = 0;

                if ((entry->requiredFlag != 0 && gameFlagIsSet(entry->requiredFlag) == 0) ||
                    (entry->forbiddenFlag != 0 && gameFlagIsSet(entry->forbiddenFlag) != 0)) {
                    blocked = 1;
                }
                if ((entry->dataKey == 0 || lmapDestinationHasAvailableRecord(entry->dataKey) != 0 ||
                     dataTableHasMatchingEntry35(entry->dataKey) != 0) &&
                    blocked == 0) {
                    entry->available = 1;
                } else {
                    entry->available = 0;
                }
                if (g_gameState.mapId == 0x17) {
                    if (g_gameState.areaId == 2 && entry->id == 0x7a && entry->type == 2) {
                        entry->available = 0;
                    }
                }
                if (g_gameState.mapId == 0x17) {
                    if (g_gameState.areaId == 3 && entry->id == 0x7e && entry->type == 2) {
                        entry->available = 0;
                    }
                }
            }
        } else if (entry->fullFrame == 0x1bd2 || entry->halfFrame == 0x1bd4) {
            if (gameFlagsGetWorkState() == 0x17) {
                entry->available = 1;
            } else {
                entry->available = 0;
            }
        } else if (entry->fullFrame == 0x1bd6 || entry->halfFrame == 0x1bd8) {
            entry->available = 1;
        } else {
            entry->available = 0;
        }
    }

    for (i = 0; i < list->extraEntryCount; i++) {
        LmapDestinationEntryA *entry = &list->extraEntries[i];

        if (entry->mapId == list->mapId) {
            if (g_gameState.showAllEntries != 0) {
                entry->available = 1;
            } else if (entry->type == 0xff) {
                if (gameOwnedBitTest2(entry->checkId) != 0) {
                    entry->available = 1;
                } else {
                    entry->available = 0;
                }
            } else if (entry->type == 0xfd) {
                if (gameFlagsBitTest(entry->checkId) != 0) {
                    entry->available = 1;
                } else {
                    entry->available = 0;
                }
                if (entry->requiredSubmode != 0 && entry->requiredSubmode != g_gameState.areaId) {
                    entry->available = 0;
                }
            } else if (interactionVariantIsEnabled(entry->id, entry->type) == 0) {
                entry->available = 0;
            } else {
                if ((entry->requiredFlag != 0 && gameFlagIsSet(entry->requiredFlag) == 0) ||
                    (entry->forbiddenFlag != 0 && gameFlagIsSet(entry->forbiddenFlag) != 0)) {
                    entry->available = 0;
                } else {
                    entry->available = 1;
                }
                if (g_gameState.mapId == 0x17) {
                    if (g_gameState.areaId == 2 && entry->id == 0x7a && entry->type == 2) {
                        entry->available = 0;
                    }
                }
                if (g_gameState.mapId == 0x17) {
                    if (g_gameState.areaId == 3 && entry->id == 0x7e && entry->type == 2) {
                        entry->available = 0;
                    }
                }
            }
        } else {
            entry->available = 0;
        }
    }
    list->dirty = 0;
}

} /* extern "C" */
