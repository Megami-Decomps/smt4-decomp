#include "common.h"

extern "C" {

void onlineUrlEnsureParsed(void *object);
void onlineSockAddrSetHost(u32 value, u32 arg);

typedef struct Optional {
    /* 0x00 */ u8 unk00[4];
    /* 0x04 */ u32 value;
    /* 0x08 */ u8 unk08[0x5D];
    /* 0x65 */ u8 valid;
} Optional;

/* Resets the optional, clears `valid` and passes its value and `arg` to onlineSockAddrSetHost. */
void onlineUrlSetHost(Optional *object, u32 arg)
{
    onlineUrlEnsureParsed(object);
    object->valid = 0;
    onlineSockAddrSetHost(object->value, arg);
}

} /* extern "C" */
