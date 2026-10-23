/* NON_MATCHING: settings-copy destination uses r2 followed by an extra mov r0,r2. */
#include "gamedata/SaveLoadProcessState.h"
#include "shard/GameDataBlocks.h"
#include "AsdSDK/AsdDebug.h"

struct SaveFilePayloadIV {
    u32 table[32];
    u32 settings[2];
    u32 save[0x24d28 / 4];
};
struct SaveWriteBodyPrefix {
    u16 version;
    u8 mode;
    u8 slot;
};
typedef char SaveWriterPayloadLayoutCheck[
    sizeof(SaveFilePayloadIV) == 0x24DB0 && offsetof(SaveFilePayloadIV, save) == 0x88 &&
    offsetof(SaveWriteBodyPrefix, mode) == 2 && sizeof(SaveWriteBodyPrefix) == 4 ? 1 : -1];

extern "C" {
SaveLoadProcessWork24 *jobGetWork(void);
s32 FUN_001a1d08(void);
s32 FUN_002cedbc(void);
void asdMemFree(void *memory);
void *asdMemAlloc(u32 heap, u32 alignment, u32 flags, u32 size, u32 clear);
void titleConfigStoreOptions(void);
GameSaveData *gameDataBlocksGetSaveData(void);
const void *gameDataBlocksGetTable(void);
const void *configGetSettings(void);
void rt_memcpy(void *destination, const void *source, u32 size);
void rt_memcpy_w(void *destination, const void *source, u32 size);
void FUN_002ad8b4(void *destination, const void *settings);
void FUN_0026b4cc(void);
void FUN_00247af8(s32 operation, s32 flags, u32 slot, void *buffer, u32 size);
extern SaveByteSettings g_byteSettings;

// Build a complete save image, submit it, and publish the asynchronous write result.
u32 FUN_002efba0(void)
{
    SaveLoadProcessWork24 *work = jobGetWork();
    switch (work->state) {
    case 0: {
        work->bufferSize = sizeof(SaveFilePayloadIV);
        asdDebugTrace("c:\\SMT4\\XRD686\\sdds4\\Patch\\gamedata\\SaveLoadProcess.cpp", 124);
        work->buffer = asdMemAlloc(0x100, 0x100, 0, work->bufferSize, 1);
        titleConfigStoreOptions();
        gameDataBlocksGetSaveData()->metadata.option = work->option;
        rt_memcpy(work->buffer, gameDataBlocksGetTable(), 0x80);
        const void *settings = configGetSettings();
        FUN_002ad8b4(((SaveFilePayloadIV *)work->buffer)->settings, settings);
        SaveWriteBodyPrefix *body = (SaveWriteBodyPrefix *)((SaveFilePayloadIV *)work->buffer)->save;
        rt_memcpy_w(body, gameDataBlocksGetSaveData(), 0x24D28);
        body->version = 3;
        body->mode = *(const u8 *)&work->unk14;
        FUN_0026b4cc();
        FUN_00247af8(2, 0, work->option, work->buffer, work->bufferSize);
        work->state = 1;
        break;
    }
    case 1:
        if (FUN_001a1d08() == 1) {
            if (FUN_002cedbc()) {
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
