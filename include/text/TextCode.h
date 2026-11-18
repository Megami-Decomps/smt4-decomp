/* The message text's control codes: two-byte values in the Shift-JIS user range, kept in the text buffers with
 * their bytes swapped (lead byte first), like every other character. */
#ifndef TEXT_TEXTCODE_H
#define TEXT_TEXTCODE_H

#include "common.h"

/* Opens a ruby (furigana) run: the reading's characters follow, up to its terminator. */
#define TEXT_CODE_RUBY 0xF812

#ifdef __cplusplus
extern "C" {
#endif

/* Swaps the two bytes of a character code. Its body is one `rev16 r0, r0`: armlink inlined it at every call
 * and removed the function, so the image holds no copy (smt4a messageExpandControlCode at 0x142198 and 0x142224, smt4 messageExpandControlCode at 0x10ca44 and 0x10cad0). */
u16 textCodeSwapBytes(u16 code);

#ifdef __cplusplus
}
#endif

#endif
