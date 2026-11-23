/* The fusion screen's saved search settings (Shin Megami Tensei IV). */
#ifndef SMT4_CAMP_UNITE_PREFERENCES_H
#define SMT4_CAMP_UNITE_PREFERENCES_H

#include "common.h"
#include <stddef.h>
#include "status/StatusCamera.h"

/* The fusion-search filters in the sort-preferences block. */
struct FusionCatalogCriteria {
    /* 0x00 */ s16 firstSlot;      /* the unit slots of the two chosen materials, -1 for none */
    /* 0x02 */ s16 secondSlot;
    /* 0x04 */ u16 firstId;        /* the demons those slots held, 0 for none */
    /* 0x06 */ u16 secondId;
    /* 0x08 */ u16 unk08;
    /* 0x0A */ u16 unk0A;
    /* 0x0C */ u16 unk0C;
    /* 0x0E */ s16 unk0E;
    /* 0x10 */ s8 rowsUnlocked[3]; /* each nonzero step grows the source list: 3 rows, then 6, 12 and 14;
                                      also the saved switch of each option row, in row order */
    /* 0x13 */ u8 searchEnabled;
    /* 0x14 */ u8 unk14;
    /* 0x15 */ s8 unk15;
    /* 0x16 */ u8 unk16;
    /* 0x17 */ u8 unk17;
};
typedef char FusionCatalogCriteriaSize[sizeof(FusionCatalogCriteria) == 0x18 ? 1 : -1];
struct UniteSavedPreferences {
    /* 0x00 */ u8 unk00[0x1C];
    /* 0x1C */ FusionCatalogCriteria catalog;
};
typedef char UniteSavedPreferencesOffsets[offsetof(UniteSavedPreferences, catalog.searchEnabled) == 0x2F ? 1 : -1];

static __inline const FusionCatalogCriteria *uniteGetCatalogCriteria()
{
    return &reinterpret_cast<const UniteSavedPreferences *>(gameDataGetSortPreferences())->catalog;
}

#endif
