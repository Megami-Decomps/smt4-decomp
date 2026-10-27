/* NON_MATCHING: control flow, result flag, early/late lock releases match retail; only the callee-saved register numbering differs (retail: section r5, state r6, error r7, dispatch r8; here dispatch r5, section r6, state r7, error r8). */
#include "common.h"
#include "nn/Result.h"

struct ResourceSyncState {
    u8 enabled;
    u8 ready;
    u8 pending;
    u8 unk03;
    s8 available;
};

extern "C" {
extern ResourceSyncState DAT_005b4486;
extern u32 g_moduleCriticalSection6;
s32 FUN_0042fbd4(void);
u32 resourceDispatch2(u32);
nn::Result FUN_004320c4(u32);
void nn_os_CriticalSection_Enter(void *);
void nn_os_CriticalSection_Leave(void *);

// Synchronize pending resource work, optionally dispatching a new request.
u32 FUN_0042d5b4(s32 dispatch)
{
    u32 result = 0;
    if (DAT_005b4486.enabled == 0 && FUN_0042fbd4() == 0) {
        result = 0xc8a10bf0;
    } else {
        void *section = &g_moduleCriticalSection6;
        nn_os_CriticalSection_Enter(section);
        if (dispatch != 0) {
            if ((FUN_0042fbd4() | DAT_005b4486.available) == 0) {
                result = 0xc8810bea;
                nn_os_CriticalSection_Leave(section);
                return result;
            }
            result = resourceDispatch2(14);
        }
        if (DAT_005b4486.ready != 0) {
            if (DAT_005b4486.pending != 0) {
                nn::Result status = FUN_004320c4(0);
                result = status;
                if ((s32)(status & 0x80000000) < 0) {
                    nn_os_CriticalSection_Leave(section);
                    return result;
                }
                DAT_005b4486.pending = 0;
            }
            nn_os_CriticalSection_Leave(section);
        } else {
            nn_os_CriticalSection_Leave(section);
            return 0xc8a10bf0;
        }
    }
    return result;
}
}
