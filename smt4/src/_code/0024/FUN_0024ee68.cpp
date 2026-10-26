/* NON_MATCHING: retail routes every exit through shared Leave+`mov r0, r4` tails and keeps the first not-initialised constant in r4; this build duplicates the exits and keeps the constants in r8. */
#include "common.h"

extern "C" {

#define NET_RESULT_NOT_INITIALIZED 0xC8A10BF0
#define NET_RESULT_NOT_AVAILABLE 0xC8810BEA
#define NET_RESULT_FAILURE_BIT 0x80000000

/* The network session flags guarded by the session critical section. */
typedef struct NetSessionFlags {
    /* 0x00 */ u8 initialized;
    /* 0x01 */ u8 connected;
    /* 0x02 */ u8 dirty;
    /* 0x03 */ u8 unk03;
    /* 0x04 */ s8 available;
} NetSessionFlags;

extern NetSessionFlags DAT_004656ca;
extern u8 g_moduleCriticalSection2[];

s32 FUN_00239a54(void);
u32 FUN_003594f0(u32 arg);
u32 FUN_0035ae74(u32 arg);
void nn_os_CriticalSection_Enter(void *section);
void nn_os_CriticalSection_Leave(void *section);

/* Refreshes the network session (optionally requesting it first) and flushes pending changes. */
u32 FUN_0024ee68(s32 request)
{
    u32 result = 0;

    if (!DAT_004656ca.initialized && !FUN_00239a54()) {
        result = NET_RESULT_NOT_INITIALIZED;
        return result;
    }
    void *section = g_moduleCriticalSection2;
    nn_os_CriticalSection_Enter(section);
    if (request) {
        if (!(FUN_00239a54() | DAT_004656ca.available)) {
            result = NET_RESULT_NOT_AVAILABLE;
            nn_os_CriticalSection_Leave(section);
            return result;
        }
        result = FUN_003594f0(14);
    }
    if (!DAT_004656ca.connected) {
        result = NET_RESULT_NOT_INITIALIZED;
        nn_os_CriticalSection_Leave(section);
        return result;
    }
    if (DAT_004656ca.dirty) {
        result = FUN_0035ae74(0);
        if ((s32)(result & NET_RESULT_FAILURE_BIT) >= 0) {
            DAT_004656ca.dirty = 0;
        }
    }
    nn_os_CriticalSection_Leave(section);
    return result;
}

} /* extern "C" */
