/* NON_MATCHING: retail ends the request with `svc 3` inline (built calls the placeholder svcExitProcess) and lays the 10 ms sleeps out of line,
 * computing 10 * 1000000 at run time with umull; register allocation and the error tests (lsrs + conditional call) differ too. */
#include "common.h"

extern "C" {

/* Result codes the applet service answers with while it is busy; the request is retried. */
#define APPLET_BUSY_A (0xc8a0cff0u)
#define APPLET_BUSY_B (0xe0a0cc08u)
#define APPLET_BUSY_C (0xc8a0cc02u)

extern s32 FUN_00170464(void);
extern void FUN_0017145c(s32 a, s32 b);
extern void FUN_00170474(s32 a);
extern void nn_applet_CTR_detail_OpenSession(void);
extern void nn_applet_CTR_detail_CloseSession(void);
extern u32 FUN_00171660(s32 a);
extern void FUN_0016e800(u32 result, u32 site);
extern void FUN_00170414(s32 a);
extern void FUN_00170ebc(s32 a);
extern u32 FUN_001715d0(u32 a, u32 b, u32 c);
extern void FUN_00170e58(void);
extern void svcSleepThread(s64 nanoseconds);
extern void svcExitProcess(void); /* svc 3 */

/* Switches the applet to state 9 if needed, sends the request (a, b, c) and finishes the
 * applet transaction; each service call is retried every 10 ms while the service is busy. */
u32 FUN_0015a5fc(u32 a, u32 b, u32 c)
{
    u32 result;

    if (FUN_00170464() != 9) {
        FUN_0017145c(0, 0);
        FUN_00170474(9);
        for (;;) {
            nn_applet_CTR_detail_OpenSession();
            result = FUN_00171660(1);
            nn_applet_CTR_detail_CloseSession();
            if (result == APPLET_BUSY_A || result == APPLET_BUSY_B || result == APPLET_BUSY_C) {
                svcSleepThread(10000000);
                continue;
            }
            break;
        }
        if (result >> 31) {
            FUN_0016e800(result, __current_pc());
        }
    }
    FUN_00170414(1);
    FUN_00170ebc(0);
    for (;;) {
        nn_applet_CTR_detail_OpenSession();
        result = FUN_001715d0(a, b, c);
        nn_applet_CTR_detail_CloseSession();
        if (result == APPLET_BUSY_A || result == APPLET_BUSY_B || result == APPLET_BUSY_C) {
            svcSleepThread(10000000);
            continue;
        }
        break;
    }
    if (result >> 31) {
        FUN_0016e800(result, __current_pc());
    }
    FUN_00170e58();
    svcExitProcess();
    return result;
}

} /* extern "C" */
