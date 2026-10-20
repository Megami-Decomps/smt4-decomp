/* NON_MATCHING: register allocation only: retail loads the word address into r3, the mask into r2 and keeps the word in r1 */
#include "common.h"

extern "C" {

/* A single flag in a word: the word's address and the bit mask. */
typedef struct BitField {
    /* 0x00 */ u32 *word;
    /* 0x04 */ u32 mask;
} BitField;

/* Sets or clears the field's bits in its word. */
void bitFieldSet(BitField *field, s32 value)
{
    u32 *word = field->word;
    u32 mask = field->mask;
    u32 bits = *word;

    if (value != 0) {
        bits |= mask;
    } else {
        bits &= ~mask;
    }
    *word = bits;
}

} /* extern "C" */
