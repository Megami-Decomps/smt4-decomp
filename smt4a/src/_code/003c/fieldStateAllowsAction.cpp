#include "shard/Shard003C.h"

extern "C" {

extern u8 FUN_0020a2fc(void);
extern u8 FUN_002c7e3c(void);
extern u8 FUN_002c7e54(void);
extern u8 FUN_00237608(void);
extern u8 partyPanelGetFlag(void);

/* True while the field state checks (FUN_0020a2fc, FUN_002c7e3c, FUN_002c7e54, FUN_00237608, partyPanelGetFlag) all allow it. */
u32 fieldStateAllowsAction(void)
{
    u8 value;

    if (FUN_0020a2fc() == 0) {
        return 0;
    }
    if (((value = FUN_002c7e3c(), value == 0 || value == 2) && (value = FUN_002c7e54(), value != 0xC)) &&
        ((value = FUN_00237608(), value == 0 &&
          (((value = partyPanelGetFlag(), value == 0xC || value == 4 || (value == 0xF || value == 0x11)) ||
            (value == 1 || value == 0x13)))))) {
        return 1;
    }
    return 0;
}

} /* extern "C" */
