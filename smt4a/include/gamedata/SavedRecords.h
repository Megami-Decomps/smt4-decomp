#ifndef GAMEDATA_SAVED_RECORDS_H
#define GAMEDATA_SAVED_RECORDS_H

#include "gamedata/GameSaveBlocks.h"
#include "gamedata/SaveFlagViews.h"
#include "AsdSDK/AsdMemCopy.h"

/* Returns a saved record, or NULL when the index is out of range. */
static __inline SavedRecord100 *getSavedRecord(u32 index)
{
    SavedRecord100 *record = NULL;
    if (index < 32) {
        SavedRecordBody *body = (SavedRecordBody *)&g_gameDataBlocks.saveBlock->body;
        record = &body->records[index];
    }
    return record;
}

/* Overwrites a saved record when the index is in range. */
static __inline void setSavedRecord(u32 index, const SavedRecord100 *record)
{
    if (index >= 32) {
        return;
    }
    SavedRecordBody *body = (SavedRecordBody *)&g_gameDataBlocks.saveBlock->body;
    memcpySrcFirst(record, &body->records[index], sizeof(SavedRecord100));
}

#endif
