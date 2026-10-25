/* NON_MATCHING: native hidden-result return is recovered; retail keeps the table entry below the request copy in the frame (92 vs 84 bytes). */
#include "classes/Obj4221fc.h"
#include "gamedata/TableEntryRef.h"
#include "nn/Result.h"

struct Obj4221fcManager {
    u8 unk00[0x18];
    u8 service18[0x64];
    u8 service7c[0x52c];
    u32 resourceId;
};

extern "C" {
extern Obj4221fcManager *g_aocMain;
void FUN_00161a10();
void table30GetEntryB(ItemPropertyResource **out, u32 table, u32 index);
ItemCodeInfo FUN_005000c4(ItemPropertyResource **resource);
WindowStatusResult FUN_00429178(void *owner, void *request, void *parameters);
s32 legacyResourceIdRemap(const WindowStatusResult *result);
}

WindowStatusOperationResult Obj4221fc::vfunc0c(const void *)
{
    WindowStatusOperationResult output(1);
    Obj4221fcManager *manager = g_aocMain;
    FUN_00161a10();
    TableEntryRef ref;
    table30GetEntryB(&ref.entry, manager->resourceId, state);
    ItemCodeInfo request = FUN_005000c4(&ref.entry);
    output.result = FUN_00429178(manager->service7c, manager->service18, &request);
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
