/* Selects the demon's race label, preferring add-on text over the built-in table. */
#include "gamedata/DataTable.h"
#include "shard/W6_W6Match5_DevilSort.h"
#include "addon/aocMain.h"
#include "bible/bibleDevil.h"

struct RaceLabel {
    char primary[0x10];
    char alternate[0x18];
};
struct AddonRaceLabel {
    u16 id;
    char text[1];
};
extern "C" {
extern AocSystem *g_aocSystem;
AddonRaceLabel *entryListFindById(AocSystem *system, u32 race);
}

static inline const char *findRaceLabel(u32 race, s32 alternate)
{
    AddonRaceLabel *addon = entryListFindById(g_aocSystem, race);
    if (addon != NULL) {
        return addon->text;
    }
    void *table = dataTableGet(1, 0);
    RaceLabel *labels = (RaceLabel *)dataTableGetEntries(table);
    u32 count = dataTableGetCount(table);
    if (count > race) {
        return alternate ? labels[race].alternate : labels[race].primary;
    }
    return labels->primary;
}

extern "C" const char *demonGetRaceLabel(u16 id, s32 alternate)
{
    DevilSortRecord *demon = devilGetRecord(id);
    if (demon != NULL) {
        return findRaceLabel(demon->race, alternate);
    }
    return findRaceLabel(0, alternate);
}
