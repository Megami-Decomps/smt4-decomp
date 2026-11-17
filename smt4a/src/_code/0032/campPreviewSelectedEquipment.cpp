#include "camp/CampStateA.h"
#include "gamedata/UnitStats.h"
namespace {
struct EquipmentPreview { u16 equipment[7]; u8 statistics[0x56]; };
}
extern "C" {
const StatBlock *gameGetPlayerData();
s32 resourceRunOperationIfUnblocked(GridNavigation *controller);
s32 listCursorGetRowIfUnblocked(GridNavigation *controller);
void __aeabi_memcpy4(void *destination, const void *source, u32 bytes);
void FUN_003df7c4(EquipmentPreview *preview);
void FUN_00372100(const EquipmentPreview *preview, s32 mode);
void FUN_003343c0(s32 mode);

// Recompute the player's displayed statistics with the highlighted equipment substituted.
void campPreviewSelectedEquipment(s32 category)
{
    CampStateA *camp = g_camp;
    const StatBlock *player = gameGetPlayerData();
    GridNavigation *controller = 0;
    const u16 *items = 0;
    if (category == 0x13 || category == 0x48) { controller = &camp->grids[5]; items = camp->meleeIds; }
    if (category == 0x14 || category == 0x49) { controller = &camp->grids[6]; items = camp->rangedIds; }
    if (category == 0x15 || category == 0x4a) { controller = &camp->grids[7]; items = camp->ammunitionIds; }
    if (category == 0x16 || category == 0x4b) { controller = &camp->grids[8]; items = camp->headIds; }
    if (category == 0x17 || category == 0x4c) { controller = &camp->grids[9]; items = camp->bodyIds; }
    if (category == 0x18 || category == 0x4d) { controller = &camp->grids[10]; items = camp->legsIds; }
    if (category == 0x19 || category == 0x4e) { controller = &camp->grids[11]; items = camp->accessoryIds; }
    s32 index = resourceRunOperationIfUnblocked(controller);
    index += listCursorGetRowIfUnblocked(controller);
    EquipmentPreview preview;
    __aeabi_memcpy4(&preview, player, sizeof(preview));
    if (category == 0x13 || category == 0x48) preview.equipment[0] = items[index];
    if (category == 0x14 || category == 0x49) preview.equipment[1] = items[index];
    if (category == 0x15 || category == 0x4a) preview.equipment[2] = items[index];
    if (category == 0x16 || category == 0x4b) preview.equipment[3] = items[index];
    if (category == 0x17 || category == 0x4c) preview.equipment[4] = items[index];
    if (category == 0x18 || category == 0x4d) preview.equipment[5] = items[index];
    if (category == 0x19 || category == 0x4e) preview.equipment[6] = items[index];
    FUN_003df7c4(&preview);
    FUN_00372100(&preview, 0);
    FUN_003343c0(0);
}
}
