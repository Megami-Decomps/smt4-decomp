/* armcc's own 7-byte copy helper: the compiler emits it (section i.__ARM_common_memcpy4_7) for a strcpy
 * of a 7-byte literal into an aligned buffer and calls it instead of copying inline. This unit triggers
 * it; build.py keeps the helper's section under the unit's name. */
#include <string.h>

extern "C" void arm_common_memcpy4_7_use(char *text);

extern "C" void arm_common_memcpy4_7_trigger(void)
{
    char text[8];
    strcpy(text, "ABCDEF");
    arm_common_memcpy4_7_use(text);
}
