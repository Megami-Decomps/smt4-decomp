#include "shard/W5_W5Match2_ValidationPair.h"
#include "nn/Result.h"

struct ResourceOperationStatus {
    u8 unk00[0x20];
    s32 state; // 0x20
    ValidationPair result; // 0x24
};

extern "C" {
void _ZN18WindowStatusResultC1Ej(ValidationPair *result, u32 code);
void valuePairStore(ValidationPair *result, ValidationPair value);

// Translate an asynchronous resource operation's state into its public result.
void nnAsyncMapOperationResult(ValidationPair *result, const ResourceOperationStatus *operation)
{
    switch (operation->state) {
    case 1:
        _ZN18WindowStatusResultC1Ej(result, 0);
        return;
    case 0:
        _ZN18WindowStatusResultC1Ej(result, 0xc9213801);
        return;
    case 10:
        _ZN18WindowStatusResultC1Ej(result, 0xc9213802);
        return;
    case 11:
        _ZN18WindowStatusResultC1Ej(result, 0xc9213803);
        return;
    case 12:
        _ZN18WindowStatusResultC1Ej(result, 0xc9213804);
        return;
    case -2:
        if (nnResultIsSuccess(operation->result.first)) {
            _ZN18WindowStatusResultC1Ej(result, 0xf9613919);
            return;
        }
        _ZN18WindowStatusResultC1Ej(result, operation->result.first);
        return;
    case -3:
        valuePairStore(result, operation->result);
        return;
    default:
        _ZN18WindowStatusResultC1Ej(result, 0xc9613918);
        return;
    }
}
}
