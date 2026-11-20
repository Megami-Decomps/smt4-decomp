#include "saveLoadUI/saveLoadUI.h"
#include "gamedata/GamePlayerData.h"
#include "shard/Sys44de28.h"
#include <stddef.h>
#include <string.h>

extern "C" {
void FUN_0029dfc0(u32);
void gameSetIconDisplayEnabled(u32);
void statusCameraRestore(u32);
void __aeabi_memcpy4(void *, const void *, u32);
char *libc_strcpy(char *, const char *);
void *gameDataBlocksGetSaveData(void);
void FUN_0029a0e8(PlayerDataIV *);
void FUN_0026b5a8(bool);
void FUN_0029c4c8(u32);
void FUN_0029963c(u32, u16);

void saveUiRefreshSelectedSlotPreview(void)
{
    // Selected slot lies beyond the shared global prefix.
    struct SaveUiGlobalsView {
        u8 unk00[4];
        SaveLoadUIWork *work;
        s32 selected;
    };
    struct SaveProfileNameView {
        u8 unk00[0x54];
        char name[0x12];
    };
    typedef char SavePreviewLocalOffsets[offsetof(SaveUiGlobalsView, selected) == 8 &&
        offsetof(SaveProfileNameView, name) == 0x54 ? 1 : -1];
    SaveUiGlobalsView *globals = reinterpret_cast<SaveUiGlobalsView *>(&g_saveLoadUIFlags);
    SaveLoadUIWork *work = globals->work;
    const s32 selected = globals->selected;
    if (work->preview.previousSlot == selected ||
        work->preview.inputBlocked || work->preview.pending)
        return;
    work->preview.previousSlot = selected;
    if (!work->preview.available[selected]) {
        FUN_0029dfc0(0);
        gameSetIconDisplayEnabled(1);
        statusCameraRestore(0);
        return;
    }
    work->preview.pending = 1;
    FUN_0029dfc0(1);
    gameSetIconDisplayEnabled(1);
    statusCameraRestore(0);
    PlayerDataIV *player = work->preview.player;
    const SavePreviewSlot *slot = &work->preview.slots[globals->selected];
    memcpy(player->equipment, slot->equipment, sizeof(player->equipment));
    memcpy(&player->baseStats, slot->baseStats, sizeof(player->baseStats));
    __aeabi_memcpy4(&player->maxHp, slot->maximums, sizeof(slot->maximums));
    player->hp = slot->hp;
    player->mp = slot->mp;
    player->experience = slot->experience;
    libc_strcpy(player->name, slot->name);
    player->level = slot->enabled;
    libc_strcpy(static_cast<SaveProfileNameView *>(gameDataBlocksGetSaveData())->name, slot->name);
    FUN_0029a0e8(work->preview.player);
    slot = &work->preview.slots[globals->selected];
    if (slot)
        FUN_0026b5a8(slot->optionEnabled != 0);
    FUN_0029c4c8(0);
    __aeabi_memcpy4(gameGetPlayerData(), work->preview.player, sizeof(player->equipment));
    FUN_0029963c(1, work->preview.player->equipment[4]);
    FUN_0029963c(2, work->preview.player->equipment[5]);
    FUN_0029963c(0, work->preview.player->equipment[3]);
}
}
