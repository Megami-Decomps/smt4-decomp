/* NON_MATCHING: native hidden-result return is recovered; request-copy and call register scheduling still differ. */
#include "classes/Obj4221fc.h"

struct Obj4221fcManager {
    u8 unk00[0x18];
    u8 service18[0x64];
    u8 service7c[0x52c];
    u32 resourceId;
};
struct Obj4221fcRequest { u32 words[9]; };
extern "C" {
extern Obj4221fcManager *g_aocMain;
void FUN_00161a10();
void table30GetEntryB(u32 *entry, u32 table, u32 index);
void FUN_005000c4(Obj4221fcRequest *request, const u32 *entry);
void FUN_00429178(WindowStatusResult *result, void *service, void *context, const Obj4221fcRequest *request);
s32 legacyResourceIdRemap(const WindowStatusResult *result);
}

WindowStatusOperationResult Obj4221fc::vfunc0c(const void *)
{
    WindowStatusOperationResult output;
    output.status = 1;
    output.reserved0c = 0;
    output.reserved10 = 0;
    output.result = WindowStatusResult(0);
    Obj4221fcManager *manager = g_aocMain;
    FUN_00161a10();
    u32 entry;
    table30GetEntryB(&entry, manager->resourceId, state);
    Obj4221fcRequest request;
    FUN_005000c4(&request, &entry);
    Obj4221fcRequest copiedRequest = request;
    WindowStatusResult result;
    FUN_00429178(&result, manager->service7c, manager->service18, &copiedRequest);
    output.result = result;
    if (legacyResourceIdRemap(&output.result) >= 0) {
        output.status = 0;
    } else if (legacyResourceIdRemap(&output.result) == (s32)0xc9213801) {
        output.status = 0x67;
    } else {
        legacyResourceIdRemap(&output.result);
        output.status = 100;
    }
    return output;
}
