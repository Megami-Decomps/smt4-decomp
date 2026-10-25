/* NON_MATCHING: Retail retains the catalog-group limit in r6; this build compares the immediate and omits r6 from the save set. */
#include "shard/W6_W6Match8_EffectSelection.h"

extern "C" {
extern EffectSelectionCatalogEntry *DAT_0059e624[13];
extern EffectSelectionParts DAT_0059dc84;

/* Finds the catalog parts with the selected item's type and identifier. */
EffectSelectionParts *FUN_002b30e4(const EffectSelectionItem *item)
{
    u16 type = item->block->type;
    u16 id = item->block->id;
    u16 groupCount = sizeof(DAT_0059e624) / sizeof(DAT_0059e624[0]);
    for (u16 group = 0; group < groupCount; ++group) {
        EffectSelectionCatalogEntry *entry = DAT_0059e624[group];
        if (entry != NULL) {
            for (; entry->parts != NULL; ++entry) {
                if (entry->parts->type != 27 && entry->parts->type == type && entry->parts->id == id) {
                    return entry->parts;
                }
            }
        }
    }
    return &DAT_0059dc84;
}
}
