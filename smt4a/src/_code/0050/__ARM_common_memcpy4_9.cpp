/* armcc's own 9-byte copy helper: the compiler emits it (section i.__ARM_common_memcpy4_9) for a strcpy
 * of a 9-byte literal into an aligned buffer and calls it instead of copying inline. This unit triggers
 * it; build.py keeps the helper's section under the unit's name. */
#include <string.h>

extern "C" void arm_common_memcpy4_9_use(char *text);

extern "C" void arm_common_memcpy4_9_trigger(void)
{
    char text[12];
    strcpy(text, "ABCDEFGH");
    arm_common_memcpy4_9_use(text);
}
