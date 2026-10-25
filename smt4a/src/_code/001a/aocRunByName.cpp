#include "common.h"
#include "gamedata/DevilRecord.h"

extern "C" {

extern u32 g_aocMain;

int FUN_001b2d88(u32 arg0, int id, u32 arg2);
int FUN_001b3148(u32 arg);
int FUN_001b3214(u32 name);

/* Resolves `name` to an id and runs FUN_001b2d88 on it; when `checked` is set it first requires FUN_001b3148(g_aocMain) to succeed. */
bool aocRunByName(u32 arg0, u32 name, u32 arg2, int checked)
{
    int id;

    if (checked != 0 && FUN_001b3148(g_aocMain) == 0) {
        return false;
    }
    id = FUN_001b3214(name);
    if (id == -1) {
        return false;
    }
    return FUN_001b2d88(arg0, id, arg2) != 0;
}

} /* extern "C" */
