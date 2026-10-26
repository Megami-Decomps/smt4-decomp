/* NON_MATCHING: only the schedule of the two byte-3 loads differs (retail loads the word first and reads the byte through the saved source pointer). */
#include "common.h"

/* The LZ header word: the byte at +3 is merged into the loaded word separately (retail's bic/orr). */
union LzWord {
    u32 value;
    struct {
        u32 low : 24;
        u32 high : 8;
    } parts;
};

extern "C" {

/* Returns the advertised output size of a compressed block: the 24-bit size in the first word, or the full word that follows when that is zero. */
u32 FUN_0014f4f8(const u8 *source)
{
    LzWord word;
    word.value = *(const u32 *)source;
    word.parts.high = source[3];
    u32 size = word.value >> 8;
    if (size == 0) {
        word.value = *(const u32 *)(source + 4);
        word.parts.high = source[7];
        size = word.value;
    }
    return size;
}

} /* extern "C" */
