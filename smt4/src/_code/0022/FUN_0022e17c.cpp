/* NON_MATCHING: shared base-summary initialization, stock-count addressing and matching-slot pointer reuse differ. */
#include "gamedata/DevilRecord.h"
#include "gamedata/UnitStats.h"

struct DevilComparisonIdentityView { DevilSortRecord sort; u8 category; u8 variant; };
struct DevilComparisonSummaryView {
    u16 id;
    u8 race;
    u8 category;
    u8 variant;
    u8 unk05;
    u16 addedPoints;
    u8 unk08[4];
    u8 baseLevel;
    u8 currentLevel;
    u16 baseHp;
    u16 currentHp;
    u16 baseMp;
    u16 currentMp;
    u8 unk16[6];
    const char *name;
};
/* The stock count lies past the smaller shared party-slot prefix. */
struct PartyComparisonSlotsView {
    u8 prefix[0x90];
    StatBlock units[24];
    s8 stock[24];
    s8 active[3];
    u8 stockCount;
};
union UnitComparisonGrowthView {
    StatBlock state;
    struct { u8 unk00[0x8C]; u8 points[0x500]; } growth;
};
typedef char PartyComparisonOffsets[offsetof(PartyComparisonSlotsView, stockCount) == 0x910B &&
    offsetof(DevilComparisonSummaryView, name) == 0x1C ? 1 : -1];
extern "C" {
void unitInitializeFromSavedRecord(u16, StatBlock *);
const char *FUN_002bd06c(u32);
PartyComparisonSlotsView *gameGetSlotTable();

void FUN_0022e17c(DevilComparisonSummaryView *output, u16 id, s32 useCurrent)
{
    const DevilComparisonIdentityView *devil = reinterpret_cast<const DevilComparisonIdentityView *>(devilGetRecord(id));
    output->id = devil->sort.id;
    output->race = devil->sort.race;
    output->category = devil->category;
    output->variant = devil->variant;
    output->name = FUN_002bd06c(devil->sort.id);
    output->addedPoints = 0;
    StatBlock temporary;
    unitInitializeFromSavedRecord(id, &temporary);
    output->baseLevel = temporary.level;
    output->baseHp = temporary.unk0E;
    output->baseMp = temporary.unk10;
    if (!useCurrent) {
        unitInitializeFromSavedRecord(id, &temporary);
        output->currentLevel = temporary.level;
        output->currentHp = temporary.unk0E;
        output->currentMp = temporary.unk10;
        return;
    }
    PartyComparisonSlotsView *slots = gameGetSlotTable();
    StatBlock *current = NULL;
    for (u16 i = 0; i < slots->stockCount; ++i) {
        s32 slot = slots->stock[i];
        if (slot >= 0 && slots->units[slot].id == id) {
            current = &slots->units[slot];
            break;
        }
    }
    output->currentLevel = current->level;
    output->currentHp = current->unk0E;
    output->currentMp = current->unk10;
    const UnitComparisonGrowthView *growth = reinterpret_cast<const UnitComparisonGrowthView *>(current);
    for (s32 i = 0; i < 0x500; ++i)
        output->addedPoints += growth->growth.points[i];
}
}
