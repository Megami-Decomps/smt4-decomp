/* NON_MATCHING: only the first store differs: retail writes the 0x3048 state word through a literal offset (ldr r1,=0x3048; str r7,[r1,r0]) where the build adds 0x3000 to r0 and restores it. */
#include "shard/W6_W6Match7_MaterialAnimationFlags.h"
#include "shard/W6_W6Match1_BattleVersionResources.h"
#include "shard/W6_W6Match2_KeyedValueTable.h"
#include "AsdSDK/Source/Gfx/Model/AsdMdlManager.h"
#include "battle/btlMain.h"
#include <stddef.h>
#include "AsdSDK/AsdMemUtil.h"
#include "battle/BtlGlobals.h"

extern "C" {
void screenFadeResetAndRelease(MaterialMergeOwner *);
void btlEffectNumberedRelease(MaterialMergeOwner *);
void FUN_003da890(MaterialMergeOwner *);
void modelManagerReleaseSlots(MaterialMergeOwner *);
void keyedRecordsFreeAll(void);
void textureCacheReleaseAll(void);
void btlSpritePlacementRelease(BattleSpritePlacement *);
void asdMdlManagerMarkDestroy(AsdMdlObject *);
void asdMemFree(void *);
}

/* Clears the given battle flag bits. */
static __inline void btlMainClearFlags(BtlCamera *main, u32 mask)
{
    main->flags &= ~mask;
}

/* Releases the battle's transient resources: version slots, the optional object, model slots and sprite placements. */
extern "C" void btlEffectReleaseResources(MaterialMergeOwner *owner)
{
    struct DeletingMethods {
        u8 prefix[4];
        void (*destroy)(void *);
    };
    /* Control words span multiple alternatives of the shared owner's union. */
    struct ResourceControl {
        u8 prefix[0x1CF8];
        void *optionalObject;
        u8 prefix1CFC[0x129C];
        u32 clearedWord;
        u8 prefix2F9C[0xAC];
        u32 state;
    };
    typedef char ResourceCleanupOffsets[
        offsetof(ResourceControl, clearedWord) == 0x2F98 &&
        offsetof(ResourceControl, state) == 0x3048 ? 1 : -1];
    ResourceControl *control = reinterpret_cast<ResourceControl *>(owner);
    control->state = 0;
    screenFadeResetAndRelease(owner);
    FUN_003da890(owner);

    BattleVersionResources *resources = reinterpret_cast<BattleVersionResources *>(owner);
    for (s32 i = 0; i < 11; ++i) {
        BattleVersionResourceSlot *slot = &resources->slots[i];
        slot->state = 0xFF;
        memClear(slot->name, sizeof(slot->name));
        if (slot->data != NULL) {
            asdMemFree(slot->data);
            slot->data = NULL;
        }
        slot->readiness.flags = 0;
    }
    if (control->optionalObject != NULL) {
        const DeletingMethods *methods = *reinterpret_cast<const DeletingMethods *const *>(control->optionalObject);
        methods->destroy(control->optionalObject);
        control->optionalObject = NULL;
    }
    btlEffectNumberedRelease(owner);
    control->clearedWord = 0;
    keyedRecordsFreeAll();
    textureCacheReleaseAll();
    if (g_btlMain != NULL) {
        btlMainClearFlags(g_btlMain, 0x08000000);
    }
    modelManagerReleaseSlots(owner);

    KeyedValueTable *models = reinterpret_cast<KeyedValueTable *>(owner);
    for (s32 i = 0; i < 50; ++i) {
        KeyedValueSlot *slot = &models->slots[i];
        slot->firstKey = -1;
        slot->secondKey = -1;
        slot->action.flags = 0;
        slot->action.index = 0;
        if (slot->action.unk20 != 0) {
            void *child = reinterpret_cast<void *>(slot->action.unk20);
            const DeletingMethods *methods =
                *reinterpret_cast<const DeletingMethods *const *>(child);
            methods->destroy(child);
            slot->action.unk20 = 0;
        }
        AsdMdlObject *model = reinterpret_cast<AsdMdlObject *>(slot->model);
        if (model != NULL) {
            if (model->node->unk0c >= 0)
                asdMdlManagerMarkDestroy(model);
            asdMdlManagerDestroy(reinterpret_cast<AsdMdlObject *>(slot->model));
            slot->model = NULL;
        }
    }
    for (s32 i = 0; i < 50; ++i) {
        owner->placements.entries[i].resource = NULL;
        owner->placements.entries[i].key = -1;
        btlSpritePlacementRelease(&owner->placements.entries[i].placement);
        owner->placements.entries[i].activation.flags = 0;
    }
}
