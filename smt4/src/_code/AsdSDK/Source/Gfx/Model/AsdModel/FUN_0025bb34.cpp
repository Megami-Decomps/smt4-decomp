/* NON_MATCHING: the four bank addresses and index initialisation are hoisted but use different registers and scheduling. */
#include "AsdSDK/Source/Gfx/Model/AsdModel.h"
#include <string.h>

extern "C" {
extern AsdModelBank g_asdModelBanks[2][4];
extern AsdModelBank g_asdModelSlotBanks[2][4]; /* the same table from its second pair of banks */

/* Finds a model's name in a selected bank; invalid categories return -1, absent names return zero. */
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
        const char *entryName;
        switch (category) {
        case 0:
            entryName = entries0[index].name;
            break;
        case 1:
            entryName = entries1[index].name;
            break;
        case 2:
            entryName = entries2[index].name;
            break;
        case 3:
            entryName = entries3[index].name;
            break;
        default:
            result = -1;
            continue;
        }
        if (result == 0 && strcmp(entryName, name) == 0) {
            result = index;
            break;
        }
    }
    return result;
}

} /* extern "C" */
