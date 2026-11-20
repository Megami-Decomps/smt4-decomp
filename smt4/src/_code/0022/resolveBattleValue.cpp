#include "battle/BtlMainAccess.h"
#include "common.h"

extern "C" {

extern int btlEffectOwnerGetBestSlotValue(u32 a);
extern int btlEffectFindNamedEntry(u32 a, u32 b);
extern int btlScriptUnitIsIncapacitated(void);

typedef struct Entry {
    /* 0x00 */ u8 unk00[0x10];
    /* 0x10 */ s16 value;
} Entry;

int resolveBattleValue(u32 a, u32 b)
{
    int result;
    Entry *entry;

    reinterpret_cast<int>(btlGetMainState());
    if (btlScriptUnitIsIncapacitated() != 0) {
        result = 5;
    } else {
        entry = (Entry *)btlEffectFindNamedEntry(a, b);
        result = 0;
        if (entry != NULL) {
            result = entry->value;
        }
        if (entry == NULL || result == 0) {
            result = btlEffectOwnerGetBestSlotValue(a);
            return result;
        }
    }
    return result;
}

} /* extern "C" */
