#include "common.h"

extern "C" const u8 g_digitCharacters[11];

/* Look up a supported digit, falling back to the character '0'. */
extern "C" u32 formatGetDigitCharacter(u32 digit)
{
    return digit < 11 ? g_digitCharacters[digit] : '0';
}
