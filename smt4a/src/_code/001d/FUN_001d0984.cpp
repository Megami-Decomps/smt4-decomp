#include "common.h"

extern "C" {

void FUN_001c7bf0(u32 channel, u32 value);

typedef struct Words {
    /* 0x00 */ u32 words[1];
} Words;

/* Calls FUN_001c7bf0 with word `index` of the object and `value`. */
void FUN_001d0984(Words *object, s32 index, u32 value)
{
    FUN_001c7bf0(object->words[index], value);
}

} /* extern "C" */
