#include "addon/aocMain.h"
#include "classes/Obj422260.h"
#include "gamedata/TableEntryRef.h"
#include "classes/WindowStatus.h"
#include "nn/Result.h"

extern "C" {
void asdGxWaitForPreviousFrame();
void ownerTableEntryGet(ItemPropertyResource **out, AocAuxBufferRequest *table, u32 index);
ItemCodeInfo FUN_003df8e4(ItemPropertyResource **resource);
s32 legacyResourceIdRemap(const WindowStatusResult *result);
}

/* Looks up the selected entry's item code and runs its content request on the AOC service: status 0 on success,
 * 103 for result 0xc9213801, otherwise 100. */
WindowStatusOperationResult Obj422260::vfunc0c(const void *)
{
    WindowStatusOperationResult output(1);
    AocMain *manager = g_aocMain;
    asdGxWaitForPreviousFrame();
    TableEntryRef ref;
    ownerTableEntryGet(&ref.entry, manager->itemRequest, state);
    output.result = aocServiceRunItemCodeRequest(manager->service, manager->contentArchive, FUN_003df8e4(&ref.entry),
                                 manager->contentCode.text);
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
