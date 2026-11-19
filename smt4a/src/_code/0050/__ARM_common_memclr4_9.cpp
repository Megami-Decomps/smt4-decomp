/* armcc's own 9-byte clear helper: the compiler emits it (section i.__ARM_common_memclr4_9) for a memset
 * of nine zero bytes into a word-aligned buffer and calls it instead of clearing inline (Apocalypse's
 * clear-save options, clearSaveUpdate). This unit triggers it; build.py keeps the helper's section under
 * the unit's name. */
#include <string.h>

extern "C" void arm_common_memclr4_9_use(char *buffer);

extern "C" void arm_common_memclr4_9_trigger(void)
{
    int words[3];
    memset(words, 0, 9);
    arm_common_memclr4_9_use(reinterpret_cast<char *>(words));
}
