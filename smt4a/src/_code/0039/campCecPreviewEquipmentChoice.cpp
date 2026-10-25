#include "shard/Shard0032.h"
#include "camp/CampCec/OutfitPreview.h"

extern "C" {
extern StateAtF4 *g_campCecEdit;
const OutfitPreviewEquipment *gameGetPlayerData(void);
s32 unitMatchesAlignment(u32 itemId);
const OutfitPreviewItem *dataTable08Sub2GetRecord(u32 itemId);
void __aeabi_memcpy4(void *destination, const void *source, u32 size);
s32 FUN_002e2114(OutfitPreview *preview);
void outfitPreviewConfigureEquipment(OutfitPreview *preview, const OutfitPreviewEquipment *equipment);
void FUN_002e207c(OutfitPreview *preview);
void modelApplyNonzeroGroupRotation(void *modelGroup, const f32 *rotation);
void linkHolderApplyFlag(OutfitPreview *preview, u32 enabled);

// Preview an equipment choice without changing the player's saved outfit.
void campCecPreviewEquipmentChoice(u32 itemId)
{
    StateAtF4 *edit = g_campCecEdit;
    if (edit == NULL) {
        return;
    }
    OutfitPreviewEquipment equipment;
    __aeabi_memcpy4(&equipment, gameGetPlayerData(), sizeof(equipment));
    if (unitMatchesAlignment(itemId)) {
        const OutfitPreviewItem *item = dataTable08Sub2GetRecord(itemId);
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
        outfitPreviewConfigureEquipment(reinterpret_cast<OutfitPreview *>(edit->unk04), &equipment);
        FUN_002e207c(reinterpret_cast<OutfitPreview *>(edit->unk04));
        OutfitPreview *preview = reinterpret_cast<OutfitPreview *>(edit->unk04);
        if (preview != NULL && preview->modelGroup != NULL) {
            modelApplyNonzeroGroupRotation(preview->modelGroup, preview->rotation);
        }
        linkHolderApplyFlag(reinterpret_cast<OutfitPreview *>(edit->unk04), 0);
        edit->preview.outfitSelectionActive = 0;
    }
}
}
