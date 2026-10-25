#include "common.h"
#include "shard/W6_W6Match7_NumericStepper.h"

extern "C" {

int gameFlagIsSet(u32 id);
int gameDataFlagTestBit(u32 id);

/* True when conditions 0x49a, 0x400 and 0x76 hold and either 0xc is clear or 0x10 holds. */
u32 FUN_0048e40c(void)
{
    if (gameFlagIsSet(0x49a) == 0) {
        return 0;
    }
    if (gameFlagIsSet(0x400) == 0) {
        return 0;
    }
    if (gameDataFlagTestBit(0x76) == 0) {
        return 0;
    }
    if (gameFlagIsSet(0xc) != 0) {
        if (gameFlagIsSet(0x10) == 0) {
            return 0;
        }
    }
    return 1;
}

} /* extern "C" */
