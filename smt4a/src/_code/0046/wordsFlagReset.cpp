#include "shard/Shard0046.h"

extern "C" {

void wordsFlagReset(WordsFlag *obj)
{
    if (obj->flag != 0) {
        obj->w0 = 0;
        obj->w1 = 0;
        obj->w2 = 0;
        obj->flag = 0;
    }
}

} /* extern "C" */
