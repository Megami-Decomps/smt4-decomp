/* The fusion screen's saved search settings (Shin Megami Tensei IV). */
#ifndef SMT4_CAMP_UNITE_PREFERENCES_H
#define SMT4_CAMP_UNITE_PREFERENCES_H

#include "common.h"
#include <stddef.h>
#include "status/StatusCamera.h"

/* The fusion-search filters in the sort-preferences block. */
struct FusionCatalogCriteria {
    /* 0x00 */ u8 unk00[0x13];
    /* 0x13 */ u8 searchEnabled;
};
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
