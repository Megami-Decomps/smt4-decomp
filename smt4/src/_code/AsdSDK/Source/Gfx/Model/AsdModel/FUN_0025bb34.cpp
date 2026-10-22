/* NON_MATCHING: category-switch and signed-index lookup compile to 57 rows versus retail's 55. */
#include "AsdSDK/Source/Gfx/Model/AsdModel.h"

extern "C" {
extern AsdModelBank g_asdModelBanks[4][2];
s32 libc_strcmp(const char *left, const char *right);

// Find a model's name in a selected bank; invalid categories return -1, absent names return zero.
s32 FUN_0025bb34(s32 category, const char *name, s32 bank)
{
    s32 result = 0;
    for (s16 index = 0; index < ASDMODEL_BANK_SIZE; ++index) {
        const char *entryName;
        switch (category) {
        case 0:
            entryName = g_asdModelBanks[0][bank].names.entries[index].name;
            break;
        case 1:
            entryName = g_asdModelBanks[1][bank].names.entries[index].name;
            break;
        case 2:
            entryName = g_asdModelBanks[2][bank].names.entries[index].name;
            break;
        case 3:
            entryName = g_asdModelBanks[3][bank].names.entries[index].name;
            break;
        default:
            result = -1;
            continue;
        }
        if (result == 0 && libc_strcmp(entryName, name) == 0)
            return index;
    }
    return result;
}
}
