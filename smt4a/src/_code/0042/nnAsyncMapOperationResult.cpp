#include "classes/WindowStatus.h"
#include "nn/Result.h"

struct ResourceOperationStatus {
    u8 unk00[0x20];
    s32 state; // 0x20
    WindowStatusResult result; // 0x24
};

// Translate an asynchronous resource operation's state into its public result.
extern "C" WindowStatusResult nnAsyncMapOperationResult(const void *data)
{
    const ResourceOperationStatus *operation = static_cast<const ResourceOperationStatus *>(data);
    switch (operation->state) {
    case 1:
        return WindowStatusResult(0);
    case 0:
        return WindowStatusResult(0xc9213801);
    case 10:
        return WindowStatusResult(0xc9213802);
    case 11:
        return WindowStatusResult(0xc9213803);
    case 12:
        return WindowStatusResult(0xc9213804);
    case -2:
        if (nnResultIsSuccess(operation->result.code))
            return WindowStatusResult(0xf9613919);
        return WindowStatusResult(operation->result.code);
    case -3:
        return WindowStatusResult(operation->result.code, operation->result.description);
    default:
        return WindowStatusResult(0xc9613918);
    }
}
