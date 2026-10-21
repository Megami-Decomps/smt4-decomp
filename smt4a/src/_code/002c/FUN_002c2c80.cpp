#include "common.h"

extern "C" {
struct EmbeddedObjectOwner {
    /* 0x00 */ u8 unk00[0x10];
    /* 0x10 */ u8 object;
};
void objClearFlagPair(void *object);

/* Forwards to the embedded object's operation. */
void FUN_002c2c80(EmbeddedObjectOwner *owner)
{
    objClearFlagPair(&owner->object);
}
}
