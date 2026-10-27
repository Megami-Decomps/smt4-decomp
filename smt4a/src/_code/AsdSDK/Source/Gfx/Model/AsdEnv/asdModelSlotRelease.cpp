/* NON_MATCHING: readable rewrite of the model slot teardown; retail keeps the four bank bases (g_asdModelBanks and DAT_00635e08, each plus four banks) in registers, the constant 1 of the environment-slot loops in r4 with begin/end loaded by ldm, and spills nothing but the slot. */
#include "common.h"
#include "AsdSDK/AsdMemUtil.h"
#include "classes/AsdAllocatorObject.h"

/* An engine object that is destroyed in place and then handed back to its allocator. */
class ModelObject {
public:
    virtual void destroy();
    AsdAllocatorObject *allocator;
};

struct EnvironmentSlot {
    u8 unk00[0xc];
    u32 state;
};
struct EnvironmentSlotArray {
    u8 unk00[0x18];
    EnvironmentSlot **begin;
    EnvironmentSlot **end;
};

/* One named model of a bank. */
struct ModelBankName {
    char text[0x40];
    ModelObject *object; // 0x40
    u32 unk44;
    void *buffer; // 0x48
};

/* A model bank (0x284 bytes). */
struct ModelBank {
    u32 unk000;
    ModelBankName names[8]; // 0x004
    ModelObject *model[8]; // 0x264
};

struct EnvironmentBankState {
    u32 unk00;
    ModelObject *object[4]; // 0x04
};

/* The pending material updates of a slot (0x40 bytes). */
struct ModelUpdateSlot {
    u32 unk00;
    void **begin;
    void **end;
    u8 unk0c[0x34];
};

extern "C" {
extern ModelBank g_asdModelBanks[];
extern ModelBank DAT_00635e08[];
extern EnvironmentBankState DAT_00636d20[];
extern ModelUpdateSlot DAT_00636d60[];
extern void *DAT_005b3bd8[];
extern void **DAT_005b3be0[];
extern ModelObject *DAT_005b3be8[];
EnvironmentSlotArray *asdModelGetSlotArray1(s32 slot);
EnvironmentSlotArray *asdModelGetSlotArray2(s32 slot);
u32 asdModelGetSlotArray3(s32 slot);
u32 asdModelGetSlotHandle(s32 slot);
void FUN_004491fc(u32 owner, u32 trackOwner, ModelUpdateSlot *updates);
void nw_gfx_res_ResGraphicsFile_Cleanup(void **resource);
void asdMemFree(void *memory);
void asdModelSlotClearActive(s32 slot);
}

static __inline void resetEnvironmentSlots(EnvironmentSlotArray *slots)
{
    EnvironmentSlot **begin = slots->begin;
    s32 count = slots->end - begin;
    for (s32 index = 1; index <= count; ++index) {
        EnvironmentSlot *slot = *begin++;
        if (slot != NULL) {
            slot->state = 0;
        }
    }
    slots->end = slots->begin;
}

static __inline void releaseObject(ModelObject **slot)
{
    ModelObject *object = *slot;
    if (object != NULL) {
        object->destroy();
        object->allocator->release(object);
        *slot = NULL;
    }
}

static __inline void releaseBankSlot(ModelBank *bank, s32 index)
{
    releaseObject(&bank->names[index].object);
    if (bank->names[index].buffer != NULL) {
        asdMemFree(bank->names[index].buffer);
    }
    releaseObject(&bank->model[index]);
}

// Release everything a model slot owns: environment slots, resource file, models and cached objects.
extern "C" void asdModelSlotRelease(s32 slot)
{
    resetEnvironmentSlots(asdModelGetSlotArray1(slot));
    resetEnvironmentSlots(asdModelGetSlotArray2(slot));
    u32 owner = asdModelGetSlotArray3(slot);
    u32 trackOwner = asdModelGetSlotHandle(slot);
    FUN_004491fc(owner, trackOwner, &DAT_00636d60[slot]);
    void *resource = *DAT_005b3be0[slot];
    if (resource != NULL) {
        nw_gfx_res_ResGraphicsFile_Cleanup(&resource);
    }
    releaseObject(&DAT_005b3be8[slot]);
    DAT_00636d60[slot].end = DAT_00636d60[slot].begin;
    asdOperatorDelete(DAT_005b3be0[slot]);
    asdMemFree(DAT_005b3bd8[slot]);
    DAT_005b3bd8[slot] = NULL;
    asdModelSlotClearActive(slot);
    for (s16 index = 0; index < 8; index++) {
        releaseBankSlot(&g_asdModelBanks[slot], index);
        releaseBankSlot(&DAT_00635e08[slot], index);
        releaseBankSlot(&g_asdModelBanks[slot + 4], index);
        releaseBankSlot(&DAT_00635e08[slot + 4], index);
    }
    for (s16 index = 0; index < 4; index++) {
        releaseObject(&DAT_00636d20[slot].object[index]);
    }
}
