#include "classes/WindowStatus.h"
#include "nn/Result.h"

namespace {
struct AocMainView {
    u8 unk00[0x7C]; // 0x00
    u8 service7c;   // 0x7C; start of an opaque subobject
};
}

extern "C" {
extern AocMainView *g_aocMain;
void FUN_00123934(void);
WindowStatusResult FUN_0035398c(void *owner);
s32 legacyResourceIdRemap(const WindowStatusResult *result);

// Query the AOC service and classify its status. The object itself is not touched.
WindowStatusOperationResult _ZN9Obj4221e47vfunc0cEv(Obj4221e4 *)
{
    WindowStatusOperationResult output(1);
    AocMainView *main = g_aocMain;
    FUN_00123934();
    output.result = FUN_0035398c(&main->service7c);
    bool succeeded = !nnResultIsFailureBool(legacyResourceIdRemap(&output.result));
    if (succeeded) {
        output.status = 0;
    } else if (legacyResourceIdRemap(&output.result) == (s32)0xc9213801) {
        output.status = 103;
    } else {
        legacyResourceIdRemap(&output.result);
        output.status = 100;
    }
    return output;
}
}
