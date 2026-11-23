#include "gamedata/SaveLoadProcessState.h"
#include "shard/GameDataBlocks.h"
#include "AsdSDK/AsdDebug.h"
#include "gamedata/SaveLoadProcess.h"
#include "shard/JobWork.h"
#include "AsdSDK/AsdMemAlloc.h"
#include "mobiclip_ctrl/MobiclipCtrl.h"

struct SaveWriteBodyPrefix {
    u16 version;
    u8 mode;
    u8 slot;
};
typedef char SaveWriterPayloadLayoutCheck[
    offsetof(SaveWriteBodyPrefix, mode) == 2 && sizeof(SaveWriteBodyPrefix) == 4 ? 1 : -1];

extern "C" {
s32 FUN_001a1d08(void);
void asdMemFree(void *memory);
void titleConfigStoreOptions(void);
GameSaveData *gameDataBlocksGetSaveData(void);
const void *gameDataBlocksGetTable(void);
void __aeabi_memcpy(void *destination, const void *source, u32 size);
void __aeabi_memcpy4(void *destination, const void *source, u32 size);
void clockRecordStartSeconds(void);
void saveLoadThreadRequestInit(s32 operation, s32 flags, u32 slot, void *buffer, u32 size);
extern SaveByteSettings g_byteSettings;

// Build a complete save image, submit it, and publish the asynchronous write result.
s32 saveLoadProcessSaveUpdate(u32 process)
{
    SaveLoadProcessWork24 *work = reinterpret_cast<SaveLoadProcessWork24 *>(jobGetWork(process));
    switch (work->state) {
    case 0: {
        work->bufferSize = sizeof(SaveFilePayloadIV);
        asdDebugTrace("c:\\SMT4\\XRD686\\sdds4\\Patch\\gamedata\\SaveLoadProcess.cpp", 124);
        work->buffer = asdMemAlloc(0x100, 0x100, 0, work->bufferSize, 1);
        titleConfigStoreOptions();
        gameDataBlocksGetSaveData()->metadata.option = work->option;
        __aeabi_memcpy(work->buffer, gameDataBlocksGetTable(), 0x80);
        ((SaveFilePayloadIV *)work->buffer)->settings = *reinterpret_cast<const ConfigSettingsImage *>(configGetSettings());
        SaveWriteBodyPrefix *body = (SaveWriteBodyPrefix *)((SaveFilePayloadIV *)work->buffer)->save;
        __aeabi_memcpy4(body, gameDataBlocksGetSaveData(), 0x24D28);
        body->version = 3;
        body->mode = *(const u8 *)&work->unk14;
        clockRecordStartSeconds();
        saveLoadThreadRequestInit(2, 0, work->option, work->buffer, work->bufferSize);
        work->state = 1;
        break;
    }
    case 1:
        if (FUN_001a1d08() == 1) {
            if (byte1IsZero()) {
                asdMemFree(work->buffer);
                work->state = 3;
                work->buffer = 0;
            } else {
                asdMemFree(work->buffer);
                work->state = 2;
                work->buffer = 0;
            }
        }
        break;
    case 2:
        g_byteSettings.first = 1;
        g_byteSettings.fourth = 1;
        return 0xFFFFFFFF;
    case 3:
        g_byteSettings.first = 1;
        g_byteSettings.fourth = 0;
        return 0xFFFFFFFF;
    default:
        break;
    }
    return 0;
}
}
