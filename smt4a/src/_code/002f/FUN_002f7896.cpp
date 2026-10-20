#include "common.h"

extern "C" {

void strEqualsNullSafe(u32 value);

typedef struct Holder {
    /* 0x00 */ u8 unk00[4];
    /* 0x04 */ u32 value;
} Holder;

/* Passes the word at 4 to strEqualsNullSafe. */
void FUN_002f7896(Holder *object)
{
    strEqualsNullSafe(object->value);
}

} /* extern "C" */
