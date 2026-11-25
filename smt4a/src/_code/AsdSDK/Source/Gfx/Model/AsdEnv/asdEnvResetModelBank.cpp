/* NON_MATCHING: iteration now uses the retail slot range; saved zero/one registers and the first list's address register differ. */
#include "AsdSDK/Source/Gfx/Model/AsdModel.h"
#include "AsdSDK/Source/Gfx/AsdGfxHelpers_Smt4a.h"
#include "AsdSDK/asdModelGetSlotArray1.h"
#include "shard/S1GfxModel.h"

struct EnvironmentBankState {
    u32 unk00, unk04, unk08, unk0c, unk10;
};

extern "C" {
extern AsdModelBank g_asdModelBanks[];
extern AsdModelBank g_asdModelSlotBanks[];
extern AsdModelBank g_asdModelBanks2[];
extern AsdModelBank g_asdModelSlotBanks2[];
extern EnvironmentBankState DAT_00636d20[];
extern u32 DAT_005b3bd8[];
extern u32 *DAT_005b3be0[];
void sysMemClear(void *memory, u32 bytes);
u32 asdLoadFileSyncNoContext(u32 resource, s32 mode, s32 flags, u32 size);
void *asdMemoryAllocTraced(u32 size, const char *file, u32 line);
void FUN_003168b8(u32 *handle, u32 bank);
}

/* Clears the environment's model banks and slot lists, then installs its new resource handle. */
extern "C" void asdEnvResetModelBank(u32 resource, u32 bank)
{
    sysMemClear(&g_asdModelBanks[bank], sizeof(AsdModelBank));
    sysMemClear(&g_asdModelSlotBanks[bank], sizeof(AsdModelBank));
    sysMemClear(&g_asdModelBanks2[bank], sizeof(AsdModelBank));
    sysMemClear(&g_asdModelSlotBanks2[bank], sizeof(AsdModelBank));
    EnvironmentBankState *state = &DAT_00636d20[bank];
    state->unk00 = 0;
    state->unk04 = 0;
    state->unk08 = 0;
    state->unk0c = 0;
    state->unk10 = 0;
    asdModelDetachSlotList((ModelSlotList *)asdModelGetSlotArray1(bank));
    asdModelDetachSlotList((ModelSlotList *)asdModelGetSlotArray2(bank));
    DAT_005b3bd8[bank] = asdLoadFileSyncNoContext(resource, 0, 1, 0x80);
    u32 *handle = (u32 *)asdMemoryAllocTraced(sizeof(u32),
        "c:\\SMT4F\\SMT4F\\AsdSDK\\Source\\Gfx\\Model\\AsdEnv.cpp", 0x48b);
    if (handle != NULL) {
        *handle = DAT_005b3bd8[bank];
    }
    DAT_005b3be0[bank] = handle;
    FUN_003168b8(handle, bank);
}
