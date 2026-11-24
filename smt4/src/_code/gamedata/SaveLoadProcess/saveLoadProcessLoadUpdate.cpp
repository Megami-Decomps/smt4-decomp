#include "gamedata/SaveLoadProcessState.h"
#include "shard/JobWork.h"
#include "shard/GameDataBlocks.h"
#include "AsdSDK/AsdDebug.h"
#include "gamedata/SaveLoadProcess.h"
#include "mobiclip_ctrl/MobiclipCtrl.h"

extern "C" {
s32 saveLoadRequestUpdate();
void saveLoadThreadRequestInit(s32 operation, s32 flags, u32 slot, void *buffer, u32 size);
void *asdMemoryAlloc(s32 heap, s32 alignment, s32 flags, u32 size, s32 clear);
void *gameDataBlocksGetTable();
GameSaveData *gameDataBlocksGetSaveData();
void __aeabi_memcpy4(void *destination, const void *source, u32 size);
void clockRecordStartSeconds();
extern SaveByteSettings g_byteSettings;

/* Loads the selected save asynchronously, then installs its data and settings. */
s32 saveLoadProcessLoadUpdate(u32 job)
{
    SaveLoadProcessWork24 *work = (SaveLoadProcessWork24 *)jobGetWork(job);
    switch (work->state) {
    case 4:
        work->bufferSize = sizeof(SaveFilePayloadIV);
        asdDebugTrace("c:\\SMT4\\XRD686\\sdds4\\Patch\\gamedata\\SaveLoadProcess.cpp", 224);
        work->buffer = asdMemoryAlloc(0x100, 0x100, 0, work->bufferSize, 1);
        saveLoadThreadRequestInit(3, 0, work->option, work->buffer, work->bufferSize);
        work->state = 5;
        break;
    case 5:
        if (saveLoadRequestUpdate() == 1) {
            if (byte1IsZero() == 0) {
                const SaveFilePayloadIV *payload = (const SaveFilePayloadIV *)work->buffer;
                const u32 *table = payload->table;
                const ConfigSettingsImage *settings = &payload->settings;
                const u32 *save = payload->save;
                __aeabi_memcpy4(gameDataBlocksGetTable(), table, sizeof(payload->table));
                *(ConfigSettingsImage *)configGetSettings() = *settings;
                __aeabi_memcpy4(gameDataBlocksGetSaveData(), save, sizeof(payload->save));
                saveLoadWriteMetadataOption(gameDataBlocksGetSaveData(), work->option);
                clockRecordStartSeconds();
                work->state = 6;
            } else {
                work->state = 7;
            }
        }
        break;
    case 6:
        g_byteSettings.third = 1;
        g_byteSettings.selected = 1;
        return -1;
    case 7:
        g_byteSettings.third = 0;
        g_byteSettings.selected = 1;
        return -1;
    default:
        break;
    }
    return 0;
}
} /* extern "C" */
