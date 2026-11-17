/* The gauntlet's apps: data table 0x0B, item/GauntletAppTable.tbb (the table ids follow the game's
 * data-file list, NKMBaseTable.tbb = 0). Rows are sorted by id (bsearch with
 * unsignedKeyRecordCompare); an app costs app points and needs a player level, game flags and other
 * apps. IV's layout; Apocalypse's rows share the leading fields (dataFindKeyedRecordWithOverrides,
 * appComparePurchaseOrder's AppPurchaseSortRecord). */
#ifndef GAMEDATA_GAUNTLETAPPTABLE_H
#define GAMEDATA_GAUNTLETAPPTABLE_H

#include "gamedata/DataTable.h"
#include <stddef.h>

/* IV: one 0x40-byte row of GauntletAppTable.tbb table 0 (data table 0x0B, section 0). */
struct GauntletAppRecord {
    /* 0x00 */ u8 unk00[0x20];
    /* 0x20 */ u16 id;                    /* sort key */
    /* 0x22 */ u8 kind;                   /* 0 counts towards categoryCounts when bought */
    /* 0x23 */ u8 unk23;
    /* 0x24 */ u16 order;                 /* list order among apps of equal cost */
    /* 0x26 */ u16 cost;                  /* app points */
    /* 0x28 */ u8 unk28[2];
    /* 0x2A */ u8 category;
    /* 0x2B */ u8 minimumLevel;
    /* 0x2C */ u16 requiredFlags[3];      /* game flags that must be set, 0 = none */
    /* 0x32 */ u16 requiredApps[3];       /* bits of the bought-app set that must be set, 0 = none */
    /* 0x38 */ u8 unk38[8];
};

typedef char GauntletAppRecordLayoutCheck[
    sizeof(GauntletAppRecord) == 0x40 &&
    offsetof(GauntletAppRecord, id) == 0x20 &&
    offsetof(GauntletAppRecord, cost) == 0x26 &&
    offsetof(GauntletAppRecord, minimumLevel) == 0x2B &&
    offsetof(GauntletAppRecord, requiredFlags) == 0x2C &&
    offsetof(GauntletAppRecord, requiredApps) == 0x32 ? 1 : -1];

#ifdef __cplusplus
/* IV: the rows of section 0 of `table` (dataTableGet(0x0B, 0)). */
static inline GauntletAppRecord *gauntletAppRecords(void *table)
{
    return static_cast<GauntletAppRecord *>(dataTableGetEntries(table));
}
#endif

#endif
