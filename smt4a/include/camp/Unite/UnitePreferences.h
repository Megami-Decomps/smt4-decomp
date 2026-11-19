#ifndef SMT4A_CAMP_UNITE_PREFERENCES_H
#define SMT4A_CAMP_UNITE_PREFERENCES_H

#include "event/2dEvent/2dEventTex.h"
#include <stddef.h>

/* The fusion-search filters in the user settings block. */
struct FusionCatalogCriteria {
    /* 0x00 */ u8 unk00[8];
    /* 0x08 */ s16 race;
    /* 0x0A */ u8 unk0A[9];
    /* 0x13 */ u8 searchEnabled;
    /* 0x14 */ u8 unk14;
    /* 0x15 */ s8 skillCategory;
    /* 0x16 */ u8 unk16[0xD];
    /* 0x23 */ s8 levelBand;
};
struct UniteSavedPreferencesA {
    /* 0x00 */ u8 unk00[0x20];
    /* 0x20 */ FusionCatalogCriteria catalog;
};
typedef char UniteSavedPreferencesOffsets[offsetof(UniteSavedPreferencesA, catalog.race) == 0x28 &&
    offsetof(UniteSavedPreferencesA, catalog.searchEnabled) == 0x33 &&
    offsetof(UniteSavedPreferencesA, catalog.skillCategory) == 0x35 &&
    offsetof(UniteSavedPreferencesA, catalog.levelBand) == 0x43 ? 1 : -1];

static __inline const FusionCatalogCriteria *uniteGetCatalogCriteria()
{
    return &reinterpret_cast<const UniteSavedPreferencesA *>(saveGetUserSettingsBlock())->catalog;
}

#endif
