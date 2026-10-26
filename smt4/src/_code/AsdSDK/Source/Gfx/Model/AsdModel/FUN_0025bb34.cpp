/* NON_MATCHING: pool words (g_asdModelBanks and DAT_004d9d88) and the per-case entry address now match; retail hoists all four bank base pointers (base+2576 included) before the loop where armcc derives categories 2/3 from the first two. */
#include "AsdSDK/Source/Gfx/Model/AsdModel.h"

extern "C" {
extern AsdModelBank g_asdModelBanks[2][4];
extern AsdModelBank DAT_004d9d88[2][4]; /* the same table from its second pair of banks */
s32 libc_strcmp(const char *left, const char *right);

// Find a model's name in a selected bank; invalid categories return -1, absent names return zero.
s32 FUN_0025bb34(s32 category, const char *name, s32 bank)
{
    s32 result = 0;
    for (s16 index = 0; index < ASDMODEL_BANK_SIZE; ++index) {
        AsdModelNameEntry *entry;
        switch (category) {
        case 0:
            entry = &g_asdModelBanks[0][bank].names.entries[index];
            break;
        case 1:
            entry = &DAT_004d9d88[0][bank].names.entries[index];
            break;
        case 2:
            entry = &g_asdModelBanks[1][bank].names.entries[index];
            break;
        case 3:
            entry = &DAT_004d9d88[1][bank].names.entries[index];
            break;
        default:
            result = -1;
            continue;
        }
        const char *entryName = entry->name;
        if (result == 0 && libc_strcmp(entryName, name) == 0)
            return index;
    }
    return result;
}
}
