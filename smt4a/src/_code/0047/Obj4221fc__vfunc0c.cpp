/* NON_MATCHING: native hidden-result return is recovered; retail keeps the table entry below the request copy in the frame (92 vs 84 bytes). */
#include "addon/aocMain.h"
#include "classes/Obj4221fc.h"
#include "gamedata/TableEntryRef.h"
#include "nn/Result.h"

extern "C" {
void asdGxWaitForPreviousFrame();
void table30GetEntryB(ItemPropertyResource **out, void *table, u32 index);
ItemCodeInfo FUN_005000c4(ItemPropertyResource **resource);
WindowStatusResult FUN_00429178(void *owner, void *request, void *parameters);
s32 legacyResourceIdRemap(const WindowStatusResult *result);
}

WindowStatusOperationResult Obj4221fc::vfunc0c(const void *)
{
    WindowStatusOperationResult output(1);
    AocMain *manager = g_aocMain;
    asdGxWaitForPreviousFrame();
    TableEntryRef ref;
    table30GetEntryB(&ref.entry, manager->contentRequest, state);
    ItemCodeInfo request = FUN_005000c4(&ref.entry);
    output.result = FUN_00429178(manager->service, manager->contentArchive, &request);
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
