#ifndef SMT4_FONT_TEXTGLYPHENCODING_H
#define SMT4_FONT_TEXTGLYPHENCODING_H
#include "common.h"
extern "C" {
// Convert source bytes to two-byte glyph codes; null output selects the default buffer.
// The output ends with two zero bytes. The caller supplies sufficient capacity.
void textConvertToGlyphPairsInto(const u8 *source, s8 *output);
}
#endif
