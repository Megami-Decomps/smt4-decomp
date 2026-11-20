#include "addon/aocMain.h"
#include "classes/Obj4221fc.h"
#include "gamedata/TableEntryRef.h"
#include "classes/WindowStatus.h"
#include "nn/Result.h"
#include "code/Code0023.h"
#include "gamedata/GameDataAccess_Shard0050.h"

extern "C" {
void asdGxWaitForPreviousFrame();
ItemCodeInfo FUN_003df244(ItemPropertyResource **resource);
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
    table30GetEntryB(reinterpret_cast<u8 **>(&ref.entry), reinterpret_cast<Table30 *>(manager->contentRequest), state);
    output.result = aocServiceRunItemRequest(manager->service, manager->contentArchive, FUN_003df244(&ref.entry));
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
