/* NON_MATCHING: the frame (52 bytes) and in-place test now match; retail places `result` and the operation 4 bytes
 * higher, copies each into batch->operation as ldrd plus a three-word ldm and shares one store sequence between both
 * exits, where this build copies five words with ldm/stm and keeps a store and epilogue per exit. */
#include "addon/AocPackageMountBatch.h"
#include "AsdSDK/Source/Sys/Mem/AsdOperatorNewB.h"
#include "util/BitsAndBytes.h"

extern "C" {
WindowOperationResult FUN_0038b6d8(WindowOperationState *state, const WindowOperationRequest *request);
}

inline void *Obj4221d4::operator new[](u32 bytes) throw()
{
    void *owner; // The array allocation forwards retail's unset owner word.
    return asdOperatorNewB(bytes, owner);
}

/* Constructs the package states and keeps the first failed mount operation, or success. */
extern "C" void FUN_0038a048(AocPackageMountBatch *batch)
{
    WindowOperationResult result(0);
    batch->packages = new Obj4221d4[batch->count];
    for (s32 index = 0; index < batch->count; ++index) {
        const WindowOperationResult &operation = FUN_0038b6d8(
            (WindowOperationState *)&batch->packages[index],
            (const WindowOperationRequest *)&batch->entries[index]);
        if (byteIsAtLeast100(reinterpret_cast<const u8 *>(&operation))) {
            batch->operation = operation;
            return;
        }
    }
    batch->operation = result;
}
