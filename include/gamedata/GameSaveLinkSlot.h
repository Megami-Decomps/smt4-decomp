/* The save block's two saved list positions (both games): the quest menu keeps the scroll state of its report
 * list in slot 0 and of its open list in slot 1 (uiQuestRebuildLists restores them). IV reads them with
 * gameGetSaveLinkSlot() and writes them with gameDataSetLinkSlot(); Apocalypse reads them with
 * gameGetSaveLinkSlot(). */
#ifndef GAMEDATA_GAMESAVELINKSLOT_H
#define GAMEDATA_GAMESAVELINKSLOT_H

#include "common.h"

typedef struct GameSaveLinkSlot {
    /* 0x00 */ s32 position;   /* the cursor's row among the rows shown */
    /* 0x04 */ s32 top;        /* the first entry shown */
} GameSaveLinkSlot;

typedef char GameSaveLinkSlotCheck[sizeof(GameSaveLinkSlot) == 8 ? 1 : -1];

#endif
