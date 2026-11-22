#include "shard/W4_Match3_AocMainA.h"
#include "addon/AocSystemA.h"

extern "C" {

/* Returns 1 when objHasFlagBit16 succeeds on the add-on main object and packageFindRecordByName(system, 0x39, key) succeeds too. */
u32 aocHasType39Record(AocSystemA *system, u32 key)
{
    if (objHasFlagBit16(g_aocMain) != 0) {
        return packageFindRecordByName(system, 0x39, key) != NULL;
    }
    return 0;
}

} /* extern "C" */
