#include "gamedata/SavedUnitSelection.h"
#include <string.h>
#include "code/Code0023.h"
#include "code/Code002c.h"
#include "gamedata/GameDataAccess.h"

extern "C" {
char *libc_strcpy(char *output, const char *input);
void FUN_0033440c(u32 value);
void FUN_0033449c(s32 value);
void FUN_0034aac8(u8 value);
void gameGlobalsQueueValues(void *player, s32 mode);
void __aeabi_memcpy4(void *output, const void *input, u32 size);

/* Applies the highlighted save profile to the player preview and global name/options. */
void saveLoadRefreshHighlightedPlayerPreview(SavedUnitSelection *work)
{
    s32 selection = work->selected;
    s32 applied = work->current;
    if (selection == applied)
        return;
    work->current = selection;
    if (work->changes[work->current]) {
        FUN_0023b45c(1);
        gameGlobalsSetOverlayActive(1);
        PlayerDataA *player = (PlayerDataA *)work->unit;
        const SavedUnitChoice *profile = &work->choices[work->current];
        memcpy(player->equipment, &profile->base, sizeof(player->equipment));
        memcpy(&player->baseStats, &profile->maximum, sizeof(player->baseStats));
        __aeabi_memcpy4(&player->maxHp, &profile->current, sizeof(profile->current));
        player->hp = profile->hp;
        player->mp = profile->mp;
        player->experience = profile->bits;
        libc_strcpy((char *)player->name, profile->name);
        player->level = profile->id;
        libc_strcpy((char *)((GameSaveBodyA *)gameDataBlocksGetSaveData())->slots.hero.name, profile->name);
        gameGlobalsQueueValues(work->unit, 0);
        FUN_0033440c(work->choices[work->current].kind);
        profile = &work->choices[work->current];
        if (profile != NULL)
            FUN_0034aac8(profile->alternate != 0);
        FUN_0033449c(0);
    } else {
        FUN_0023b45c(0);
        gameGlobalsSetOverlayActive(1);
    }
}
} /* extern "C" */
