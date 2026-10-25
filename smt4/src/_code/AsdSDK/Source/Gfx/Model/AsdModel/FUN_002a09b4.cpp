/* NON_MATCHING: saved zero/one register allocation and second slot-list address registers differ. */
#include "AsdSDK/Source/Gfx/Model/AsdModel.h"
#include "shard/S1GfxModel.h"
#include "gfx/ModelFileSource.h"
#include "AsdSDK/AsdMemUtil.h"

static inline void detachModelSlots(ModelSlotList *list)
{
    ModelSlot **end = list->slots.end;
    for (ModelSlot **slot = list->slots.begin; slot != end; ++slot) {
        if (*slot != NULL)
            (*slot)->attached = 0;
    }
    list->slots.end = list->slots.begin;
}

extern "C" {
extern AsdModelBank g_asdModelBanks[2];
extern AsdModelBank DAT_004d9d88[2];
extern AsdModelBank DAT_004da290[2];
extern AsdModelBank DAT_004da798[2];
extern AsdModelIdList g_asdModelIdLists[2];
extern void *DAT_00464a9c[2];
extern ModelFileSource *DAT_00464aa4[2];
ModelSlotList *asdModelGetSlotArray1(s32 slot);
ModelSlotList *asdModelGetSlotArray2(u32);
void *asdLoadFileSync(const char *, u32, u32, u32);
void FUN_0021f6e4(ModelFileSource *, u32);

/* Reset one bank and its attached slot lists, then load and register its new file. */
void FUN_002a09b4(const char *path, u32 bank)
{
    memClear(&g_asdModelBanks[bank], sizeof(AsdModelBank));
    memClear(&DAT_004d9d88[bank], sizeof(AsdModelBank));
    memClear(&DAT_004da290[bank], sizeof(AsdModelBank));
    memClear(&DAT_004da798[bank], sizeof(AsdModelBank));
    g_asdModelIdLists[bank] = AsdModelIdList();
    detachModelSlots(asdModelGetSlotArray1(bank));
    detachModelSlots(asdModelGetSlotArray2(bank));
    DAT_00464a9c[bank] = asdLoadFileSync(path, 0, 1, 0x80);
    ModelFileSource *source = (ModelFileSource *)asdOperatorNew(sizeof(ModelFileSource), path);
    if (source != NULL)
        source->data = DAT_00464a9c[bank];
    DAT_00464aa4[bank] = source;
    FUN_0021f6e4(source, bank);
}
}
