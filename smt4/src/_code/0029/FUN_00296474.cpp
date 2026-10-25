/* NON_MATCHING: stock-slot loads are reused and width-loop registers differ; natural u64 casts recover the retail __aeabi_ul2f ABI. */
#include "status/ExperienceBars.h"
#include "battle/UnitInitialization.h"
#include "gamedata/PlayerInitialization.h"
#include "shard/W7_W7Match2_PartyDamage.h"
#include "shard/S1ListPanel.h"

struct SavedUnitRecord;

extern "C" {
PartyDamageSlotsIV *gameGetSlotTable();
const PlayerInitialRecordIV *gameGetPlayerData();
SavedUnitRecord *gameGetUnitRecord(s32 index);
SpriteInfo *FUN_002bf4f8(u32 table, u32 index);
u32 dataTable9EntryOrZero(s32 rank);
u32 devilCalculateRankCost(u32 id, s32 rank, s32 level);
}

/* Progress is fixed-point with twelve fractional bits; the cached width is in sprite pixels. */
static __inline s32 experienceBarWidth(u64 progress, u64 required, const SpriteInfo *sprite)
{
    f32 current = (f32)(progress >> 12);
    f32 maximum = (f32)required;
    return (s32)((current / maximum) * (f32)*sprite->size);
}

static __inline void experienceBarUpdateUnit(ExperienceBarStateIV *work, s32 index, const SpriteInfo *sprite)
{
    const SavedBattleInitialViewIV *unit = reinterpret_cast<const SavedBattleInitialViewIV *>(gameGetUnitRecord(index));
    if (unit != NULL) {
        u32 required = devilCalculateRankCost(unit->id,
            unit->enabled + work->unitRankDelta[index], work->unitRankMode[index]);
        if (work->unitFull[index] != 0) {
            work->unitWidths[index] = (u16)*sprite->size;
        } else {
            work->unitWidths[index] = experienceBarWidth(work->unitProgress[index], required, sprite);
        }
    }
}

/* Refresh the player's bar, active demons, and stocked demons not already shown in the party. */
extern "C" void FUN_00296474(ExperienceBarStateIV *work)
{
    PartyDamageSlotsIV *slots = gameGetSlotTable();
    SpriteInfo *sprite = FUN_002bf4f8(0x28, 0x14);
    const PlayerInitialRecordIV *player = gameGetPlayerData();
    u32 required = dataTable9EntryOrZero(player->enabled + work->playerRankDelta);
    if (work->playerFull != 0) {
        work->playerWidth = (u16)*sprite->size;
    } else {
        work->playerWidth = experienceBarWidth(work->playerProgress, required, sprite);
    }
    for (s32 slot = 0; slot < 3; ++slot) {
        s32 index = slots->active[slot];
        if (index >= 0) {
            experienceBarUpdateUnit(work, index, sprite);
        }
    }
    sprite = FUN_002bf4f8(0x28, 0x5f);
    for (s32 slot = 0; slot < 24; ++slot) {
        s32 index = slots->stock[slot];
        if ((slots->active[0] < 0 || slots->active[0] != index) &&
            (slots->active[1] < 0 || slots->active[1] != index) &&
            (slots->active[2] < 0 || slots->active[2] != index) && index >= 0) {
            experienceBarUpdateUnit(work, index, sprite);
        }
    }
}
