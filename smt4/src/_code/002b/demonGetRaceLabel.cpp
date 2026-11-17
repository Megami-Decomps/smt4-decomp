/* Selects the demon's race label, preferring add-on text over the built-in table. */
#include "gamedata/NkmSortIndex.h"
#include "shard/W6_W6Match5_DevilSort.h"
#include "addon/aocMain.h"
#include "bible/bibleDevil.h"
#include "addon/AocSystem.h"

struct AddonRaceLabel {
    u16 id;
    char text[1];
};
extern "C" {
AddonRaceLabel *entryListFindById(AocSystem *system, u32 race);
}

static inline const char *findRaceLabel(u32 race, s32 alternate)
{
    AddonRaceLabel *addon = entryListFindById(g_aocSystem, race);
    if (addon != NULL) {
        return addon->text;
    }
    void *table = dataTableGet(1, 0);
    NkmRaceNameRecord *labels = nkmRaceNameRecords(table);
    u32 count = dataTableGetCount(table);
    if (count > race) {
        return alternate ? labels[race].alternateName : labels[race].name;
    }
    return labels->name;
}

extern "C" const char *demonGetRaceLabel(u16 id, s32 alternate)
{
    NkmBaseRecord *demon = nkmBaseGetRecord(id);
    if (demon != NULL) {
        return findRaceLabel(demon->race, alternate);
    }
    return findRaceLabel(0, alternate);
}
