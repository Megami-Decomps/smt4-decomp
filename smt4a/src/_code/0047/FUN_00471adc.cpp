/* NON_MATCHING: the frame (52 bytes) and in-place test now match; retail places `result` and the operation 4 bytes
 * higher, copies each into batch->operation as ldrd plus a three-word ldm and shares one store sequence between both
 * exits, where this build copies five words with ldm/stm and keeps a store and epilogue per exit. */
#include "addon/AocPackageMountBatch.h"
#include "util/BitsAndBytes.h"

extern "C" {
void *asdOperatorNewE(u32 bytes, ...);
RequestParameters aocFileContentDispatchMountRequest(WindowOperationState *state, const WindowOperationRequest *request);
}

inline void *Obj4221d4::operator new[](u32 bytes) throw()
{
    void *owner; /* the original passes this uninitialised too */
    return asdOperatorNewE(bytes, owner);
}

/* Constructs the package states and keeps the first failed mount operation, or success. */
extern "C" void FUN_00471adc(AocPackageMountBatch *batch)
{
    WindowOperationResult result(0);
    batch->packages = new Obj4221d4[batch->count];
    for (s32 index = 0; index < batch->count; ++index) {
        const RequestParameters &operation = aocFileContentDispatchMountRequest(
            (WindowOperationState *)&batch->packages[index],
            (const WindowOperationRequest *)&batch->entries[index]);
        if (byteIsAtLeast100(reinterpret_cast<const u8 *>(&operation))) {
            batch->operation = operation;
            return;
        }
    }
    batch->operation = result;
}
