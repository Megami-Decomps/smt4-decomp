#include "addon/aocMain.h"
#include "classes/WindowStatus.h"
#include "nn/Result.h"

extern "C" {
void FUN_00161a10(void);
s32 legacyResourceIdRemap(const WindowStatusResult *result);

// Query the AOC service and classify its status. The object itself is not touched.
WindowStatusOperationResult _ZN9Obj4221e47vfunc0cEv(Obj4221e4 *)
{
    WindowStatusOperationResult output(1);
    AocMain *main = g_aocMain;
    FUN_00161a10();
    output.result = FUN_004288e0(&main->service);
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
