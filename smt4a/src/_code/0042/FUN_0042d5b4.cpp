/* NON_MATCHING: critical-section constant reloads and result-branch lowering differ. */
#include "common.h"

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
u32 FUN_004320c4(u32);
void nn_os_CriticalSection_Enter(void *);
void nn_os_CriticalSection_Leave(void *);

// Synchronize pending resource work, optionally dispatching a new request.
u32 FUN_0042d5b4(s32 dispatch)
{
    u32 result = 0;
    if (DAT_005b4486.enabled == 0 && FUN_0042fbd4() == 0)
        return 0xc8a10bf0;
    nn_os_CriticalSection_Enter(&g_moduleCriticalSection6);
    if (dispatch != 0) {
        if ((FUN_0042fbd4() | DAT_005b4486.available) == 0) {
            nn_os_CriticalSection_Leave(&g_moduleCriticalSection6);
            return 0xc8810bea;
        }
        result = resourceDispatch2(14);
    }
    if (DAT_005b4486.ready == 0) {
        nn_os_CriticalSection_Leave(&g_moduleCriticalSection6);
        return 0xc8a10bf0;
    }
    if (DAT_005b4486.pending != 0) {
        result = FUN_004320c4(0);
        if (result & 0x80000000) {
            nn_os_CriticalSection_Leave(&g_moduleCriticalSection6);
            return result;
        }
        DAT_005b4486.pending = 0;
    }
    nn_os_CriticalSection_Leave(&g_moduleCriticalSection6);
    return result;
}
}
