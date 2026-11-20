/* NON_MATCHING: the aligned table and save-data copies load the destination through r3 instead of directly into r0. */
#include "AsdSDK/AsdDebug.h"
#include "mobiclip_ctrl/MobiclipCtrl.h"
#include "Model/MoriModelManager.h"
#include "shard/SaveSlotHeaderWork.h"
#include "shard/W5_W5Match7_FlagBanks.h"
#include <string.h>

extern "C" {
extern const char DAT_00533ec0[];

void *gameDataBlocksGetTable(void);

enum {
    SAVE_TABLE_SIZE = 0x80,
    CONFIG_BACKUP_SIZE = 8,
    SAVE_BACKUP_SIZE = 0x2a71c
};

/* Snapshots the game data table, config settings and save data before the save/load UI edits them. */
void saveLoadUiSnapshotGameData(void)
{
    if (g_saveLoadUIBase.gameDataBackup != NULL) {
        return;
    }
    asdDebugTrace(DAT_00533ec0, 172);
    g_saveLoadUIBase.gameDataBackup = asdMemoryAlloc(0x100, 0x100, 0, SAVE_TABLE_SIZE, 1);
    asdDebugTrace(DAT_00533ec0, 173);
    g_saveLoadUIBase.configBackup = asdMemoryAlloc(0x100, 0x100, 0, CONFIG_BACKUP_SIZE, 1);
    asdDebugTrace(DAT_00533ec0, 174);
    g_saveLoadUIBase.saveDataBackup = asdMemoryAlloc(0x100, 0x100, 0, SAVE_BACKUP_SIZE, 1);
    memcpy((u32 *)g_saveLoadUIBase.gameDataBackup, (const u32 *)gameDataBlocksGetTable(), SAVE_TABLE_SIZE);
    memcpy(g_saveLoadUIBase.configBackup, configGetSettings(), CONFIG_BACKUP_SIZE);
    memcpy((u32 *)g_saveLoadUIBase.saveDataBackup, (const u32 *)gameDataBlocksGetSaveData(), SAVE_BACKUP_SIZE);
}

} /* extern "C" */
