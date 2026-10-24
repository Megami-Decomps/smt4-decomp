#include "common.h"

struct Buffers {
    /* 0x00 */ u8 unk00[4];
    /* 0x04 */ void *block;
    /* 0x08 */ void *buffer;
};

struct Object {
    /* 0x00 */ u8 unk00[0x3C];
    /* 0x3C */ Buffers *buffers;
};

extern "C" {
void block6Free(void *block);
int asdMemFree(void *block);
}

extern "C" void FUN_003adb24(Object *object)
{
    Buffers *buffers = object->buffers;

    block6Free(buffers->block);
    asdMemFree(buffers->buffer);
}
