#include "addon/aocMain.h"
#include "classes/Obj4221fc.h"
#include "gamedata/TableEntryRef.h"
#include "classes/WindowStatus.h"
#include "nn/Result.h"

extern "C" {
void asdGxWaitForPreviousFrame();
void table30GetEntryB(ItemPropertyResource **out, void *table, u32 index);
ItemCodeInfo FUN_005000c4(ItemPropertyResource **resource);
s32 legacyResourceIdRemap(const WindowStatusResult *result);
}

/* Looks up the selected entry's item code and runs its content request on the AOC service: status 0 on success,
 * 103 for result 0xc9213801, otherwise 100. */
WindowStatusOperationResult Obj4221fc::vfunc0c(const void *)
{
    WindowStatusOperationResult output(1);
    AocMain *manager = g_aocMain;
    asdGxWaitForPreviousFrame();
    TableEntryRef ref;
    table30GetEntryB(&ref.entry, manager->contentRequest, state);
    output.result = aocServiceRunItemRequest(manager->service, manager->contentArchive, FUN_005000c4(&ref.entry));
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
