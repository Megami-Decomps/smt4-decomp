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

extern "C" void equipmentMenuBuildVisibleCategories(EquipmentCategoryMenuViewA *menu, s32 level)
{
    menu->visibleCount = 0;
    switch (level) {
    case 0:
        if (menu->categories[0].count > 0 || menu->categories[1].count > 0 || menu->categories[2].count > 0) {
            menu->visibleCategories[menu->visibleCount] = 0;
            menu->visibleCount++;
        }
        if (menu->categories[3].count > 0 || menu->categories[4].count > 0 || menu->categories[5].count > 0 || menu->categories[6].count > 0) {
            menu->visibleCategories[menu->visibleCount] = 1;
            menu->visibleCount++;
        }
        if (menu->categories[7].count > 0) {
            menu->visibleCategories[menu->visibleCount] = 2;
            menu->visibleCount++;
        }
        menu->visibleCategories[menu->visibleCount] = 3;
        menu->visibleCount++;
        break;
    case 1:
        if (menu->categories[0].count > 0) {
            menu->visibleCategories[menu->visibleCount] = 0;
            menu->visibleCount++;
        }
        if (menu->categories[1].count > 0) {
            menu->visibleCategories[menu->visibleCount] = 1;
            menu->visibleCount++;
        }
        if (menu->categories[2].count > 0) {
            menu->visibleCategories[menu->visibleCount] = 2;
            menu->visibleCount++;
        }
        break;
    case 2:
        if (menu->categories[3].count > 0) {
            menu->visibleCategories[menu->visibleCount] = 3;
            menu->visibleCount++;
        }
        if (menu->categories[4].count > 0) {
            menu->visibleCategories[menu->visibleCount] = 4;
            menu->visibleCount++;
        }
        if (menu->categories[5].count > 0) {
            menu->visibleCategories[menu->visibleCount] = 5;
            menu->visibleCount++;
        }
        if (menu->categories[6].count > 0) {
            menu->visibleCategories[menu->visibleCount] = 6;
            menu->visibleCount++;
        }
        break;
    }
}
