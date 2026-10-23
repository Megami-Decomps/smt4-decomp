#ifndef CAMP_CAMPCEC_OUTFIT_PREVIEW_H
#define CAMP_CAMPCEC_OUTFIT_PREVIEW_H
#include "common.h"
#include <stddef.h>

struct OutfitPreviewEquipment {
    /* 0x00 */ u16 slots[7];
    /* 0x0E */ u8 unk0E[0x56];
};
struct OutfitPreviewItem {
    /* 0x00 */ u8 unk00[0x22];
    /* 0x22 */ u8 slotKind;
};
struct OutfitPreview {
    /* 0x00 */ f32 translation[3];
    /* 0x0C */ f32 rotation[3];
    /* 0x18 */ u32 unk18;
    /* 0x1C */ void *modelGroup;
};
typedef char OutfitPreviewEquipmentLayoutCheck[sizeof(OutfitPreviewEquipment) == 100 ? 1 : -1];
typedef char OutfitPreviewItemOffsetCheck[offsetof(OutfitPreviewItem, slotKind) == 0x22 ? 1 : -1];
typedef char OutfitPreviewOffsetsCheck[offsetof(OutfitPreview, rotation) == 0xC &&
    offsetof(OutfitPreview, modelGroup) == 0x1C && sizeof(OutfitPreview) == 0x20 ? 1 : -1];
#endif
