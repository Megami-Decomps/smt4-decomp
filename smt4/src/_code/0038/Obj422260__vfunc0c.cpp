/* NON_MATCHING: native hidden-result return is recovered; retail keeps the table entry below the request copy in the frame (92 vs 84 bytes). */
#include "classes/Obj422260.h"
#include "gamedata/TableEntryRef.h"
#include "nn/Result.h"

struct Obj422260Manager {
    u8 unk00[0x18];
    u8 service18[0x64];
    u8 service7c[0x534];
    u32 resourceId;
    u8 unk5b4[0xE0];
    char name[1];
};

extern "C" {
extern Obj422260Manager *g_aocMain;
void FUN_00123934();
void ownerTableEntryGet(ItemPropertyResource **out, u32 table, u32 index);
ItemCodeInfo FUN_003df8e4(ItemPropertyResource **resource);
WindowStatusResult FUN_00353a74(void *owner, void *request, const void *metadata, const char *name);
s32 legacyResourceIdRemap(const WindowStatusResult *result);
}

WindowStatusOperationResult Obj422260::vfunc0c(const void *)
{
    WindowStatusOperationResult output(1);
    Obj422260Manager *manager = g_aocMain;
    FUN_00123934();
    TableEntryRef ref;
    ownerTableEntryGet(&ref.entry, manager->resourceId, state);
    ItemCodeInfo request = FUN_003df8e4(&ref.entry);
    output.result = FUN_00353a74(manager->service7c, manager->service18, &request, manager->name);
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
