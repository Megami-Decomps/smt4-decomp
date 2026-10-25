/* NON_MATCHING: each copy's destination is staged through r3/r2 instead of loaded straight into r0 after the source call */
#include "AsdSDK/AsdDebug.h"

extern "C" {

typedef struct {
    u8 unk0[8];
    void *gameDataBackup;   /* 0x08: 0x80 bytes */
    void *configBackup;     /* 0x0c: 8 bytes */
    void *saveDataBackup;   /* 0x10: 0x2a71c bytes */
} SaveLoadUIBase;

extern SaveLoadUIBase g_saveLoadUIBase;
extern const char DAT_00533ec0[];

void *asdMemoryAlloc(u32 heap, u32 align, s32 flags, u32 size, s32 fromTop);
void *gameDataBlocksGetTable(void);
void *configGetSettings(void);
void *gameDataBlocksGetSaveData(void);
void __aeabi_memcpy4(void *dst, const void *src, u32 size);
void wordPairCopy(void *dst, const void *src);

/* Snapshots the game data table, the config settings and the save data before the save/load UI edits them. */
void FUN_002ac390(void)
{
    void *gameData;
    void *config;
    void *saveData;

    if (g_saveLoadUIBase.gameDataBackup != NULL) {
        return;
    }
    asdDebugTrace(DAT_00533ec0, 172);
    g_saveLoadUIBase.gameDataBackup = asdMemoryAlloc(0x100, 0x100, 0, 0x80, 1);
    asdDebugTrace(DAT_00533ec0, 173);
    g_saveLoadUIBase.configBackup = asdMemoryAlloc(0x100, 0x100, 0, 8, 1);
    asdDebugTrace(DAT_00533ec0, 174);
    g_saveLoadUIBase.saveDataBackup = asdMemoryAlloc(0x100, 0x100, 0, 0x2a71c, 1);
    gameData = gameDataBlocksGetTable();
    __aeabi_memcpy4(g_saveLoadUIBase.gameDataBackup, gameData, 0x80);
    config = configGetSettings();
    wordPairCopy(g_saveLoadUIBase.configBackup, config);
    saveData = gameDataBlocksGetSaveData();
    __aeabi_memcpy4(g_saveLoadUIBase.saveDataBackup, saveData, 0x2a71c);
}

} /* extern "C" */
