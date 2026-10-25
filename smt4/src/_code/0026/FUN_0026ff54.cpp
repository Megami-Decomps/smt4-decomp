/* NON_MATCHING: one scheduling difference: retail loads the 0x24d28 size literal into r2 before the backup pointer in r1 for the save data copy. */
#include "shard/Sys44de28.h"

extern "C" {

void aocActivateFileGroupFlags(u32 system);
void FUN_002ad8b4(u32 settings, void *backup);
void asdMemFree(void *block);
void titleConfigApplyAudio(void);
void titleSynchronizeSavedConfig(void);
void __aeabi_memcpy4(u32 destination, void *source, u32 size);
u32 configGetSettings(void);
u32 gameDataBlocksGetTable(void);
u32 gameDataBlocksGetSaveData(void);

extern u32 g_aocSystem; /* 0x433158 */

/* Restores the game data, settings and save data from the backups taken before a load, then frees them. */
void FUN_0026ff54(void)
{
    if (g_saveLoadUIFlags.backupTable != NULL) {
        __aeabi_memcpy4(gameDataBlocksGetTable(), g_saveLoadUIFlags.backupTable, 0x80);
        FUN_002ad8b4(configGetSettings(), g_saveLoadUIFlags.backupConfig);
        __aeabi_memcpy4(gameDataBlocksGetSaveData(), g_saveLoadUIFlags.backupSave, 0x24d28);
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
