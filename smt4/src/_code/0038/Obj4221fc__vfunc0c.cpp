/* NON_MATCHING: native hidden-result return is recovered; retail keeps the table entry below the request copy in the frame (92 vs 84 bytes). */
#include "addon/aocMain.h"
#include "classes/Obj4221fc.h"
#include "gamedata/TableEntryRef.h"
#include "nn/Result.h"
#include "code/Code0023.h"
#include "gamedata/GameDataAccess_Shard0050.h"

extern "C" {
void FUN_00123934();
ItemCodeInfo FUN_003df244(ItemPropertyResource **resource);
WindowStatusResult FUN_003540d8(void *owner, void *request, void *parameters);
s32 legacyResourceIdRemap(const WindowStatusResult *result);
}

WindowStatusOperationResult Obj4221fc::vfunc0c(const void *)
{
    WindowStatusOperationResult output(1);
    AocMain *manager = g_aocMain;
    FUN_00123934();
    TableEntryRef ref;
    table30GetEntryB(reinterpret_cast<u8 **>(&ref.entry), reinterpret_cast<Table30 *>(manager->contentRequest), state);
    ItemCodeInfo request = FUN_003df244(&ref.entry);
    output.result = FUN_003540d8(manager->service, manager->contentArchive, &request);
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
