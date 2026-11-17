/* NON_MATCHING: stock-slot loads are reused and width-loop registers differ; natural u64 casts recover the retail __aeabi_ul2f ABI. */
#include "status/ExperienceBars.h"
#include "battle/UnitInitialization.h"
#include "gamedata/GamePlayerData.h"

#include "shard/S1ListPanel.h"
#include "gamedata/UnitRecordAccess.h"
#include "AsdSDK/Source/Gfx/AsdTexManager/AsdTMTexTable.h"
#include "gamedata/SaveSlotTableIV.h"

struct SavedUnitRecord;

extern "C" {
u32 dataTable9EntryOrZero(s32 rank);
u32 devilCalculateRankCost(u32 id, s32 rank, s32 level);
}

/* Progress is fixed-point with twelve fractional bits; the cached width is in sprite pixels. */
static s32 experienceBarWidth(u64 progress, u64 required, const TextureTableEntryIV *sprite)
{
    f32 current = (f32)(progress >> 12);
    f32 maximum = (f32)required;
    return (s32)((current / maximum) * (f32)sprite->placement->width);
}

static void experienceBarUpdateUnit(ExperienceBarStateIV *work, s32 index, const TextureTableEntryIV *sprite)
{
    const SavedBattleInitialViewIV *unit = reinterpret_cast<const SavedBattleInitialViewIV *>(gameGetUnitRecord(index));
    if (unit != NULL) {
        u32 required = devilCalculateRankCost(unit->id,
            unit->enabled + work->unitRankDelta[index], work->unitRankMode[index]);
        if (work->unitFull[index] != 0) {
            work->unitWidths[index] = (u16)sprite->placement->width;
        } else {
            work->unitWidths[index] = experienceBarWidth(work->unitProgress[index], required, sprite);
        }
    }
}

/* Refresh the player's bar, active demons, and stocked demons not already shown in the party. */
extern "C" void FUN_00296474(ExperienceBarStateIV *work)
{
    SaveSlotTableIV *slots = gameGetSlotTable();
    TextureTableEntryIV *sprite = asdTMTexTableEntryAt(0x28, 0x14);
    const PlayerDataIV *player = gameGetPlayerData();
    u32 required = dataTable9EntryOrZero(player->level + work->playerRankDelta);
    if (work->playerFull != 0) {
        work->playerWidth = (u16)sprite->placement->width;
    } else {
        work->playerWidth = experienceBarWidth(work->playerProgress, required, sprite);
    }
    for (s32 slot = 0; slot < 3; ++slot) {
        s32 index = slots->active[slot];
        if (index >= 0) {
            experienceBarUpdateUnit(work, index, sprite);
        }
    }
    sprite = asdTMTexTableEntryAt(0x28, 0x5f);
    for (s32 slot = 0; slot < 24; ++slot) {
        s32 index = slots->stock[slot];
        if ((slots->active[0] < 0 || slots->active[0] != index) &&
            (slots->active[1] < 0 || slots->active[1] != index) &&
            (slots->active[2] < 0 || slots->active[2] != index) && index >= 0) {
            experienceBarUpdateUnit(work, index, sprite);
        }
    }
}
