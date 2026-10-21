#include "shard/Shard003C.h"

extern "C" {

extern u8 uniteStateIsDone(void);
extern u8 FUN_002c7e3c(void);
extern u8 FUN_002c7e54(void);
extern u8 campCecHasObject(void);
extern u8 partyPanelGetFlag(void);

/* True while the field state checks (uniteStateIsDone, FUN_002c7e3c, FUN_002c7e54, campCecHasObject, partyPanelGetFlag) all allow it. */
u32 fieldStateAllowsAction(void)
{
    u8 value;

    if (uniteStateIsDone() == 0) {
        return 0;
    }
    if (((value = FUN_002c7e3c(), value == 0 || value == 2) && (value = FUN_002c7e54(), value != 0xC)) &&
        ((value = campCecHasObject(), value == 0 &&
          (((value = partyPanelGetFlag(), value == 0xC || value == 4 || (value == 0xF || value == 0x11)) ||
            (value == 1 || value == 0x13)))))) {
        return 1;
    }
    return 0;
}

} /* extern "C" */
