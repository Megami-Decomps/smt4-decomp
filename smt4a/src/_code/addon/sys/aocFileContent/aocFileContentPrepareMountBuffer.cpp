/* NON_MATCHING: success-result copies use scalar loads/stores, the failure test folds to CMP/BGE, and state/global scheduling differs; O2 may change lowering. */
#include <stddef.h>
#include "AsdSDK/AsdDebug.h"
#include "shard/W6_W6Match8_AocPoll.h"

namespace {
struct AocFileContentWork {
    u8 unk00[0x20];
    void* buffer;
    char mountName[0x10];
    u32 bufferSize;
};
}

extern "C" {
extern AocMain* g_aocMain;
extern const char g_aocFileContentSourcePath[];
extern const char g_aocMountNameFormat[];
void asdMemFree(void*);
void* asdMemoryAlloc(u32, u32, u32, u32, u32);
void rt_memclr(void*, u32);
s32 textFormatBuffer(char*, const char*, ...);
AocPollStorage* FUN_001b5acc(AocPollStorage*);
AocPollResult* resultPairInitialize(AocPollResult*, s32);
u32 legacyResourceIdRemap(const AocPollResult*);
u32 FUN_0042a410(u32*, u32, u32, u32, u32, u32);
u32 jyoucyuGetTableEntry(u32);
s32 sysLightEventTryWait(AocObjB*);

/* Prepare the content mount's work buffer and publish any translated failure. */
void aocFileContentPrepareMountBuffer(AocPollOutput* output, void* context, u32 content)
{
    AocFileContentWork* work = static_cast<AocFileContentWork*>(context);
    if (work->buffer != NULL) {
        asdMemFree(work->buffer);
        work->buffer = NULL;
    }
    output->status = 0;
    AocPollStorage* storage = FUN_001b5acc(&output->storage);
    storage->unk08 = 0;
    storage->unk0c = 0;
    // Subsequent status updates belong to the storage returned by the initializer.
    output = reinterpret_cast<AocPollOutput*>(
        reinterpret_cast<u8*>(storage) - offsetof(AocPollOutput, storage));
    AocPollResult result;
    output->storage.result = *resultPairInitialize(&result, 0);

    const u32 rawResult = FUN_0042a410(&work->bufferSize, 0x19A2, content, 2, 2, 0);
    resultPairInitialize(&result, static_cast<s32>(rawResult));
    if (legacyResourceIdRemap(&result) >> 31) {
        jyoucyuGetTableEntry(0);
        output->status = 100;
        output->storage.result = result;
        if (legacyResourceIdRemap(&result) != 0xC9413891 &&
            sysLightEventTryWait(&g_aocMain->objB) != 0) {
            g_aocMain->flags &= ~0x10000U;
            output->status = 200;
        }
        return;
    }
    asdDebugTrace(g_aocFileContentSourcePath, 190);
    work->buffer = asdMemoryAlloc(0x100, 0x100, 0, work->bufferSize, 1);
    rt_memclr(work->buffer, work->bufferSize);
    textFormatBuffer(work->mountName, g_aocMountNameFormat, content);
}
} // extern "C"
