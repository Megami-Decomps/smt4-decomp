/* NON_MATCHING: retail keeps every return value in a callee-saved register across the lock release (ldr r5, =0xC8A06BF8 before Leave, a hoisted zero in r7) and addresses the count through r5; the build returns the constants after the release. */
#include "nn/Result.h"
#include "nn/svc.h"

extern "C" {

void nn_os_CriticalSection_Enter(void *section);
void nn_os_CriticalSection_Leave(void *section);

extern u8 DAT_006430f4[];  /* guards the session reference count */
extern s32 DAT_005c0ac4;   /* session reference count */
extern u32 g_ipcServiceSessionHandle;

}

/* Holds a critical section for the enclosing scope. */
class CriticalSectionLock {
public:
    explicit CriticalSectionLock(void *section) : section(section) { nn_os_CriticalSection_Enter(section); }
    ~CriticalSectionLock() { nn_os_CriticalSection_Leave(section); }

private:
    void *section;
};

extern "C" {

/* Drops one reference to the service session, closing the session handle on the last one;
 * returns 0, the close error, or an error code when no reference is held. */
s32 FUN_00432104(void)
{
    CriticalSectionLock lock(DAT_006430f4);
    if (DAT_005c0ac4 == 0) {
        return (s32)0xC8A06BF8;
    }
    if (DAT_005c0ac4 == 1) {
        s32 result = nn::svc::CloseHandle(g_ipcServiceSessionHandle);
        if (nnResultIsFailure(result)) {
            return result;
        }
        g_ipcServiceSessionHandle = 0;
    }
    DAT_005c0ac4--;
    return 0;
}

} /* extern "C" */
