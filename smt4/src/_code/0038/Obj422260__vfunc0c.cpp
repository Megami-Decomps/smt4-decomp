/* NON_MATCHING: native hidden-result return is recovered; retail keeps the table entry below the request copy in the frame (92 vs 84 bytes). */
#include "addon/aocMain.h"
#include "classes/Obj422260.h"
#include "gamedata/TableEntryRef.h"
#include "nn/Result.h"

extern "C" {
void asdGxWaitForPreviousFrame();
void ownerTableEntryGet(ItemPropertyResource **out, AocAuxBufferRequest *table, u32 index);
ItemCodeInfo FUN_003df8e4(ItemPropertyResource **resource);
WindowStatusResult FUN_00353a74(void *owner, void *request, const void *metadata, const u32 *contentCode);
s32 legacyResourceIdRemap(const WindowStatusResult *result);
}

WindowStatusOperationResult Obj422260::vfunc0c(const void *)
{
    WindowStatusOperationResult output(1);
    AocMain *manager = g_aocMain;
    asdGxWaitForPreviousFrame();
    TableEntryRef ref;
    ownerTableEntryGet(&ref.entry, manager->itemRequest, state);
    ItemCodeInfo request = FUN_003df8e4(&ref.entry);
    output.result = FUN_00353a74(manager->service, manager->contentArchive, &request, manager->contentCode);
    if (!nnResultIsFailure(legacyResourceIdRemap(&output.result))) {
        output.status = 0;
    } else if (legacyResourceIdRemap(&output.result) == (s32)0xc9213801) {
        output.status = 0x67;
    } else {
        legacyResourceIdRemap(&output.result);
        output.status = 100;
    }
    return output;
}
