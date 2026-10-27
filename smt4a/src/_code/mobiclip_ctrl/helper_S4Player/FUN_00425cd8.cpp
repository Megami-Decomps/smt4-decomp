/* NON_MATCHING: stop/signal scheduling and native-thread pointer/zero-register lifetimes differ; teardown offsets and stack deletion match. */
#include "common.h"
#include "nn/os/AddressSpaceManager.h"
#include "nn/Result.h"
#include "nn/os/Thread.h"
#include <stddef.h>
#include "sys/ResultReport.h"

/* The file backend the player streams from: slot 1 closes a stream. */
class MovieFileBackend {
public:
    virtual void unk00() = 0;
    virtual void closeStream(void *stream) = 0;
};

/* The player's heap: slot 1 frees a decoder block, slot 3 an output block. */
class MovieHeap {
public:
    virtual void unk00() = 0;
    virtual void freeDecoder(void *owner, void *block) = 0;
    virtual void unk08() = 0;
    virtual void freeOutput(void *owner, void *block) = 0;
};

/* The memory mapped for the player thread's stack: its destructor unmaps it, and the block goes
 * back through the engine's operator delete. */
struct StackRegion : AddressSpaceRegion {
    ~StackRegion();
    static void operator delete(void *block);
};

/* A stream the player has open (24 bytes). */
struct MovieStream {
    void *handle;  // 0x00
    u8 unk04[0x14];
};

/* The movie player (the part its teardown touches). */
struct MoviePlayer {
    /* 0x000 */ u8 unk000[8];
    /* 0x008 */ u32 position;
    /* 0x00c */ u8 unk00c[4];
    /* 0x010 */ u8 stopping;
    /* 0x011 */ u8 unk011[3];
    /* 0x014 */ MovieFileBackend *fileBackend;
    /* 0x018 */ void *reader;
    /* 0x01c */ u8 unk01c[4];
    /* 0x020 */ u8 wakeEvent[8];
    /* 0x028 */ NnOsThread thread;
    /* 0x030 */ u8 unk030[0x128];
    /* 0x158 */ u8 deblocker[0x60];
    /* 0x1b8 */ MovieHeap *heap;
    /* 0x1bc */ u32 unk1bc;
    /* 0x1c0 */ u32 unk1c0;
    /* 0x1c4 */ s32 streamCount;
    /* 0x1c8 */ u8 unk1c8[0x10];
    /* 0x1d8 */ MovieStream streams[1];
};
typedef char MoviePlayerTeardownOffsetsCheck[
    offsetof(MoviePlayer, thread) == 0x28 &&
    offsetof(MoviePlayer, deblocker) == 0x158 &&
    offsetof(MoviePlayer, heap) == 0x1B8 &&
    offsetof(MoviePlayer, streamCount) == 0x1C4 &&
    offsetof(MoviePlayer, streams) == 0x1D8 ? 1 : -1];

/* The decoder-block, output-block and stream tables sit in the player's tail; shown as views. */
struct MoviePlayerTables {
    /* 0x000 */ u8 unk000[0x2e8];
    /* 0x2e8 */ s32 decoderCount;
    /* 0x2ec */ void *decoderBlocks[1];
};
struct MoviePlayerOutputs {
    /* 0x000 */ u8 unk000[0x484];
    /* 0x484 */ s32 outputCount;
    /* 0x488 */ void *outputBlocks[1];
};

/* What the player thread runs on: the heap block of its stack and the mapping of that block. */
struct MovieThreadStack {
    void *memory;         // 0x0
    StackRegion *region;  // 0x4
};

extern "C" {
extern MovieThreadStack DAT_00588100;

void nn_os_LightEvent_Signal(void *event);
s32 svcWaitSynchronization1(u32 handle, s64 timeout);
void FUN_001469a8(AddressSpaceRegion *region);
void asdOperatorDelete(void *block);
void asdMemFree(void *block);
void FUN_00424b54(MoviePlayer *player);
void deblockerHandleRelease(void *deblocker);
}

inline StackRegion::~StackRegion()
{
    FUN_001469a8(this);
}

inline void StackRegion::operator delete(void *block)
{
    asdOperatorDelete(block);
}

/* Stops the player thread, frees its stack and every block and stream the player holds. */
extern "C" void FUN_00425cd8(MoviePlayer *player)
{
    if (player->fileBackend != NULL) {
        player->stopping = 1;
        nn_os_LightEvent_Signal(player->wakeEvent);
        s32 result = svcWaitSynchronization1(player->thread.handle, -1);
        bool failed = nnResultIsFailure(result);
        if (failed) {
            FUN_002e3140(result, failed);
        }
        player->thread.joined = 1;
        player->thread.~NnOsThread();
        FUN_001469a8(DAT_00588100.region);
        delete DAT_00588100.region;
        DAT_00588100.region = NULL;
        asdMemFree(DAT_00588100.memory);
        DAT_00588100.memory = NULL;
        player->position = -1;
        FUN_00424b54(player);
        MoviePlayerTables *tables = (MoviePlayerTables *)player;
        for (s32 i = 0; i < tables->decoderCount; ++i) {
            player->heap->freeDecoder(player->fileBackend, tables->decoderBlocks[i]);
            tables->decoderBlocks[i] = NULL;
        }
        MoviePlayerOutputs *outputs = (MoviePlayerOutputs *)player;
        for (s32 i = 0; i < outputs->outputCount; ++i) {
            player->heap->freeOutput(player->fileBackend, outputs->outputBlocks[i]);
            outputs->outputBlocks[i] = NULL;
        }
        for (s32 i = 0; i < player->streamCount; ++i) {
            if (player->streams[i].handle != NULL) {
                player->fileBackend->closeStream(player->streams[i].handle);
                player->streams[i].handle = NULL;
            }
        }
        deblockerHandleRelease(player->deblocker);
        player->fileBackend = NULL;
        player->reader = NULL;
        player->heap = NULL;
        player->unk1bc = 0;
        player->unk1c0 = 0;
    }
}
