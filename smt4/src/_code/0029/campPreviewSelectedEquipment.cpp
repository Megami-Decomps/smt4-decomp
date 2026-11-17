#include "gamedata/GamePlayerData.h"
#include "camp/CampState.h"

extern "C" {
u32 resourceRunOperationIfUnblocked(const void *selector);
u32 listCursorGetRowIfUnblocked(const void *selector);
void __aeabi_memcpy4(void *destination, const void *source, u32 size);
void playerRecalcStatsFromEquipment(PlayerDataIV *player);
void FUN_0029a0cc(PlayerDataIV *player);
void FUN_0029c4ac(s32 mode);

void campPreviewSelectedEquipment(s32 category)
{
    CampState *camp = g_camp;
    PlayerDataIV *player = gameGetPlayerData();
    const void *selector = NULL;
    const u16 *choices = NULL;
    if (category == 17) { selector = &camp->grids[5]; choices = camp->meleeIds; }
    else if (category == 18) { selector = &camp->grids[6]; choices = camp->rangedIds; }
    else if (category == 19) { selector = &camp->grids[7]; choices = camp->ammunitionIds; }
    else if (category == 20) { selector = &camp->grids[8]; choices = camp->headIds; }
    else if (category == 21) { selector = &camp->grids[9]; choices = camp->bodyIds; }
    else if (category == 22) { selector = &camp->grids[10]; choices = camp->legsIds; }
    else if (category == 23) { selector = &camp->grids[11]; choices = camp->accessoryIds; }
    u32 selected = resourceRunOperationIfUnblocked(selector);
    selected += listCursorGetRowIfUnblocked(selector);
    PlayerDataIV preview;
    __aeabi_memcpy4(&preview, player, sizeof(preview));
    if (category == 17) preview.equipment[0] = choices[selected];
    else if (category == 18) preview.equipment[1] = choices[selected];
    else if (category == 19) preview.equipment[2] = choices[selected];
    else if (category == 20) preview.equipment[3] = choices[selected];
    else if (category == 21) preview.equipment[4] = choices[selected];
    else if (category == 22) preview.equipment[5] = choices[selected];
    else if (category == 23) preview.equipment[6] = choices[selected];
    playerRecalcStatsFromEquipment(&preview);
    FUN_0029a0cc(&preview);
    FUN_0029c4ac(0);
}
}
