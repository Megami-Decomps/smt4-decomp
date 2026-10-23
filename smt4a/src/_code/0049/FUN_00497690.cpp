/* NON_MATCHING: natural category loops replace retail's unrolled checks and indexed-store scheduling. */
#include "common.h"
#include <stddef.h>

struct EquipmentCategoryAvailability {
    s32 count;
    u8 unk04[0x70];
};
struct EquipmentCategoryMenuViewA {
    u8 unk00000[0xB68];
    EquipmentCategoryAvailability categories[8];
    u8 unk00F08[0x15104];
    s32 visibleCategories[4];
    s32 visibleCount;
};
typedef char EquipmentCategoryMenuOffsetsA[
    sizeof(EquipmentCategoryAvailability) == 0x74 && offsetof(EquipmentCategoryMenuViewA, visibleCategories) == 0x1600C &&
    offsetof(EquipmentCategoryMenuViewA, visibleCount) == 0x1601C ? 1 : -1];

extern "C" void FUN_00497690(EquipmentCategoryMenuViewA *menu, s32 level)
{
    menu->visibleCount = 0;
    if (level == 1) {
        for (s32 category = 0; category < 3; ++category)
            if (menu->categories[category].count > 0)
                menu->visibleCategories[menu->visibleCount++] = category;
    } else if (level == 2) {
        for (s32 category = 3; category < 7; ++category)
            if (menu->categories[category].count > 0)
                menu->visibleCategories[menu->visibleCount++] = category;
    } else if (level == 0) {
        if (menu->categories[0].count > 0 || menu->categories[1].count > 0 || menu->categories[2].count > 0)
            menu->visibleCategories[menu->visibleCount++] = 0;
        if (menu->categories[3].count > 0 || menu->categories[4].count > 0 || menu->categories[5].count > 0 || menu->categories[6].count > 0)
            menu->visibleCategories[menu->visibleCount++] = 1;
        if (menu->categories[7].count > 0)
            menu->visibleCategories[menu->visibleCount++] = 2;
        menu->visibleCategories[menu->visibleCount++] = 3;
    }
}
