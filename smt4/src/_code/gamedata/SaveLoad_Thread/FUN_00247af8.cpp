/* NON_MATCHING: retail retains request arguments in GPRs; the build spills the payload size through a VFP register. */
#include "gamedata/SaveLoadThreadRequest.h"
#include "shard/Sys43e310.h"
#include "AsdSDK/AsdDebug.h"
#include "AsdSDK/Source/Sys/File/AsdLoadFile.h"

extern "C" {
extern const char DAT_00404290[];
extern const char DAT_004042ac[];
void *asdMemoryAlloc(u32 heap, u32 alignment, u32 flags, u32 bytes, u32 clear);

// Initialize a save/load request and start loading its interface resources.
void FUN_00247af8(u8 kind, u32 file, u32 slot, void *payload, u32 size)
{
    // The public thread prefix ends before its request pointer and result.
    struct ThreadView {
        u8 unk00;
        s8 busy;
        s8 firstState, secondState;
        SaveLoadThreadRequest *request;
        u32 unk08;
        s32 result;
    };
    asdDebugTrace("c:\\SMT4\\XRD686\\sdds4\\Patch\\gamedata\\SaveLoad_Thread.cpp", 254);
    SaveLoadThreadRequest *request = (SaveLoadThreadRequest *)asdMemoryAlloc(0x100, 0x100, 0, sizeof(SaveLoadThreadRequest), 1);
    ThreadView *thread = (ThreadView *)&g_saveLoadThread;
    thread->request = request;
    request->kind = kind;
    request->firstResult = -1;
    request->payloadSize = size;
    request->payload = payload;
    request->secondResult = -1;
    request->file = file;
    request->slot = slot;
    request->unk0c = 0;
    request->unk58 = 0;
    request->messageFile = NULL;
    request->modelFile = NULL;
    asdLoadFileAsyncSimple(DAT_00404290, reinterpret_cast<u32 *>(&request->messageFile), 0);
    if (request->modelFile == NULL) {
        asdLoadFileAsyncSimple(DAT_004042ac, reinterpret_cast<u32 *>(&request->modelFile), 0);
    }
    thread->result = -1;
    thread->firstState = 0;
    thread->secondState = 0;
}
}
