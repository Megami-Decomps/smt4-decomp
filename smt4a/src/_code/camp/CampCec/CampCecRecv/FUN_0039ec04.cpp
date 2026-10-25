/* NON_MATCHING: current C compilation omits the retail ARM hint NOP before the record lookup; the original source/inlining shape remains unrecovered. */
#include "camp/CampCec/CampCecRecv.h"
#include "script/ScriptArgs.h"

struct CampCecRecord {
    u8 unk00[0x62]; // 0x00
    u16 value;      // 0x62
};

extern "C" {
extern CampCecRecv* g_campCecRecv;
CampCecRecord* FUN_0031cf00(void);

// Returns the screen value or the current received record's value to the script.
u32 FUN_0039ec04(void)
{
    s32 screenValue = scrGetArg(0);
    if (g_campCecRecv == NULL) {
        scrSetResult(0);
    } else if (screenValue != 0) {
        scrSetResult(g_campCecRecv->scriptValue.value);
    } else {
        scrSetResult(FUN_0031cf00()->value);
    }
    return 1;
}
}
