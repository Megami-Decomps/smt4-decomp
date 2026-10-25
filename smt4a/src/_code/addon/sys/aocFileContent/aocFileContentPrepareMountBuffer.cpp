/* NON_MATCHING: canonical native constructors and result return recovered; output aggregate is copied from the stack instead of constructed in return storage. */
#include <stddef.h>
#include "AsdSDK/AsdDebug.h"
#include "shard/W6_W6Match8_AocPoll.h"
#include "nn/Result.h"

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
u32 legacyResourceIdRemap(const WindowStatusResult *);
u32 FUN_0042a410(u32*, u32, u32, u32, u32, u32);
u32 jyoucyuGetTableEntry(u32);
s32 sysLightEventTryWait(AocObjB*);

/* Prepare the content mount's work buffer and publish any translated failure. */
WindowStatusOperationResult aocFileContentPrepareMountBuffer(void* context, u32 content)
{
    AocFileContentWork* work = static_cast<AocFileContentWork*>(context);
    if (work->buffer != NULL) {
        asdMemFree(work->buffer);
        work->buffer = NULL;
    }
    WindowStatusOperationResult output = {0};
    output.result = WindowStatusResult(0);

    WindowStatusResult result(FUN_0042a410(&work->bufferSize, 0x19A2, content, 2, 2, 0));
    if (nnResultIsFailure(legacyResourceIdRemap(&result))) {
        jyoucyuGetTableEntry(0);
        output.status = 100;
        output.result = result;
        if (legacyResourceIdRemap(&result) != 0xC9413891 &&
            sysLightEventTryWait(&g_aocMain->objB) != 0) {
            g_aocMain->flags &= ~0x10000U;
            output.status = 200;
        }
        return output;
    }
    asdDebugTrace(g_aocFileContentSourcePath, 190);
    work->buffer = asdMemoryAlloc(0x100, 0x100, 0, work->bufferSize, 1);
    rt_memclr(work->buffer, work->bufferSize);
    textFormatBuffer(work->mountName, g_aocMountNameFormat, content);
    return output;
}
} // extern "C"
