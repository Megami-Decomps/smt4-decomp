#ifndef SMT4A_CAMP_UNITE_PREFERENCES_H
#define SMT4A_CAMP_UNITE_PREFERENCES_H

#include "event/2dEvent/2dEventTex.h"
#include <stddef.h>

/* The fusion-search filters in the user settings block. */
struct FusionCatalogCriteria {
    /* 0x00 */ s16 firstSlot;      /* the unit slots of the two chosen materials, -1 for none */
    /* 0x02 */ s16 secondSlot;
    /* 0x04 */ u16 firstId;        /* the demons those slots held, 0 for none */
    /* 0x06 */ u16 secondId;
    /* 0x08 */ s16 race;
    /* 0x0A */ u16 unk0A;
    /* 0x0C */ u16 unk0C;
    /* 0x0E */ s16 unk0E;
    /* 0x10 */ u8 unk10[3];
    /* 0x13 */ u8 searchEnabled;
    /* 0x14 */ u8 unk14;
    /* 0x15 */ s8 skillCategory;
    /* 0x16 */ u8 unk16Bit0 : 1;
    /* 0x16 */ s8 unk16Bit1 : 1;     /* signed: uniteCreate clears it with `and #0xFD`, apart from bit 0's `bic #1` */
    /* 0x17 */ u8 unk17;
    /* 0x18 */ u8 unk18[0xB];
    /* 0x23 */ s8 levelBand;
};
typedef char FusionCatalogCriteriaLayout[offsetof(FusionCatalogCriteria, firstId) == 0x4 &&
    offsetof(FusionCatalogCriteria, unk0E) == 0xE && offsetof(FusionCatalogCriteria, unk17) == 0x17 &&
    sizeof(FusionCatalogCriteria) == 0x24 ? 1 : -1];
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
