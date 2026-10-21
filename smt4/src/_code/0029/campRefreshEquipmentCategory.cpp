/* NON_MATCHING: retail retains a null-address guard on the selected camp grid subobject; the remaining instructions match. */
#include "common.h"

struct CampEquipmentGrid { u8 data[0x64]; };
struct CampEquipmentLists {
    u8 unk0000[0x33];
    u8 busy;
    u8 unk0034[0x270];
    CampEquipmentGrid grids[7]; // 0x2a4
    u8 unk0560[0x191c];
    u16 slot0[120], slot1[120], slot2[50]; // 0x1e7c, 0x1f6c, 0x205c
    u16 slot3[120], slot4[120], slot5[120], slot6[120];
};
struct CampPlayerEquipment { u16 equipment[7]; };
extern "C" {
extern CampEquipmentLists *g_camp;
const CampPlayerEquipment *gameGetPlayerData();
s32 flagValueIsPositive(u32);
void FUN_0029f848(CampEquipmentGrid *, s32, s32, s32, s32, s32);
void FUN_00282f80(u32);
void FUN_0029eb5c(CampEquipmentGrid *, s32);
void objClearFlagPair(CampEquipmentGrid *);

void campRefreshEquipmentCategory(u32 category)
{
    CampEquipmentLists *camp = g_camp;
    if (camp->busy)
        return;
    s32 first, last;
    u16 *items;
    u16 equipped;
    CampEquipmentGrid *grid;
    switch (category) {
    case 17:
        first = 61; last = 180;
        items = camp->slot0; grid = &camp->grids[0];
        equipped = gameGetPlayerData()->equipment[0];
        break;
    case 18:
        first = 181; last = 300;
        items = camp->slot1; grid = &camp->grids[1];
        equipped = gameGetPlayerData()->equipment[1];
        break;
    case 19:
        first = 781; last = 830;
        items = camp->slot2; grid = &camp->grids[2];
        equipped = gameGetPlayerData()->equipment[2];
        break;
    case 20:
        first = 301; last = 420;
        items = camp->slot3; grid = &camp->grids[3];
        equipped = gameGetPlayerData()->equipment[3];
        break;
    case 21:
        first = 421; last = 540;
        items = camp->slot4; grid = &camp->grids[4];
        equipped = gameGetPlayerData()->equipment[4];
        break;
    case 22:
        first = 541; last = 660;
        items = camp->slot5; grid = &camp->grids[5];
        equipped = gameGetPlayerData()->equipment[5];
        break;
    case 23:
        first = 661; last = 780;
        items = camp->slot6; grid = &camp->grids[6];
        equipped = gameGetPlayerData()->equipment[6];
        break;
    default:
        return;
    }
    s32 count = 0;
    for (s32 id = first; id <= last; ++id) {
        if (flagValueIsPositive(id))
            items[count++] = id;
    }
    FUN_0029f848(grid, count, 9, 1, 1, 0);
    FUN_00282f80(category);
    s32 selected = 0;
    for (s32 i = 0; i < count + 1; ++i) {
        if (items[i] == equipped)
            selected = i;
    }
    FUN_0029eb5c(grid, selected);
    objClearFlagPair(grid);
}
}
