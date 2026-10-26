#include "common.h"
#include "gamedata/DevilRecord.h"

extern "C" {

extern u32 g_aocMain;

int packageFindRecordByName(u32 arg0, int id, u32 arg2);
int objHasFlagBit16(u32 arg);
int FUN_001b3214(u32 name);

/* Resolves `name` to an id and runs packageFindRecordByName on it; when `checked` is set it first requires objHasFlagBit16(g_aocMain) to succeed. */
bool aocRunByName(u32 arg0, u32 name, u32 arg2, int checked)
{
    int id;

    if (checked != 0 && objHasFlagBit16(g_aocMain) == 0) {
        return false;
    }
    id = FUN_001b3214(name);
    if (id == -1) {
        return false;
    }
    return packageFindRecordByName(arg0, id, arg2) != 0;
}

} /* extern "C" */
