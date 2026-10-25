/* NON_MATCHING: slot loop is now one-based like retail (count+1 guard); retail keeps the constant 1 and the zero in r5/r7 (push of r3/r7) and loads begin/end with ldm {r0,r2} where ours uses ldrd. */
#include "common.h"
#include "AsdSDK/Source/Gfx/Model/AsdModel.h"

struct EnvironmentSlot {
    u8 unk00[0xc];
    u32 state;
};
struct EnvironmentSlotArray {
    u8 unk00[0x18];
    EnvironmentSlot **begin;
    EnvironmentSlot **end;
};
struct EnvironmentBankState {
    u32 unk00, unk04, unk08, unk0c, unk10;
};

extern "C" {
extern AsdModelBank g_asdModelBanks[];
extern AsdModelBank DAT_00635e08[];
extern AsdModelBank DAT_00636310[];
extern AsdModelBank DAT_00636818[];
extern EnvironmentBankState DAT_00636d20[];
extern u32 DAT_005b3bd8[];
extern u32 *DAT_005b3be0[];
void sysMemClear(void *memory, u32 bytes);
EnvironmentSlotArray *asdModelGetSlotArray1(u32 bank);
EnvironmentSlotArray *asdModelGetSlotArray2(u32 bank);
u32 asdLoadFileSyncNoContext(u32 resource, s32 mode, s32 flags, u32 size);
void *FUN_00178b04(u32 size, const char *file, u32 line);
void FUN_003168b8(u32 *handle, u32 bank);
}

static __inline void resetEnvironmentSlots(EnvironmentSlotArray *slots)
{
    EnvironmentSlot **slot = slots->begin;
    s32 count = slots->end - slot;
    for (s32 index = 1; index <= count; ++index, ++slot) {
        if (*slot != NULL) {
            (*slot)->state = 0;
        }
    }
    slots->end = slots->begin;
}

// Clear the environment's model banks and slot lists, then install its new resource handle.
extern "C" void asdEnvResetModelBank(u32 resource, u32 bank)
{
    sysMemClear(&g_asdModelBanks[bank], sizeof(AsdModelBank));
    sysMemClear(&DAT_00635e08[bank], sizeof(AsdModelBank));
    sysMemClear(&DAT_00636310[bank], sizeof(AsdModelBank));
    sysMemClear(&DAT_00636818[bank], sizeof(AsdModelBank));
    EnvironmentBankState *state = &DAT_00636d20[bank];
    state->unk00 = 0;
    state->unk04 = 0;
    state->unk08 = 0;
    state->unk0c = 0;
    state->unk10 = 0;
    resetEnvironmentSlots(asdModelGetSlotArray1(bank));
    resetEnvironmentSlots(asdModelGetSlotArray2(bank));
    DAT_005b3bd8[bank] = asdLoadFileSyncNoContext(resource, 0, 1, 0x80);
    u32 *handle = static_cast<u32 *>(FUN_00178b04(sizeof(u32),
        "c:\\SMT4F\\SMT4F\\AsdSDK\\Source\\Gfx\\Model\\AsdEnv.cpp", 0x48b));
    if (handle != NULL) {
        *handle = DAT_005b3bd8[bank];
    }
    DAT_005b3be0[bank] = handle;
    FUN_003168b8(handle, bank);
}
