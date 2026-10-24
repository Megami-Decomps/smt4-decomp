/* NON_MATCHING: only stack-argument setup/register allocation differs (retail keeps 0xFF in ip and the busy-flag address in r5) */
#include "nn/Result.h"

struct CallbackState {
    u8 unk00;          // 0x00
    u8 busy;           // 0x01 (0x589285)
    u8 unk02;          // 0x02
    u8 started;        // 0x03
    u16 valueA;        // 0x04
    u16 valueB;        // 0x06
    void *handle;      // 0x08
    u8 unk0C[0xC];     // 0x0C
    void *buffer;      // 0x18
    u32 bufferSize;    // 0x1C
};

extern "C" {

extern CallbackState g_callbackState; /* 0x589284 */
extern u8 DAT_005b4824;               /* 0x5b4824 */

s32 FUN_001a0ff4(void *handle, void *buffer, u32 size, u32 a, u32 b, u8 *busy);

/* Starts the callback job on the state's handle with its buffer unless it is busy; marks it started on success. */
void FUN_00159030(void)
{
    s32 result;

    g_callbackState.buffer = &DAT_005b4824;
    g_callbackState.bufferSize = 0xC25C;
    g_callbackState.valueA = 0xFF;
    g_callbackState.valueB = 0xFF;
    if (g_callbackState.handle != NULL && g_callbackState.busy == 0) {
        result = FUN_001a0ff4(g_callbackState.handle, g_callbackState.buffer, g_callbackState.bufferSize, 0xFF, 0xFF,
                              &g_callbackState.busy);
    } else {
        result = 0xC8A0A7FC;
    }
    if (nnResultIsSuccess(result)) {
        g_callbackState.started = 1;
    }
}

} /* extern "C" */
