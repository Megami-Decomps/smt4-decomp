#include "common.h"
#include "shard/FUN_00467df8.h"

extern "C" {
int gameFlagIsSet(u32 flag);
s32 FUN_002de9d8();

u32 FUN_00467df8()
{
    switch (FUN_002de9d8()) {
    case 14:
        if (gameFlagIsSet(0x48e)) {
            return 0;
        }
        if (gameFlagIsSet(0x490)) {
            return 50;
        }
        break;
    case 5:
        if (gameFlagIsSet(0x48f)) {
            return 50;
        }
        break;
    }
    return 100;
}
}
