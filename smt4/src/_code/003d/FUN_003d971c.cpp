/* NON_MATCHING: only initial model-slot reset stores and their compare are scheduled differently. */
#include "shard/W6_W6Match7_MaterialAnimationFlags.h"
#include "shard/W6_W6Match1_BattleVersionResources.h"
#include "shard/W6_W6Match2_KeyedValueTable.h"
#include "AsdSDK/Source/Gfx/Model/AsdMdlManager.h"
#include <stddef.h>

extern "C" {
void FUN_0022708c(MaterialMergeOwner *);
void FUN_002276f8(MaterialMergeOwner *);
void FUN_0027de24(MaterialMergeOwner *);
void FUN_00241d58(BattleSpritePlacement *);
void asdMdlManagerMarkDestroy(AsdMdlObject *);
void asdMdlManagerDestroy(AsdMdlObject *);
void asdMemFree(void *);
void memClear(void *, u32);
}

extern "C" void FUN_003d971c(MaterialMergeOwner *owner)
{
    struct DeletingMethods {
        u8 prefix[4];
        void (*destroy)(void *);
    };
    /* Control words span multiple alternatives of the shared owner's union. */
    struct ResourceControl {
        u8 prefix[0x1CFC];
        u32 placementCount;
        u8 prefix1D00[0x1328];
        u32 flags;
        u8 prefix302C[0xC];
        u8 textureSlot;
        u8 prefix3039[0xF];
        u32 state;
        u8 prefix304C[0x1C8];
        u32 pending;
    };
    typedef char ResourceCleanupOffsets[
        offsetof(ResourceControl, flags) == 0x3028 &&
        offsetof(ResourceControl, textureSlot) == 0x3038 &&
        offsetof(ResourceControl, state) == 0x3048 &&
        offsetof(ResourceControl, pending) == 0x3214 ? 1 : -1];
    ResourceControl *control = reinterpret_cast<ResourceControl *>(owner);
    control->state = 0;
    FUN_0022708c(owner);
    FUN_002276f8(owner);
    FUN_0027de24(owner);

    KeyedValueTable *models = reinterpret_cast<KeyedValueTable *>(owner);
    for (s32 i = 0; i < 50; ++i) {
        KeyedValueSlot *slot = &models->slots[i];
        slot->firstKey = -1;
        slot->action.flags = 0;
        slot->secondKey = -1;
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
        FUN_00241d58(&owner->placements.entries[i].placement);
        owner->placements.entries[i].activation.flags = 0;
    }
    control->flags = 0;
    control->textureSlot = 0xC;
    control->placementCount = 0;
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
    control->flags |= 0x100;
    control->pending = 0;
}
