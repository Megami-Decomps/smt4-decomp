/* NON_MATCHING: native hidden-result return is recovered; retail keeps the table entry below the request copy in the frame (92 vs 84 bytes). */
#include "addon/aocMain.h"
#include "classes/Obj422260.h"
#include "gamedata/TableEntryRef.h"
#include "nn/Result.h"

extern "C" {
void FUN_00161a10();
void table30GetEntry(ItemPropertyResource **out, AocAuxBufferRequest *table, u32 index);
ItemCodeInfo FUN_0050081c(ItemPropertyResource **resource);
WindowStatusResult FUN_004289cc(void *owner, void *request, const void *metadata, const u32 *contentCode);
s32 legacyResourceIdRemap(const WindowStatusResult *result);
}

WindowStatusOperationResult Obj422260::vfunc0c(const void *)
{
    WindowStatusOperationResult output(1);
    AocMain *manager = g_aocMain;
    FUN_00161a10();
    TableEntryRef ref;
    table30GetEntry(&ref.entry, manager->itemRequest, state);
    ItemCodeInfo request = FUN_0050081c(&ref.entry);
    output.result = FUN_004289cc(manager->service, manager->contentArchive, &request, manager->contentCode);
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
