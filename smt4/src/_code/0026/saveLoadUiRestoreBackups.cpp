/* NON_MATCHING: one scheduling difference: for the save data copy (armcc's __aeabi_memcpy4) retail loads the 0x24d28 size literal into r2 before the backup pointer in r1. */
#include "shard/Sys44de28.h"
#include "saveLoadUI/saveLoadUI.h"
#include "gamedata/GameSaveData.h"
#include "gamedata/SaveLoadProcess.h"
#include "gamedata/GameDataAccess.h"
#include "mobiclip_ctrl/MobiclipCtrl.h"

extern "C" {

void aocActivateFileGroupFlags(u32 system);
void asdMemFree(void *block);
void titleConfigApplyAudio(void);
void titleSynchronizeSavedConfig(void);

SaveTableImage *gameDataBlocksGetTable(void);

extern u32 g_aocSystem; /* 0x433158 */

/* Restores the game data, settings and save data from the backups taken before a load, then frees them. */
void saveLoadUiRestoreBackups(void)
{
    if (g_saveLoadUIFlags.backupTable != NULL) {
        *gameDataBlocksGetTable() = *g_saveLoadUIFlags.backupTable;
        *(ConfigSettingsImage *)configGetSettings() = *g_saveLoadUIFlags.backupConfig;
        *(GameSaveBody *)gameDataBlocksGetSaveData() = *g_saveLoadUIFlags.backupSave;
        titleSynchronizeSavedConfig();
        titleConfigApplyAudio();
        aocActivateFileGroupFlags(g_aocSystem);
        asdMemFree(g_saveLoadUIFlags.backupTable);
        asdMemFree(g_saveLoadUIFlags.backupConfig);
        asdMemFree(g_saveLoadUIFlags.backupSave);
        g_saveLoadUIFlags.backupTable = NULL;
        g_saveLoadUIFlags.backupConfig = NULL;
        g_saveLoadUIFlags.backupSave = NULL;
    }
}

} /* extern "C" */
