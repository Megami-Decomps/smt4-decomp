/* NON_MATCHING: native hidden-result return is recovered; retail keeps the table entry below the request copy in the frame (92 vs 84 bytes). */
#include "classes/Obj4221fc.h"
#include "gamedata/TableEntryRef.h"
#include "nn/Result.h"
#include "util/FUN_00234624.h"

struct Obj4221fcManager {
    u8 unk00[0x18];
    u8 service18[0x64];
    u8 service7c[0x52c];
    u32 resourceId;
};

extern "C" {
extern Obj4221fcManager *g_aocMain;
void FUN_00123934();
ItemCodeInfo FUN_003df244(ItemPropertyResource **resource);
WindowStatusResult FUN_003540d8(void *owner, void *request, void *parameters);
s32 legacyResourceIdRemap(const WindowStatusResult *result);
}

WindowStatusOperationResult Obj4221fc::vfunc0c(const void *)
{
    WindowStatusOperationResult output(1);
    Obj4221fcManager *manager = g_aocMain;
    FUN_00123934();
    TableEntryRef ref;
    FUN_00234624(reinterpret_cast<int *>(&ref.entry), reinterpret_cast<void *>(manager->resourceId), state);
    ItemCodeInfo request = FUN_003df244(&ref.entry);
    output.result = FUN_003540d8(manager->service7c, manager->service18, &request);
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
