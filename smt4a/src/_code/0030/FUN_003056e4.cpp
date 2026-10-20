#include "common.h"

extern "C" {

void onlineUrlSetText(void *dest, u32 value);

typedef struct Holder {
    /* 0x00 */ u8 unk00[4];
    /* 0x04 */ u32 value;
} Holder;

/* Calls onlineUrlSetText(dest, the word at 4 of `source`) and returns `dest`. */
void *FUN_003056e4(void *dest, Holder *source)
{
    onlineUrlSetText(dest, source->value);
    return dest;
}

} /* extern "C" */
