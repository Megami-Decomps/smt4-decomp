#include "common.h"
#include "gamedata/NkmSortIndex.h"
#include "gamedata/NkmBaseRecordA.h"

struct AddonRaceLabelA {
    u16 id;
    char text[1];
};

extern "C" {

extern u32 g_aocSystem; /* 0x570280 */

extern AddonRaceLabelA *entryListFindById(u32 system, u32 id);

/* The add-on text for `race` when the add-on system has some, else the built-in table's label (`alternate` selects its second half). */
static __inline const char *findRaceLabel(u32 race, s32 alternate)
{
    AddonRaceLabelA *addon = entryListFindById(g_aocSystem, race);
    if (addon != NULL) {
        return addon->text;
    }
    void *table = dataTableGet(1, 0);
    NkmRaceNameRecordA *labels = nkmRaceNameRecordsA(table);
    u32 count = dataTableGetCount(table);
    if (count > race) {
        return alternate ? labels[race].alternateName : labels[race].name;
    }
    return labels->name;
}

/* Selects the demon's race label, preferring add-on text over the built-in table. */
const char *demonGetRaceLabel(u16 id, s32 alternate)
{
    NkmBaseRecordA *demon = nkmBaseGetRecord(id);
    if (demon != NULL) {
        return findRaceLabel(demon->race, alternate);
    }
    return findRaceLabel(0, alternate);
}

} /* extern "C" */
