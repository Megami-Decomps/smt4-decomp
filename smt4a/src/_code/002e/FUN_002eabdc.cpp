#include "common.h"

extern "C" {

void onlineUrlEnsureParsed(void *object);

typedef struct Holder {
    /* 0x00 */ u8 unk00[8];
    /* 0x08 */ u8 value;
} Holder;

/* Resets the object (onlineUrlEnsureParsed) and returns the byte at 8. */
u8 FUN_002eabdc(Holder *object)
{
    onlineUrlEnsureParsed(object);
    return object->value;
}

} /* extern "C" */
