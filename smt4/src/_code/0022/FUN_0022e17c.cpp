#include "gamedata/NkmBaseRecord.h"
#include "gamedata/UnitStats.h"
#include "gamedata/SaveSlotTableIV.h"

struct DevilComparisonIdentityView { struct { u16 id; u8 race; u8 level; } sort; u8 category; u8 variant; };
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
union UnitComparisonGrowthView {
    StatBlock state;
    struct { u8 unk00[0x8C]; u8 points[0x500]; } growth;
};
typedef char DevilComparisonSummaryOffsets[offsetof(DevilComparisonSummaryView, name) == 0x1C ? 1 : -1];
/* The stock unit with this demon id (the caller assumes there is one). */
static inline StatBlock *findComparisonPartyUnit(u32 id)
{
    SaveSlotTableIV *party = gameGetSlotTable();
    for (u16 i = 0; i < party->stockCount; ++i) {
        s32 slot = party->stock[i];
        if (slot >= 0) {
            StatBlock *unit = &party->units[slot];
            if (unit->id == id) {
                return unit;
            }
        }
    }
    return NULL;
}

extern "C" {
void unitInitializeFromSavedRecord(u16, StatBlock *);
const char *dataTable01FindByIdWithAoc(u32);

/* Fills a fusion comparison row: the demon's identity and name, its level, HP and MP from its saved record, and
 * either the saved record again or the stock unit with its added growth points. */
void FUN_0022e17c(DevilComparisonSummaryView *output, u16 id, s32 useCurrent)
{
    const DevilComparisonIdentityView *devil = reinterpret_cast<const DevilComparisonIdentityView *>(nkmBaseGetRecord(id));
    output->id = devil->sort.id;
    output->race = devil->sort.race;
    output->category = devil->category;
    output->variant = devil->variant;
    output->name = dataTable01FindByIdWithAoc(devil->sort.id);
    output->addedPoints = 0;
    if (useCurrent) {
        StatBlock temporary;
        unitInitializeFromSavedRecord(id, &temporary);
        output->baseLevel = temporary.level;
        output->baseHp = temporary.maxHp;
        output->baseMp = temporary.maxMp;
        StatBlock *current = findComparisonPartyUnit(id);
        output->currentLevel = current->level;
        output->currentHp = current->maxHp;
        output->currentMp = current->maxMp;
        const UnitComparisonGrowthView *growth = reinterpret_cast<const UnitComparisonGrowthView *>(current);
        for (s32 i = 0; i < 0x500; ++i)
            output->addedPoints += growth->growth.points[i];
    } else {
        StatBlock temporary;
        unitInitializeFromSavedRecord(id, &temporary);
        output->baseLevel = temporary.level;
        output->baseHp = temporary.maxHp;
        output->baseMp = temporary.maxMp;
        unitInitializeFromSavedRecord(id, &temporary);
        output->currentLevel = temporary.level;
        output->currentHp = temporary.maxHp;
        output->currentMp = temporary.maxMp;
    }
}
}
