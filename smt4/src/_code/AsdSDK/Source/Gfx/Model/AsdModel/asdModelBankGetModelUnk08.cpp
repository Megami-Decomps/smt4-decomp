#include "AsdSDK/Source/Gfx/Model/AsdModel.h"

extern "C" {

extern AsdModelBank g_asdModelBanks[];

/* Returns unk08 of the model `index` in bank `bank`. */
u32 asdModelBankGetModelUnk08(s32 index, s32 bank)
{
    return g_asdModelBanks[bank].model[index]->unk08;
}

} /* extern "C" */
