/* NON_MATCHING: result-value copy ABI and array allocator's extra argument differ. */
#include "addon/AocPackageMountBatch.h"

extern "C" {
void *asdOperatorNewB(u32 bytes);
WindowOperationResult FUN_0038b6d8(WindowOperationState *state, const WindowOperationRequest *request);
s32 byteIsAtLeast100(const WindowOperationResult *result);
}

inline void *Obj4221d4::operator new[](u32 bytes) throw()
{
    return asdOperatorNewB(bytes);
}

// Construct package states and retain the first failed mount operation, or success.
extern "C" void FUN_0038a048(AocPackageMountBatch *batch)
{
    WindowOperationResult result(0);
    batch->packages = new Obj4221d4[batch->count];
    for (s32 index = 0; index < batch->count; ++index) {
        WindowOperationResult operation = FUN_0038b6d8(
            (WindowOperationState *)&batch->packages[index],
            (const WindowOperationRequest *)&batch->entries[index]);
        if (byteIsAtLeast100(&operation)) {
            result = operation;
            break;
        }
    }
    batch->operation = result;
}
