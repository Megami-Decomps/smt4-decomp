/* NON_MATCHING: 30 lines, written as its Apocalypse twin FUN_0042d5b4: control flow and exits match retail; only the
 * callee-saved register numbering differs (retail: state r6, not-initialised code r7, section r5, request r8; here state
 * r7, code r8, section r6, request r5), as in the twin. */
#include "common.h"
#include "nn/Result.h"

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
nn::Result FUN_0035ae74(u32 arg);
void nn_os_CriticalSection_Enter(void *section);
void nn_os_CriticalSection_Leave(void *section);

/* Refreshes the network session (optionally requesting it first) and flushes pending changes. */
u32 FUN_0024ee68(s32 request)
{
    u32 result = 0;
    if (DAT_004656ca.initialized == 0 && FUN_00239a54() == 0) {
        result = NET_RESULT_NOT_INITIALIZED;
    } else {
        void *section = g_moduleCriticalSection2;
        nn_os_CriticalSection_Enter(section);
        if (request != 0) {
            if ((FUN_00239a54() | DAT_004656ca.available) == 0) {
                result = NET_RESULT_NOT_AVAILABLE;
                nn_os_CriticalSection_Leave(section);
                return result;
            }
            result = FUN_003594f0(14);
        }
        if (DAT_004656ca.connected != 0) {
            if (DAT_004656ca.dirty != 0) {
                nn::Result status = FUN_0035ae74(0);
                result = status;
                if ((s32)(status & NET_RESULT_FAILURE_BIT) < 0) {
                    nn_os_CriticalSection_Leave(section);
                    return result;
                }
                DAT_004656ca.dirty = 0;
            }
            nn_os_CriticalSection_Leave(section);
        } else {
            nn_os_CriticalSection_Leave(section);
            return NET_RESULT_NOT_INITIALIZED;
        }
    }
    return result;
}

} /* extern "C" */
