/* One-time start-up of the system services: configuration and AM services, then the two system initialisers. Any failure
 * is reported to the fatal error handler together with the address it was detected at. */
#include "nn/Result.h"

extern "C" {
extern u8 DAT_0044e598;
extern u8 DAT_00407e7b[];
extern u8 DAT_004719e8[];

void FUN_0010f5dc(void);
void nn_cfg_CTR_Initialize(void);
s32 nnAmConnectOnce(void);
s32 FUN_0010feb4(const void *table, const void *name);
s32 FUN_0010ff1c(void);
void FUN_002c131c(s32 result, u32 address);

/* Reports a failed result to the fatal error handler, with the address of the check. */
static inline void throwFatalIfFailed(s32 result, u32 address)
{
    if (nnResultIsFailure(result)) {
        FUN_002c131c(result, address);
    }
}

void sysInitializeServices(void)
{
    if (DAT_0044e598 != 0) {
        return;
    }
    FUN_0010f5dc();
    nn_cfg_CTR_Initialize();
    s32 result = nnAmConnectOnce();
    if (!nnResultIsFailure(result)) {
        result = FUN_0010feb4(DAT_004719e8, DAT_00407e7b);
        if (!nnResultIsFailure(result)) {
            result = FUN_0010ff1c();
            if (!nnResultIsFailure(result)) {
                result = 0;
            }
        }
        if (!nnResultIsFailure(result)) {
            result = 0;
        }
    }
    throwFatalIfFailed(result, __current_pc());
    DAT_0044e598 = 1;
}
}
