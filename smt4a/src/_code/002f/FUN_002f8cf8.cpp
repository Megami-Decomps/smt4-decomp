#include "common.h"

extern "C" {

void FUN_001177b4(u8 *member);
void FUN_002f8d10(void *object);
void FUN_002f8d6c(void *object);

typedef struct Holder {
    /* 0x00 */ u8 unk00[0xA4];
    /* 0xA4 */ u8 memberA4[1];
} Holder;

/* Runs FUN_001177b4 on the member at 0xA4, then FUN_002f8d10 and FUN_002f8d6c on the object. */
void FUN_002f8cf8(Holder *object)
{
    FUN_001177b4(object->memberA4);
    FUN_002f8d10(object);
    FUN_002f8d6c(object);
}

} /* extern "C" */
