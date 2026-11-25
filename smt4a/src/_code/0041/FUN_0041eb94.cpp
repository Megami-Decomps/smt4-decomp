/* NON_MATCHING: the two initial snapshot copies still use a different source base and schedule. */
#include "gamedata/SavedUnitSelection.h"
#include "gamedata/GameDataAccess.h"
#include "code/Code0023.h"
#include "code/Code002c.h"
#include "code/Code0033.h"
#include <string.h>

extern "C" {
void controllerSetPositionXyz(u32, f32, f32, f32);
void __aeabi_memcpy4(void *, const void *, u32);
char *libc_strcpy(char *, const char *);
void FUN_0033440c(u32);
void gameGlobalsQueueValues(UnitRecord *, s32);
void FUN_0034aac8(s32);
void statusCameraRestore(s32);
void objBSetWordByIndex(s32, u16);

/* Restore the selected snapshot, its display name and the live session's mode flags. */
void FUN_0041eb94(SavedUnitSelection *work)
{
    controllerSetPositionXyz(work->resource->handle, 0.0f, -10000.0f, 0.0f);
    work->current = work->selected;
    SavedUnitChoice *choice = &work->choices[work->selected];
    PlayerDataA *player = reinterpret_cast<PlayerDataA *>(work->unit);
    memcpy(player->equipment, &choice->base, sizeof(player->equipment));
    memcpy(&player->baseStats, &choice->maximum, sizeof(player->baseStats));
    __aeabi_memcpy4(&player->maxHp, &choice->current, sizeof(UnitSevenStats));
    player->hp = choice->hp;
    player->mp = choice->mp;
    player->experience = choice->bits;
    libc_strcpy(reinterpret_cast<char *>(player->name), choice->name);
    player->level = choice->id;
    libc_strcpy((char *)((GameSaveBodyA *)gameDataBlocksGetSaveData())->slots.hero.name, choice->name);
    FUN_0033440c(work->choices[work->selected].kind);
    gameGlobalsQueueValues(work->unit, 0);
    choice = &work->choices[work->selected];
    if (choice != NULL)
        FUN_0034aac8(choice->alternate != 0);
    if (work->changes[work->selected] == 0) {
        FUN_0033449c(0);
        FUN_0023b45c(0);
        gameGlobalsSetOverlayActive(1);
        statusCameraRestore(0);
        work->changed = 0;
    } else {
        FUN_0033449c(0);
        FUN_0023b45c(1);
        gameGlobalsSetOverlayActive(1);
        statusCameraRestore(1);
        work->changed = 1;
    }
    objBSetWordByIndex(1, reinterpret_cast<const PlayerDataA *>(work->unit)->equipment[4]);
    objBSetWordByIndex(2, reinterpret_cast<const PlayerDataA *>(work->unit)->equipment[5]);
    objBSetWordByIndex(0, reinterpret_cast<const PlayerDataA *>(work->unit)->equipment[3]);
}
}
