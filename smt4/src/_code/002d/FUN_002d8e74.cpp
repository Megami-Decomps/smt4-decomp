/* NON_MATCHING: retail retains the filename/header pointers and error constants across helper calls, using more callee-saved registers. */
#include "gamedata/SaveLoadThreadRequest.h"
#include "shard/Sys43e310.h"
#include "AsdSDK/Source/Sys/Save/AsdSaveHeader.h"

extern "C" {
void textFormatBuffer(char *output, const char *format, ...);
s32 FUN_002d5e44(u32 mode, const char *name);
s32 asdSaveReadBlock(u32 file, const char *name, AsdSaveHeader *header, void *payload, u32 size);
s32 FUN_00214950(u32 context, const char *name);

// Read the selected game save and advance the thread after validation succeeds.
void FUN_002d8e74(u32 context)
{
    // The public thread prefix ends before its request pointer and result.
    struct ThreadView {
        u8 unk00;
        s8 busy;
        s8 unk02, unk03;
        SaveLoadThreadRequest *request;
        u32 unk08;
        s32 result;
    };
    ThreadView *thread = (ThreadView *)&g_saveLoadThread;
    char filename[128];
    AsdSaveHeader header;
    thread->busy = 1;
    u32 file = thread->request->file;
    textFormatBuffer(filename, "sdds4game%d.sav", thread->request->slot);
    void *payload = thread->request->payload;
    u32 size = thread->request->payloadSize;
    s32 result = -1;
    if (FUN_002d5e44(0, filename) != 0) {
        if (asdSaveReadBlock(file, filename, &header, payload, size) != 0) {
            return;
        }
        if (FUN_00214950(context, filename) == 1) {
            result = 6;
        }
    }
    thread->result = result;
    thread->busy = 0;
}
}
