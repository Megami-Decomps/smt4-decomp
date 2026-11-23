/* NON_MATCHING: 377 lines (295 vs 266 rows); the same code as Apocalypse's asdModelSlotRelease. Retail loads
 * g_asdModelBanks and g_asdModelSlotBanks from the pool and derives the two unnamed bank arrays after them
 * (`add r2, ip, #2576`), which armcc only does for objects its own unit defines: the four arrays belong to this
 * function's translation unit. Retail also keeps the constant 1 of the environment-slot loops in r4 (computing
 * the limit twice, with begin/end loaded by ldm), keeps each object's slot address in its own variable and
 * spills nothing but the slot. */
#include "common.h"
#include "AsdSDK/AsdMemUtil.h"
#include "AsdSDK/asdModelGetSlotArray1.h"
#include "classes/AsdAllocatorObject.h"
#include "util/MemoryHelpers_VariantA.h"

/* unit-local: an engine object that is destroyed in place and then handed back to its allocator (the release
 * sequence of gfx/AsdSceneRoot.h's AsdSceneObject, whose destroy() compiles to other code here) */
class ModelObject {
public:
    virtual void destroy();
    AsdAllocatorObject *allocator;
};

/* unit-local: the environment slot lists exist only in the units that reset them */
struct EnvironmentSlot {
    u8 unk00[0xc];
    u32 state;
};
/* unit-local: a [begin, end) run of slot pointers */
struct EnvironmentSlotRange {
    EnvironmentSlot **begin;
    EnvironmentSlot **end;
};
/* unit-local: a slot list */
struct EnvironmentSlotArray {
    u8 unk00[0x18];
    EnvironmentSlotRange range; // 0x18
};

/* unit-local: one named model of a bank, as this function frees it (AsdModel.h's AsdModelNameEntry is the same
 * 0x4C bytes seen four bytes earlier) */
struct ModelBankName {
    char text[0x40];
    ModelObject *object; // 0x40
    u32 unk44;
    void *buffer; // 0x48
};

/* unit-local: a model bank (0x284 bytes), with the records above */
struct ModelBank {
    u32 unk000;
    ModelBankName names[8]; // 0x004
    ModelObject *model[8]; // 0x264
};

/* unit-local: the four objects a slot's environment owns */
struct EnvironmentBankState {
    u32 unk00;
    ModelObject *object[4]; // 0x04
};

/* unit-local: the pending material updates of a slot (0x40 bytes) */
struct ModelUpdateSlot {
    u32 unk00;
    void **begin;
    void **end;
    u8 unk0c[0x34];
};

extern "C" {
/* Four arrays of two banks each, one after the other; the third and fourth have no symbol of their own. */
extern ModelBank g_asdModelBanks[];
extern ModelBank g_asdModelSlotBanks[];
extern EnvironmentBankState g_asdModelIdLists[];
extern ModelUpdateSlot DAT_004dace0[];
extern void *DAT_00464a9c[];
extern void **DAT_00464aa4[];
extern ModelObject *DAT_00464aac[];
u32 asdModelGetSlotArray2(s32 slot);
u32 asdModelGetSlotArray3(s32 slot);
u32 asdModelGetSlotRecord(int index);
void FUN_001569d8(u32 owner, u32 view, ModelUpdateSlot *updates);
void nw_gfx_res_ResGraphicsFile_Cleanup(void **resource);
void asdModelSlotClearActive(s32 slot);
}

/* Marks every slot of the list free and empties the list. */
static __inline void resetEnvironmentSlots(EnvironmentSlotArray *slots)
{
    EnvironmentSlotRange range = slots->range;
    EnvironmentSlot **cursor = range.begin;
    s32 count = range.end - range.begin;
    for (s32 index = 1; index < count + 1; ++index, ++cursor) {
        EnvironmentSlot *slot = *cursor;

        if (slot != NULL) {
            slot->state = 0;
        }
    }
    slots->range.end = slots->range.begin;
}

/* Destroys the object `slot` owns, if any, and clears the slot. */
static __inline void releaseObject(ModelObject **slot)
{
    ModelObject *object = *slot;
    if (object != NULL) {
        object->destroy();
        object->allocator->release(object);
        *slot = NULL;
    }
}

/* Frees model `index` of a bank: its named object, its buffer and the model itself. */
static void releaseBankSlot(ModelBank *bank, s32 index)
{
    ModelBankName *name = &bank->names[index];

    releaseObject(&name->object);
    if (name->buffer != NULL) {
        asdMemFree(name->buffer);
    }
    releaseObject(&bank->model[index]);
}

/* Releases everything a model slot owns: environment slots, resource file, models and cached objects. */
extern "C" void asdModelSlotRelease(s32 slot)
{
    resetEnvironmentSlots((EnvironmentSlotArray *)asdModelGetSlotArray1(slot));
    resetEnvironmentSlots((EnvironmentSlotArray *)asdModelGetSlotArray2(slot));
    u32 owner = asdModelGetSlotArray3(slot);
    u32 view = asdModelGetSlotRecord(slot);
    FUN_001569d8(owner, view, &DAT_004dace0[slot]);
    void *resource = *DAT_00464aa4[slot];
    if (resource != NULL) {
        nw_gfx_res_ResGraphicsFile_Cleanup(&resource);
    }
    releaseObject(&DAT_00464aac[slot]);
    DAT_004dace0[slot].end = DAT_004dace0[slot].begin;
    asdMemFreeNonNull(DAT_00464aa4[slot]);
    asdMemFree(DAT_00464a9c[slot]);
    DAT_00464a9c[slot] = NULL;
    asdModelSlotClearActive(slot);
    for (s16 index = 0; index < 8; index++) {
        releaseBankSlot(&g_asdModelBanks[slot], index);
        releaseBankSlot(&g_asdModelSlotBanks[slot], index);
        releaseBankSlot(&g_asdModelBanks[slot + 4], index);
        releaseBankSlot(&g_asdModelSlotBanks[slot + 4], index);
    }
    for (s16 index = 0; index < 4; index++) {
        releaseObject(&g_asdModelIdLists[slot].object[index]);
    }
}
