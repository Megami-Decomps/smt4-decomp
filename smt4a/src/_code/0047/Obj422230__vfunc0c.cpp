#include "classes/Obj422230.h"
#include "shard/W6_W6Match3_HalfwordBuffer.h"
#include "AsdSDK/AsdDebugHooks.h"
#include "nn/Result.h"

struct Obj422230Manager {
    u8 unk00[0x18];
    u8 service18[0x64];
    u8 service7c[0x52c];
    u32 resourceId;
};

/* A content table entry; the debug build tracks its release. */
struct ContentEntryRef {
    HalfwordBufferHandle handle;
    ~ContentEntryRef() { asdDebugHookPtr(this); }
};

extern "C" {
extern Obj422230Manager *g_aocMain;
void FUN_00161a10();
void table30GetEntryB(HalfwordBufferHandle *out, u32 table, u32 index);
u32 FUN_004ffd4c(HalfwordBufferHandle *handle);
u32 halfwordBufferCopyRange(HalfwordBufferHandle *handle, u16 *destination, u32 requested, u32 offset);
WindowStatusResult FUN_00428940(void *file, void *archive, const u16 *path, u32 count);
s32 legacyResourceIdRemap(const WindowStatusResult *result);
}

WindowStatusOperationResult Obj422230::vfunc0c(const void *)
{
    WindowStatusOperationResult output(1);
    Obj422230Manager *manager = g_aocMain;
    if (reserved != 0) {
        if (reserved == 1) {
            bool succeeded = !nnResultIsFailureBool(legacyResourceIdRemap(&result));
            if (succeeded) {
                output.status = 0;
            } else {
                output.result = result;
                if (legacyResourceIdRemap(&result) == (s32)0xc9213801) {
                    output.status = 0x67;
                } else {
                    output.status = 100;
                    legacyResourceIdRemap(&result);
                }
            }
        }
    } else {
        ContentEntryRef ref;
        table30GetEntryB(&ref.handle, manager->resourceId, state);
        u32 count = FUN_004ffd4c(&ref.handle);
        u16 path[64];
        halfwordBufferCopyRange(&ref.handle, path, count, 0);
        FUN_00161a10();
        WindowStatusResult opened = FUN_00428940(manager->service7c, manager->service18, path, count);
        reserved = 1;
        result = opened;
    }
    return output;
}
