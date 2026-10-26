/* NON_MATCHING: result-value copy ABI and array allocator's extra argument differ. */
#include "addon/AocPackageMountBatch.h"
#include "util/ByteIsAtLeast100.h"

extern "C" {
void *asdOperatorNewE(u32 bytes);
WindowOperationResult FUN_0047402c(WindowOperationState *state, const WindowOperationRequest *request);
}

inline void *Obj4221d4::operator new[](u32 bytes) throw()
{
    return asdOperatorNewE(bytes);
}

// Construct package states and retain the first failed mount operation, or success.
extern "C" void FUN_00471adc(AocPackageMountBatch *batch)
{
    WindowOperationResult result(0);
    batch->packages = new Obj4221d4[batch->count];
    for (s32 index = 0; index < batch->count; ++index) {
        WindowOperationResult operation = FUN_0047402c(
            (WindowOperationState *)&batch->packages[index],
            (const WindowOperationRequest *)&batch->entries[index]);
        if (byteIsAtLeast100(reinterpret_cast<const u8 *>(&operation))) {
            result = operation;
            break;
        }
    }
    batch->operation = result;
}
