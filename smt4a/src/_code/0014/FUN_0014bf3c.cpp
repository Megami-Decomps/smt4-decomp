#include "common.h"
#include "gamedata/DataTable.h"
#include "gamedata/DevilRecordA.h"

struct RaceLabelA {
    char primary[0x10];
    char alternate[0x20];
};
struct AddonRaceLabelA {
    u16 id;
    char text[1];
};

extern "C" {

extern u32 g_aocSystem; /* 0x570280 */

extern DevilRecordA *FUN_00184310(u32 id);
extern AddonRaceLabelA *entryListFindById(u32 system, u32 id);

/* The add-on text for `race` when the add-on system has some, else the built-in table's label (`alternate` selects its second half). */
static __inline const char *findRaceLabel(u32 race, s32 alternate)
{
    AddonRaceLabelA *addon = entryListFindById(g_aocSystem, race);
    if (addon != NULL) {
        return addon->text;
    }
    void *table = dataTableGet(1, 0);
    RaceLabelA *labels = (RaceLabelA *)dataTableGetEntries(table);
    u32 count = dataTableGetCount(table);
    if (count > race) {
        return alternate ? labels[race].alternate : labels[race].primary;
    }
    return labels->primary;
}

/* Selects the demon's race label, preferring add-on text over the built-in table. */
const char *FUN_0014bf3c(u16 id, s32 alternate)
{
    DevilRecordA *demon = FUN_00184310(id);
    if (demon != NULL) {
        return findRaceLabel(demon->race, alternate);
    }
    return findRaceLabel(0, alternate);
}

} /* extern "C" */
