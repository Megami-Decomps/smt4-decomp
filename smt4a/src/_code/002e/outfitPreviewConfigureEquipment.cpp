#include "camp/CampCec/OutfitPreview.h"
#include "shard/Shard003E.h"
#include <string.h>

struct OutfitPreviewWithEquipment : OutfitPreview {
    /* 0x20 */ const OutfitPreviewEquipment *equipment;
};
typedef char OutfitPreviewWithEquipmentLayoutCheck[
    offsetof(OutfitPreviewWithEquipment, equipment) == 0x20 &&
    sizeof(OutfitPreviewWithEquipment) == 0x24 ? 1 : -1];

extern "C" {
s32 linkHolderCallFirst(LinkHolder *holder);
void linkHolderSetFlag(LinkHolder *holder);
void playerLoadOutfitModels(void *owner, const OutfitPreviewEquipment *equipment, u32 flags);

static inline void outfitPreviewApplyEquipment(OutfitPreviewWithEquipment *preview,
                                               const OutfitPreviewEquipment *equipment)
{
    preview->equipment = equipment;
    playerLoadOutfitModels(preview->modelGroup, equipment, 7);
    if (preview->modelGroup != NULL) {
        linkHolderSetFlag(preview->modelGroup);
    }
}

/* Configure the equipment preview's pose and load the selected outfit. */
void outfitPreviewConfigureEquipment(OutfitPreview *preview, const OutfitPreviewEquipment *equipment)
{
    if (preview->modelGroup != NULL) {
        preview->scale = 0.012f;
        preview->rotation[1] = 350.0f;
        f32 translation[3];
        if (linkHolderCallFirst(preview->modelGroup) == 0x23) {
            translation[0] = 1.0f;
            translation[1] = 5.4f;
            translation[2] = 1.5f;
        } else {
            translation[0] = 1.2f;
            translation[1] = 5.3f;
            translation[2] = 0.5f;
        }
        memcpy(preview->translation, translation, sizeof(translation));
        outfitPreviewApplyEquipment(static_cast<OutfitPreviewWithEquipment *>(preview), equipment);
    }
}

} /* extern "C" */
