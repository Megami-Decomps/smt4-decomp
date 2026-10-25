/* NON_MATCHING: retail uses push {r4, r5, lr} where the compiled block uses push {r4, r5}. */
#include "common.h"

extern "C" char* FUN_00102c30(char* text, char* pattern)
{
    char* candidate = text;

    for (;;) {
        char* textCursor = candidate;
        char* patternCursor = pattern;
        s8 textByte;
        u8 patternByte;

        do {
            textByte = static_cast<u8>(*textCursor++);
            patternByte = static_cast<u8>(*patternCursor++);
        } while (textByte != 0 && textByte == patternByte);

        if (patternByte == 0) {
            return candidate;
        }
        if (textByte == 0) {
            return NULL;
        }
        ++candidate;
    }
}
