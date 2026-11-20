#include "camp/CampCec/CampCecRecv.h"
#include "script/ScriptArgs.h"

struct CampCecRecord {
    u8 unk00[0x62]; // 0x00
    u16 value;      // 0x62
};

extern "C" {
extern CampCecRecv* g_campCecRecv;
CampCecRecord* stockFindSelectedUnit(void);

// Returns to the script the receive screen's value when the argument asks for it, else the current received
// record's value (0 when there is no receive screen).
u32 scrCommCecGetCount(void)
{
    s32 screenValue = scrGetArg(0);
    if (g_campCecRecv != NULL && screenValue != 0) {
        scrSetResult(g_campCecRecv->scriptValue.value);
    } else if (g_campCecRecv == NULL) {
        scrSetResult(0);
    } else {
        scrSetResult(stockFindSelectedUnit()->value);
    }
    return 1;
}
}
