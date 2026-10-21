#include "common.h"

extern "C" {
struct EmbeddedObjectOwner {
    /* 0x00 */ u8 unk00[0x10];
    /* 0x10 */ u8 object;
};
void FUN_002c2c88(void *object);

/* Forwards to the embedded object's operation. */
void FUN_002c2c80(EmbeddedObjectOwner *owner)
{
    FUN_002c2c88(&owner->object);
}
}
