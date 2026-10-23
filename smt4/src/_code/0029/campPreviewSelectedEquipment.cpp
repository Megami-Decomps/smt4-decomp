#include "gamedata/PlayerInitialization.h"

extern "C" {
extern void *g_camp;
PlayerInitialRecordIV *gameGetPlayerData();
u32 FUN_0029efc0(const void *selector);
u32 FUN_0029efa8(const void *selector);
void rt_memcpy_w(void *destination, const void *source, u32 size);
void FUN_00299370(PlayerInitialRecordIV *player);
void FUN_0029a0cc(PlayerInitialRecordIV *player);
void FUN_0029c4ac(s32 mode);

void campPreviewSelectedEquipment(s32 category)
{
    // SMT IV's equipment-menu storage extends beyond the supplied camp prefix.
    struct EquipmentMenuView {
        u8 prefix[0x2A4];
        u8 selectors[7][0x64];
        u8 padding560[0x191C];
        u16 melee[120];
        u16 ranged[120];
        u16 ammunition[50];
        u16 head[120];
        u16 body[120];
        u16 legs[120];
        u16 accessories[120];
    };
    EquipmentMenuView *camp = static_cast<EquipmentMenuView *>(g_camp);
    PlayerInitialRecordIV *player = gameGetPlayerData();
    const void *selector = NULL;
    const u16 *choices = NULL;
    if (category == 17) { selector = camp->selectors[0]; choices = camp->melee; }
    else if (category == 18) { selector = camp->selectors[1]; choices = camp->ranged; }
    else if (category == 19) { selector = camp->selectors[2]; choices = camp->ammunition; }
    else if (category == 20) { selector = camp->selectors[3]; choices = camp->head; }
    else if (category == 21) { selector = camp->selectors[4]; choices = camp->body; }
    else if (category == 22) { selector = camp->selectors[5]; choices = camp->legs; }
    else if (category == 23) { selector = camp->selectors[6]; choices = camp->accessories; }
    u32 selected = FUN_0029efc0(selector);
    selected += FUN_0029efa8(selector);
    PlayerInitialRecordIV preview;
    rt_memcpy_w(&preview, player, sizeof(preview));
    if (category == 17) preview.equipment[0] = choices[selected];
    else if (category == 18) preview.equipment[1] = choices[selected];
    else if (category == 19) preview.equipment[2] = choices[selected];
    else if (category == 20) preview.equipment[3] = choices[selected];
    else if (category == 21) preview.equipment[4] = choices[selected];
    else if (category == 22) preview.equipment[5] = choices[selected];
    else if (category == 23) preview.equipment[6] = choices[selected];
    FUN_00299370(&preview);
    FUN_0029a0cc(&preview);
    FUN_0029c4ac(0);
}
}
