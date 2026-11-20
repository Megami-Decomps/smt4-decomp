#include "classes/WordsFlag8.h"

extern "C" {

/* Clears and invalidates an active record. */
void wordsFlag8Reset(WordsFlag8 *flags)
{
    if (flags->valid != 0) {
        flags->id = 0;
        flags->unk04 = 0;
        flags->valid = 0;
    }
}

} /* extern "C" */
