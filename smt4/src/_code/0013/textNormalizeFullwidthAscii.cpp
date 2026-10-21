/* NON_MATCHING: counter/code-unit registers are ip/r3 instead of retail's r3/ip; all other instructions match. */
#include "common.h"

// Copy UTF-16 text, narrowing fullwidth ASCII and reserving the final slot for NUL.
extern "C" void textNormalizeFullwidthAscii(const u16 *source, u16 *destination, s32 capacity)
{
    s32 index = 0;
    for (;;) {
        u16 character = source[index];
        if (character == 0)
            break;
        if (character >= 0xff01 && character <= 0xff5e)
            character -= 0xfee0;
        else if (character == 0x3000)
            character = 0x20;
        destination[index] = character;
        if (++index >= capacity) {
            --index; // Reserve the final inspected slot for the terminator.
            break;
        }
    }
    destination[index] = 0;
}
