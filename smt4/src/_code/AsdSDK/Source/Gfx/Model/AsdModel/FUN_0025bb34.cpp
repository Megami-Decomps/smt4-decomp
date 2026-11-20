/* NON_MATCHING: the four bank bases are now hoisted like retail; the first base lands in r3 (retail r7) with the index zeroing scheduled after the adds, and the build adds a nop before the strcmp test branch. */
#include "AsdSDK/Source/Gfx/Model/AsdModel.h"
#include <string.h>

extern "C" {
extern AsdModelBank g_asdModelBanks[2][4];
extern AsdModelBank g_asdModelSlotBanks[2][4]; /* the same table from its second pair of banks */

// Find a model's name in a selected bank; invalid categories return -1, absent names return zero.
s32 FUN_0025bb34(s32 category, const char *name, s32 bank)
{
    s32 result = 0;
    AsdModelBank *banks0 = g_asdModelBanks[0];
    AsdModelBank *banks1 = g_asdModelSlotBanks[0];
    AsdModelBank *banks2 = g_asdModelBanks[1];
    AsdModelBank *banks3 = g_asdModelSlotBanks[1];
    AsdModelNameEntry *entries0 = banks0[bank].names.entries;
    AsdModelNameEntry *entries1 = banks1[bank].names.entries;
    AsdModelNameEntry *entries2 = banks2[bank].names.entries;
    AsdModelNameEntry *entries3 = banks3[bank].names.entries;
    for (s16 index = 0; index < ASDMODEL_BANK_SIZE; ++index) {
        AsdModelNameEntry *entry;
        switch (category) {
        case 0:
            entry = &entries0[index];
            break;
        case 1:
            entry = &entries1[index];
            break;
        case 2:
            entry = &entries2[index];
            break;
        case 3:
            entry = &entries3[index];
            break;
        default:
            result = -1;
            continue;
        }
        const char *entryName = entry->name;
        if (result == 0 && strcmp(entryName, name) == 0) {
            result = index;
            break;
        }
    }
    return result;
}
}
