#include "gamedata/DataTableAccess.h"
#include "status/ExperienceBars.h"
#include "battle/UnitInitialization.h"
#include "gamedata/GamePlayerData.h"

#include "shard/S1ListPanel.h"
#include "gamedata/UnitRecordAccess.h"
#include "AsdSDK/Source/Gfx/AsdTexManager/AsdTMTexTable.h"
#include "gamedata/SaveSlotTableIV.h"

struct SavedUnitRecord;

extern "C" {
u32 devilCalculateRankCost(u32 id, s32 rank, s32 level);
}

/* The whole part of an experience value (12-bit fixed point), as the bar arithmetic uses it. A plain `static`
 * (armcc inlines it at all three bars): marked `__inline` it schedules the party loop's load differently. */
static f32 expWholePart(u64 progress)
{
    return (f32)(progress >> 12);
}

/* Refresh the player's bar, active demons, and stocked demons not already shown in the party. */
extern "C" void resultExpGaugesRefresh(ExperienceBarStateIV *work)
{
    SaveSlotTableIV *slots = gameGetSlotTable();
    TextureTableEntryIV *sprite = asdTMTexTableEntryAt(0x28, 0x14);
    u64 required = dataTable9EntryOrZero(gameGetPlayerData()->level + work->rankDelta[0]);
    if (work->full[0]) {
        work->widths[0] = sprite->placement->width;
    } else {
        work->widths[0] = (s32)(expWholePart(work->progress[0]) / (f32)required * (f32)sprite->placement->width);
    }

    for (s32 i = 0; i < 3; i++) {
        s32 index = slots->active[i];
        if (index >= 0) {
            const SavedBattleInitialViewIV *unit = (const SavedBattleInitialViewIV *)gameGetUnitRecord(index);
            if (unit != NULL) {
                u64 required = devilCalculateRankCost(unit->id, unit->enabled + work->rankDelta[index + 1], work->unitRankMode[index]);
                if (work->full[index + 1]) {
                    work->widths[index + 1] = sprite->placement->width;
                } else {
                    work->widths[index + 1] = (s32)(expWholePart(work->progress[index + 1]) / (f32)required * (f32)sprite->placement->width);
                }
            }
        }
    }

    sprite = asdTMTexTableEntryAt(0x28, 0x5f);
    for (s32 i = 0; i < 24; i++) {
        if ((slots->active[0] >= 0 && slots->active[0] == slots->stock[i]) ||
            (slots->active[1] >= 0 && slots->active[1] == slots->stock[i]) ||
            (slots->active[2] >= 0 && slots->active[2] == slots->stock[i])) {
            continue;
        }
        s32 index = slots->stock[i];
        if (index >= 0) {
            const SavedBattleInitialViewIV *unit = (const SavedBattleInitialViewIV *)gameGetUnitRecord(index);
            if (unit != NULL) {
                u64 required = devilCalculateRankCost(unit->id, unit->enabled + work->rankDelta[index + 1], work->unitRankMode[index]);
                if (work->full[index + 1]) {
                    work->widths[index + 1] = sprite->placement->width;
                } else {
                    work->widths[index + 1] = (s32)(expWholePart(work->progress[index + 1]) / (f32)required * (f32)sprite->placement->width);
                }
            }
        }
    }
}
