/* One-time start-up of the system services: configuration and AM services, then the two system initialisers. Any failure
 * is reported to the fatal error handler together with the address it was detected at. */
#include "nn/Result.h"

extern "C" {
extern u8 DAT_00589364;
extern u8 DAT_00536cc3[];
extern u8 DAT_005c0a80[];

void FUN_00146720(void);
void nn_cfg_CTR_Initialize(void);
s32 nnAmConnectOnce(void);
s32 FUN_00147088(const void *table, const void *name);
s32 FUN_001470f0(void);
void FUN_00189a38(s32 result, u32 address);

/* Reports a failed result to the fatal error handler, with the address of the check. */
static inline void throwFatalIfFailed(s32 result, u32 address)
{
    if (nnResultIsFailure(result)) {
        FUN_00189a38(result, address);
    }
}

void sysInitializeServices(void)
{
    if (DAT_00589364 != 0) {
        return;
    }
    FUN_00146720();
    nn_cfg_CTR_Initialize();
    s32 result = nnAmConnectOnce();
    if (!nnResultIsFailure(result)) {
        result = FUN_00147088(DAT_005c0a80, DAT_00536cc3);
        if (!nnResultIsFailure(result)) {
            result = FUN_001470f0();
            if (!nnResultIsFailure(result)) {
                result = 0;
            }
        }
        if (!nnResultIsFailure(result)) {
            result = 0;
        }
    }
    throwFatalIfFailed(result, __current_pc());
    DAT_00589364 = 1;
}
}
