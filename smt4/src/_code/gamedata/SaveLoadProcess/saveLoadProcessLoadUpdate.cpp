/* NON_MATCHING: the option store loads work->option straight into r1; retail moves the save-data pointer to r1 and loads the option into r0 (one instruction). */
#include "gamedata/SaveLoadProcessState.h"
#include "shard/JobWork.h"
#include "shard/GameDataBlocks.h"
#include "AsdSDK/AsdDebug.h"
#include "gamedata/SaveLoadProcess.h"
#include "mobiclip_ctrl/MobiclipCtrl.h"

extern "C" {
s32 FUN_001a1d08();
void saveLoadThreadRequestInit(s32 operation, s32 flags, u32 slot, void *buffer, u32 size);
void *asdMemoryAlloc(s32 heap, s32 alignment, s32 flags, u32 size, s32 clear);
void *gameDataBlocksGetTable();
GameSaveData *gameDataBlocksGetSaveData();
void __aeabi_memcpy4(void *destination, const void *source, u32 size);
void clockRecordStartSeconds();
extern SaveByteSettings g_byteSettings;

s32 saveLoadProcessLoadUpdate(u32 job)
{
    SaveLoadProcessWork24 *work = reinterpret_cast<SaveLoadProcessWork24 *>(jobGetWork(job));
    switch (work->state) {
    case 4:
        work->bufferSize = sizeof(SaveFilePayloadIV);
        asdDebugTrace("c:\\SMT4\\XRD686\\sdds4\\Patch\\gamedata\\SaveLoadProcess.cpp", 224);
        work->buffer = asdMemoryAlloc(0x100, 0x100, 0, work->bufferSize, 1);
        saveLoadThreadRequestInit(3, 0, work->option, work->buffer, work->bufferSize);
        work->state = 5;
        break;
    case 5:
        if (FUN_001a1d08() == 1) {
            if (byte1IsZero() == 0) {
                const SaveFilePayloadIV *payload = static_cast<const SaveFilePayloadIV *>(work->buffer);
                const u32 *table = payload->table;
                const ConfigSettingsImage *settings = &payload->settings;
                const u32 *save = payload->save;
                __aeabi_memcpy4(gameDataBlocksGetTable(), table, sizeof(payload->table));
                *reinterpret_cast<ConfigSettingsImage *>(configGetSettings()) = *settings;
                __aeabi_memcpy4(gameDataBlocksGetSaveData(), save, sizeof(payload->save));
                gameDataBlocksGetSaveData()->metadata.option = work->option;
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
        return 0xffffffff;
    case 7:
        g_byteSettings.third = 0;
        g_byteSettings.selected = 1;
        return 0xffffffff;
    default:
        break;
    }
    return 0;
}
}
