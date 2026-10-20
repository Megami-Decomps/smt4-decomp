#include "AsdSDK/Source/Gfx/Model/AsdModel.h"

extern "C" {

extern AsdModelBank g_asdModelBanks[];

/* Returns the model `index` of bank `bank`, or NULL for a negative index. */
AsdModelEntry *asdModelBankGetModel(s32 index, s32 bank)
{
    AsdModelEntry *model;

    if (index < 0) {
        model = NULL;
    } else {
        model = g_asdModelBanks[bank].model[index];
    }
    return model;
}

} /* extern "C" */
