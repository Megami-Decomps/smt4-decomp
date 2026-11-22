/* armcc's own 12-byte fill helper: the compiler emits it (section i.__ARM_common_memset4_12) for a memset of
 * twelve bytes of one value into a word-aligned buffer and calls it instead of filling inline (the touch-region
 * and handle resets, saveLoadUiRebuildTouchRegions). This unit triggers it; build.py keeps the helper's section
 * under the unit's name. */
#include <string.h>

extern "C" void arm_common_memset4_12_use(int *words);

extern "C" void arm_common_memset4_12_trigger(int value)
{
    int words[3];
    memset(words, value, 12);
    arm_common_memset4_12_use(words);
}
