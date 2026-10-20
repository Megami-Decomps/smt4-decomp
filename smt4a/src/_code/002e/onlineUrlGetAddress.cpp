#include "common.h"

extern "C" {

void onlineUrlEnsureParsed(void *object);

typedef struct Holder {
    /* 0x00 */ u8 unk00[4];
    /* 0x04 */ u32 value;
} Holder;

/* Resets the object (onlineUrlEnsureParsed) and returns the word at 4. */
u32 onlineUrlGetAddress(Holder *object)
{
    onlineUrlEnsureParsed(object);
    return object->value;
}

} /* extern "C" */
