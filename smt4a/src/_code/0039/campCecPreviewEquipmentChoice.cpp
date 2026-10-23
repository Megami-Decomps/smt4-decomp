#include "shard/Shard0032.h"
#include "camp/CampCec/OutfitPreview.h"

extern "C" {
extern StateAtF4 *g_campCecEdit;
const OutfitPreviewEquipment *gameGetPlayerData(void);
s32 unitMatchesAlignment(u32 itemId);
const OutfitPreviewItem *FUN_00192608(u32 itemId);
void rt_memcpy_w(void *destination, const void *source, u32 size);
s32 FUN_002e2114(OutfitPreview *preview);
void FUN_002e2184(OutfitPreview *preview, const OutfitPreviewEquipment *equipment);
void FUN_002e207c(OutfitPreview *preview);
void FUN_003e5c68(void *modelGroup, const f32 *rotation);
void linkHolderApplyFlag(OutfitPreview *preview, u32 enabled);

// Preview an equipment choice without changing the player's saved outfit.
void campCecPreviewEquipmentChoice(u32 itemId)
{
    StateAtF4 *edit = g_campCecEdit;
    if (edit == NULL) {
        return;
    }
    OutfitPreviewEquipment equipment;
    rt_memcpy_w(&equipment, gameGetPlayerData(), sizeof(equipment));
    if (unitMatchesAlignment(itemId)) {
        const OutfitPreviewItem *item = FUN_00192608(itemId);
        switch (item->slotKind) {
        case 2: equipment.slots[0] = static_cast<u16>(itemId); break;
        case 3: equipment.slots[1] = static_cast<u16>(itemId); break;
        case 4: equipment.slots[3] = static_cast<u16>(itemId); break;
        case 5: equipment.slots[4] = static_cast<u16>(itemId); break;
        case 6: equipment.slots[5] = static_cast<u16>(itemId); break;
        case 7: equipment.slots[6] = static_cast<u16>(itemId); break;
        case 8: equipment.slots[2] = static_cast<u16>(itemId); break;
        }
    }
    if (FUN_002e2114(reinterpret_cast<OutfitPreview *>(edit->unk04))) {
        FUN_002e2184(reinterpret_cast<OutfitPreview *>(edit->unk04), &equipment);
        FUN_002e207c(reinterpret_cast<OutfitPreview *>(edit->unk04));
        OutfitPreview *preview = reinterpret_cast<OutfitPreview *>(edit->unk04);
        if (preview != NULL && preview->modelGroup != NULL) {
            FUN_003e5c68(preview->modelGroup, preview->rotation);
        }
        linkHolderApplyFlag(reinterpret_cast<OutfitPreview *>(edit->unk04), 0);
        edit->preview.outfitSelectionActive = 0;
    }
}
}
