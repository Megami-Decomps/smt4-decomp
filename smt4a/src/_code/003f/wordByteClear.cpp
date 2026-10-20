#include "shard/Shard003F.h"

extern "C" {

typedef struct WordByte {
    /* 0x00 */ u32 word;
    /* 0x04 */ u8 flag;
} WordByte;

void wordByteClear(WordByte *obj)
{
    obj->word = 0;
    obj->flag = 0;
}

} /* extern "C" */
