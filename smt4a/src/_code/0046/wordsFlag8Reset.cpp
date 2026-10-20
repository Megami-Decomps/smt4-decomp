#include "shard/Shard0046.h"

extern "C" {

typedef struct WordsFlag8 {
    /* 0x00 */ u32 w0;
    /* 0x04 */ u32 w1;
    /* 0x08 */ u8 flag;
} WordsFlag8;

void wordsFlag8Reset(WordsFlag8 *obj)
{
    if (obj->flag != 0) {
        obj->w0 = 0;
        obj->w1 = 0;
        obj->flag = 0;
    }
}

} /* extern "C" */
