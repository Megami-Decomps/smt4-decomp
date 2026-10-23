/* NON_MATCHING: payload subaddresses use fewer saved registers and success/failure state-store blocks merge differently. */
#include "gamedata/SaveLoadProcessState.h"
#include "shard/GameDataBlocks.h"
#include "AsdSDK/AsdDebug.h"

struct SaveFilePayloadIV {
    u32 table[32];
    u32 settings[2];
    u32 save[0x24d28 / 4];
};
typedef char SaveFilePayloadIVSizeCheck[sizeof(SaveFilePayloadIV) == 0x24db0 ? 1 : -1];
extern "C" {
SaveLoadProcessWork24 *jobGetWork();
s32 FUN_001a1d08();
s32 FUN_002cedbc();
void FUN_00247af8(s32 operation, s32 flags, u32 slot, void *buffer, u32 size);
void *asdMemoryAlloc(s32 heap, s32 alignment, s32 flags, u32 size, s32 clear);
void *gameDataBlocksGetTable();
void *configGetSettings();
void FUN_002ad8b4(void *settings, const void *savedSettings);
GameSaveData *gameDataBlocksGetSaveData();
void rt_memcpy_w(void *destination, const void *source, u32 size);
void FUN_0026b4cc();
extern SaveByteSettings g_byteSettings;

u32 FUN_002efa00()
{
    SaveLoadProcessWork24 *work = jobGetWork();
    switch (work->state) {
    case 4:
        work->bufferSize = sizeof(SaveFilePayloadIV);
        asdDebugTrace("c:\\SMT4\\XRD686\\sdds4\\Patch\\gamedata\\SaveLoadProcess.cpp", 224);
        work->buffer = asdMemoryAlloc(0x100, 0x100, 0, work->bufferSize, 1);
        FUN_00247af8(3, 0, work->option, work->buffer, work->bufferSize);
        work->state = 5;
        break;
    case 5:
        if (FUN_001a1d08() == 1) {
            if (FUN_002cedbc() != 0) {
                work->state = 7;
            } else {
                const SaveFilePayloadIV *payload = static_cast<const SaveFilePayloadIV *>(work->buffer);
                rt_memcpy_w(gameDataBlocksGetTable(), payload->table, sizeof(payload->table));
                FUN_002ad8b4(configGetSettings(), payload->settings);
                rt_memcpy_w(gameDataBlocksGetSaveData(), payload->save, sizeof(payload->save));
                gameDataBlocksGetSaveData()->metadata.option = work->option;
                FUN_0026b4cc();
                work->state = 6;
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
