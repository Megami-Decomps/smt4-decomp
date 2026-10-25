/* NON_MATCHING: save staging buffers occupy opposite stack slots and saved registers differ. */
#include "gamedata/SaveLoadThreadRequest.h"
#include "AsdSDK/Source/Sys/Save/AsdSaveHeader.h"

struct SaveWriteWorker {
    u8 unk00;
    u8 busy;
    u8 unk02[2];
    SaveLoadThreadRequest *request;
    u32 unk08;
    s32 result;
};
extern "C" {
extern SaveWriteWorker g_saveLoadThread;
void textFormatBuffer(char *, const char *, ...);
void FUN_001db90c(AsdSaveHeader *, u32, u32, u32, u32, u32, u32);
s32 asdSaveWriteBlock(u32, const char *, const AsdSaveHeader *, const void *, u32);
s32 FUN_00214950(u32, const char *);
u32 FUN_002cbe70(s32 mode);
}

/* Write a queued save block and update the first-file completion result. */
extern "C" void FUN_002d8f3c(u32 context)
{
    u32 file = g_saveLoadThread.request->file;
    char filename[128];
    AsdSaveHeader header;
    g_saveLoadThread.busy = 1;
    textFormatBuffer(filename, "sdds4game%d.sav", g_saveLoadThread.request->slot);
    FUN_001db90c(&header, 0x34534444, 0x454D4147, 0,
                 g_saveLoadThread.request->payloadSize, 0, 0);
    if (asdSaveWriteBlock(file, filename, &header, g_saveLoadThread.request->payload,
                          g_saveLoadThread.request->payloadSize) == 0) {
        if (file == 0) {
            g_saveLoadThread.result = FUN_00214950(context, filename) == 1 ? 6 : -1;
        }
        g_saveLoadThread.busy = 0;
    }
    FUN_002cbe70(file);
}
