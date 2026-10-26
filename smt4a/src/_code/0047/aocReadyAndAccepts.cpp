#include "common.h"
#include "addon/AocSystem.h"

extern "C" {

extern u32 g_aocMain;

s32 packageFindRecordByName(u32 a, u32 b, u32 c);
s32 objHasFlagBit16(u32 aoc);

/* True when the add-on content is ready and packageFindRecordByName (with kind 0x38) accepts (a, b). */
u32 aocReadyAndAccepts(u32 a, u32 b)
{
    s32 result = objHasFlagBit16(g_aocMain);

    if (result != 0) {
        result = packageFindRecordByName(a, 0x38, b);
        if (result != 0) {
            result = 1;
        }
    }
    return result;
}

} /* extern "C" */
