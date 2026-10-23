#include "shard/W6_W6Match8_CampInventory.h"
#include "gamedata/UnitStats.h"
namespace {
struct EquipmentPreview { u16 equipment[7]; u8 statistics[0x56]; };
}
extern "C" {
extern CampInventoryLists *g_camp;
const StatBlock *gameGetPlayerData();
s32 resourceRunOperationIfUnblocked(CampInventoryController *controller);
s32 FUN_002a4894(CampInventoryController *controller);
void rt_memcpy_w(void *destination, const void *source, u32 bytes);
void FUN_003df7c4(EquipmentPreview *preview);
void FUN_00372100(const EquipmentPreview *preview, s32 mode);
void FUN_003343c0(s32 mode);

// Recompute the player's displayed statistics with the highlighted equipment substituted.
void campPreviewSelectedEquipment(s32 category)
{
    // The item lists extend beyond the shared inventory prefix.
    struct EquipmentCampView {
        u8 prefix[0x2b4];
        CampInventoryController controllers[7];
        u8 unk570[0x25f8];
        u16 swords[120];
        u16 guns[120];
        u16 ammunition[50];
        u16 heads[120];
        u16 bodies[120];
        u16 legs[120];
        u16 accessories[120];
    };
    typedef char EquipmentPreviewOffsets[sizeof(EquipmentPreview) == 0x64 && offsetof(EquipmentCampView, swords) == 0x2b68 && offsetof(EquipmentCampView, accessories) == 0x307c ? 1 : -1];
    EquipmentCampView *camp = reinterpret_cast<EquipmentCampView *>(g_camp);
    const StatBlock *player = gameGetPlayerData();
    CampInventoryController *controller = 0;
    const u16 *items = 0;
    if (category == 0x13 || category == 0x48) { controller = &camp->controllers[0]; items = camp->swords; }
    if (category == 0x14 || category == 0x49) { controller = &camp->controllers[1]; items = camp->guns; }
    if (category == 0x15 || category == 0x4a) { controller = &camp->controllers[2]; items = camp->ammunition; }
    if (category == 0x16 || category == 0x4b) { controller = &camp->controllers[3]; items = camp->heads; }
    if (category == 0x17 || category == 0x4c) { controller = &camp->controllers[4]; items = camp->bodies; }
    if (category == 0x18 || category == 0x4d) { controller = &camp->controllers[5]; items = camp->legs; }
    if (category == 0x19 || category == 0x4e) { controller = &camp->controllers[6]; items = camp->accessories; }
    s32 index = resourceRunOperationIfUnblocked(controller);
    index += FUN_002a4894(controller);
    EquipmentPreview preview;
    rt_memcpy_w(&preview, player, sizeof(preview));
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
