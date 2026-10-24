/* NON_MATCHING: cflags -Ospace; calls the armlink-inlined getCount (now emulated). Remaining: retail keeps the double in d0 across the getter (armcc knew the getter's register use), this build must save it in d8 (vpush/vpop, 20-byte frame instead of push {r0-r3,...}) and schedules the float constant loads differently. */
#include "classes/Obj558bd0.h"
#include "AsdSDK/AsdDebugHooks.h"

extern "C" const wchar_t DAT_0053b4d8[]; /* L"\tTotal Time : %10d usec (%3.2f percent)" */
extern "C" const wchar_t DAT_0053b528[]; /* L"\tOccurence  : %10d      (%5.1f/sec)" */

/* Prints the profile of a counter that was hit at least once: total time with its share of the
 * time since the start, the call rate, and the minimum, maximum, average and last times. */
void Obj558bd0::printProfile()
{
    if (count != 0) {
        OnlineTimestamp now;
        s32 elapsed = (s32)(now - startTime);
        if (elapsed > 0) {
            asdDebugPrint(2, DAT_0053b4d8, (u32)totalUsec,
                          (f32)(s32)(totalUsec / 1000) / (f32)elapsed * 100.0f);
            asdDebugPrint(2, DAT_0053b528, getCount(), (f32)getCount() / (f32)elapsed * 1000.0f);
            asdDebugPrint(2, L"\tMin Time   : %10d usec", (u32)minUsec);
            asdDebugPrint(2, L"\tMax Time   : %10d usec", (u32)maxUsec);
            asdDebugPrint(2, L"\tAvg Time   : %10d usec", (u32)totalUsec / getCount());
            asdDebugPrint(2, L"\tLast Time  : %10d usec", (u32)lastUsec);
        }
    }
}
